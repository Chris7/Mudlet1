#include "luaInterface.h"
#include <QDebug>
using namespace std;

tableObject::tableObject(QString name):
    tableName(name){
}

tableObject* tableObject::getParent(){
    return parent;
}

QString tableObject::getName(){
    return tableName;
}

QList<tableObject*> tableObject::getChildren(){
    return children;
}

void tableObject::addChildTable(tableObject* table){
    children.append(table);
}

void tableObject::addVariable(QString name, QString entry){
    variables.insert(name, entry);
}

QMap<QString, QString> tableObject::getVariables(){
    return variables;
}

QString tableObject::getVariable(QString name){
    if (variables.contains(name))
        return variables[name];
    return "";
}

void tableObject::setParent(tableObject* table){
    parent = table;
}

void tableObject::setType(int tType){
    tableType=tType;
}

int tableObject::getType(){
    return tableType;
}

luaInterface::luaInterface( Host * pH)
:mpHost( pH )
{
    interpreter = mpHost->getLuaInterpreter();
}

void luaInterface::saveVar(QString oldName, QString newName, QString newValue){
    //qDebug()<<"saving variable"<<oldName<<"to"<<newName<<":"<<newValue;
    L = interpreter->pGlobalLua;
    lua_pushnil(L);
    lua_setglobal(L, oldName.toLatin1().data());
    if (newValue.toInt()){
        lua_pushnumber(L,newValue.toInt());
    }
    else if (newValue.toFloat()){
        lua_pushnumber(L, newValue.toFloat());
    }
    else{
        lua_pushstring(L, newValue.toLatin1().data());
    }
    lua_setglobal(L, newName.toLatin1().data());
}

void luaInterface::iterateTable(lua_State* L, QList<tableObject*> &tables, QList<tableObject*> &tables2, QStringList nestList){
    //this function goes through a table and adds any new tables found
    lua_pushnil(L);
    tableObject* rootTable = tables.first();
    QString rootName = rootTable->getName();
    //qDebug()<<lua_gettop(L);
    while (lua_next(L, -2)){
        int vType = lua_type(L,-1);
        int kType = lua_type(L,-2);
        //qDebug()<<kType<<":"<<vType;
        lua_pushvalue(L,-2);
        QString keyName = lua_tostring(L,-1);
        QString valueName;
        lua_pop(L,1);
        if (vType == LUA_TTABLE){
            if (!nestList.contains(keyName) && keyName != rootName && keyName != "loaded" && keyName[0] != '_'){
                tableObject* newTable = new tableObject(keyName);
                newTable->setParent(rootTable);
                newTable->setType(kType);
                tables.append(newTable);
                tables2.append(newTable);
            }
        }
        else if (vType == LUA_TSTRING || vType == LUA_TNUMBER){
            lua_pushvalue(L,-1);
            valueName = lua_tostring(L,-1);
            rootTable->addVariable(keyName, valueName);
            //qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
            //qDebug()<<rootTable->getVariables();
            lua_pop(L,1);
        }
        else if (vType == LUA_TBOOLEAN){
            valueName = lua_toboolean(L, -1) == 0 ? "false" : "true";
            rootTable->addVariable(keyName, valueName);
            //qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
        }
        else{
            //qDebug()<<vType;
        }
        //qDebug()<<keyName<<":"<<valueName;
        lua_pop(L,1);
    }
}

void luaInterface::getVars(QTreeWidgetItem * mpVarBaseItem){
    //Help from:
    //http://cdry.wordpress.com/2010/06/26/how-to-save-global-variables-using-the-lua-c-api/
    //another resource: http://lua-users.org/lists/lua-l/2004-06/msg00329.html
    //This code is hideous but it works and doesn't affect performance.
    L = interpreter->pGlobalLua;
    QList<tableObject*> tables;
    tableObject* rootTable = new tableObject("_G");
    lua_pushnil(L);
    while (lua_next(L, LUA_GLOBALSINDEX)){
        int vType = lua_type(L,-1);
        int kType = lua_type(L,-2);
        lua_pushvalue(L,-2);
        QString keyName = lua_tostring(L,-1);
        QString valueName;
        lua_pop(L,1);
        if (vType == LUA_TTABLE){
            if (keyName != "loaded" && keyName[0] != '_'){
                tableObject* newTable = new tableObject(keyName);
                newTable->setParent(rootTable);
                tables.append(newTable);
            }
        }
        else if (vType == LUA_TSTRING || vType == LUA_TNUMBER){
            lua_pushvalue(L,-1);
            valueName = lua_tostring(L,-1);
            //rootTable->addVariable(keyName, valueName);
            QStringList sList;
            sList << keyName;
            QTreeWidgetItem * pI = new QTreeWidgetItem( mpVarBaseItem, sList);
            QIcon icon;
            //we're ROOT, we're at the topmost level
            icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
            pI->setData( 0, Qt::UserRole, valueName );
            mpVarBaseItem->addChild( pI );
            lua_pop(L,1);
        }
        else{
         //   qDebug()<<vType;
        }
        //qDebug()<<keyName<<":"<<valueName;
        lua_pop(L,1);
    }
    QMap<QString, QTreeWidgetItem *> tableOrder;
    QList<tableObject*> tables2 = tables;
    while (tables.size()){
        tableObject* table = tables.first();
        QList<tableObject*> tableList;
        tableList.append(table);
        tableObject* parentTable = table->getParent();
        while (parentTable->getName() != "_G"){
            //qDebug()<<parentTable->getType();
            tableList.insert(0,parentTable);
            parentTable = parentTable->getParent();
        }
        //qDebug()<<tableList.first();
        QString nestName = tableList.first()->getName();
        QStringList nestList;
        nestList.append(nestName);
        lua_getglobal(L, nestName.toLatin1().data());//get our first table
        if (!tableOrder.contains(nestName)){
            QStringList sList;
            QTreeWidgetItem * pItem;
            sList << nestName;
            pItem = new QTreeWidgetItem( mpVarBaseItem, sList);
            tableOrder.insert(nestName, pItem);
            QIcon icon;
            icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
            pItem->setData( 0, Qt::UserRole, nestList );
            mpVarBaseItem->insertChild( 0, pItem );
        }
        tableList.pop_front();
        //now we go into the nested orders
        while (tableList.size()){
            tableObject* tableInfo = tableList.first();
            int tableType = tableInfo->getType();
            //qDebug()<<tableInfo->getName()<<":"<<tableType;
            switch (tableType){
                case LUA_TSTRING:
                    lua_pushstring(L, tableInfo->getName().toLatin1().data());
                    break;
                case LUA_TNUMBER:
                    lua_pushnumber(L, tableInfo->getName().toInt());
                    break;
                default:
                    tableList.pop_front();
                    continue;
            }
            QString tableName = tableInfo->getName();
            nestList.append(tableName);
            if (!tableOrder.contains(nestName+tableName)){
                QStringList sList;
                QTreeWidgetItem * pItem;
                sList << tableName;
                qDebug()<<"adding new table"<<tableName<<"under "<<nestName;
                pItem = new QTreeWidgetItem( tableOrder[nestName], sList);
                tableOrder.insert(nestName+tableName, pItem);
                QIcon icon;
                icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
                pItem->setData( 0, Qt::UserRole, nestList );
                tableOrder[nestName]->insertChild( 0, pItem );
            }
            nestName+=tableName;
            lua_gettable(L,-2);
            tableList.pop_front();
        }
        //qDebug()<<"before remove"<<lua_gettop(L);
        while (lua_gettop(L)>2)//we're operating in key/pair mode so we should always have 2
        //for (int i=0;i<removeNum;i++)
            lua_remove(L,-2);//just keep our top table
        //qDebug()<<"after remove"<<lua_gettop(L);
        qDebug()<<"about to iterate"<<nestList;
        qDebug()<<tables.first()->getName();
        iterateTable(L, tables, tables2, nestList);
        //qDebug()<<"variables set under"<<table->getName();
        //qDebug()<<table->getVariables();
        tables.pop_front();
    }
    //populate variables, we can't do this above since some end tables will be left out
    QStringList varsLoaded;
    while (tables2.size()){
        tableObject* table = tables2.first();
        QList<tableObject*> tableList;
        tableList.append(table);
        tableObject* parentTable = table->getParent();
        while (parentTable->getName() != "_G"){
            tableList.insert(0,parentTable);
            parentTable = parentTable->getParent();
        }
        QString nestName = tableList.first()->getName();
        QStringList nestList;
        nestList.append(nestName);
        //qDebug()<<varsLoaded;
        if (!varsLoaded.contains(nestName)){
            QMap<QString, QString> vars = tableList.first()->getVariables();
            //qDebug()<<"loading variables for"<<tableList.first()->getName();
            //qDebug()<<vars;
            if (vars.size()){
                QMapIterator<QString, QString> it(vars);
                QTreeWidgetItem * pItem = tableOrder[nestName];
                while (it.hasNext()){
                    it.next();
                    QStringList sList;
                    sList << it.key();
                    QTreeWidgetItem * pI = new QTreeWidgetItem( pItem, sList);
                    pI->setData( 0, Qt::UserRole, it.value() );
                    pItem->insertChild(0,pI);
                }
            }
            varsLoaded.append(nestName);
        }
        tableList.pop_front();
        //now we go into the nested orders
        while (tableList.size()){
            tableObject* tableInfo = tableList.first();
            QString tableName = tableInfo->getName();
            nestList.append(tableName);
            nestName+=tableName;
            //qDebug()<<nestName;
            //qDebug()<<varsLoaded;
            if (!varsLoaded.contains(nestName)){
                QMap<QString, QString> vars = tableInfo->getVariables();
                if (vars.size()){
                    QTreeWidgetItem * pItem = tableOrder[nestName];
                    QMapIterator<QString, QString> it(vars);
                    while (it.hasNext()){
                        it.next();
                        QStringList sList;
                        sList << it.key();
                        QTreeWidgetItem * pI = new QTreeWidgetItem( pItem, sList);
                        pI->setData( 0, Qt::UserRole, it.value() );
                        pItem->insertChild(0,pI);
                    }
                }
                varsLoaded.append(nestName);
            }
            tableList.pop_front();
        }
        tables2.pop_front();
    }
}
