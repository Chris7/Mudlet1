#include "luaInterface.h"
#include <QDebug>
#include <QTime>
#include <QSet>

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

void luaInterface::deleteVar(QTreeWidgetItem * pItem, QString dName){
    if (dName=="")
        return;
    ////qDebug()<<"deleting"<<dName;
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    ////qDebug()<<"starting stack size"<<startSize;
    QTreeWidgetItem* pParent = pItem->parent();
    //check if pItem is a table
    QStringList pInfo = pItem->data(0,Qt::UserRole).toStringList();
    ////qDebug()<<"info on selected"<<pInfo;
    if (!pInfo.size())
        return;
    QStringList nested;
    if (pParent){
        for (int i=3;i<pInfo.size();i++)
            if (pInfo[i] != "")
                nested<<pInfo[i];
        //qDebug()<<"nested list"<<nested;
        if (nested.size() && nested[0] != ""){
            for (int i=0;i<nested.size();i++){
                QString tableName = nested[i];
                int tableType = QString(tableName.at(0)).toInt();
                tableName.remove(0,1);
                if ((tableName == dName) && i==nested.size()-1)
                    break;
                if (tableType == LUA_TNUMBER)
                    lua_pushnumber(L, tableName.toInt());
                else
                    lua_pushstring(L, tableName.toLatin1().data());
                if (i>0){
                    lua_gettable(L,-2);
                }
                else
                    lua_getglobal(L,tableName.toLatin1().data());
            }
        }
    }
    //ok, so here what we want to do is to fetch our value and then set it to nil
    //push the key
    int kType = QString(pInfo[0]).toInt();
    if (kType == LUA_TNUMBER)
        lua_pushnumber(L, dName.toInt());
    else
        lua_pushstring(L, dName.toLatin1().data());
    lua_pushnil(L);
    while (lua_gettop(L)>startSize+2 && lua_type(L,-3) == LUA_TTABLE){
        lua_settable(L,-3);//do our table functions if needed
    }
    lua_pushvalue(L,-2);
    QString name = lua_tostring(L,-1);
    lua_pop(L,1);
    lua_setglobal(L,name.toLatin1().data());
    lua_settop(L,startSize);
    //qDebug()<<"variable"<<dName<<"set to nil";
}

void luaInterface::restoreVar(QStringList pInfo){
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    QStringList nested;
    QString newName = pInfo[0];
    pInfo.pop_front();
    int vType = pInfo[1].toInt();
    QString newValue = pInfo[2];
    if (vType == LUA_TTABLE)
        pInfo.pop_back();//for this instance, we want to remove the self-reference
    for (int i=3;i<pInfo.size();i++)
        if (pInfo[i] != "")
            nested<<pInfo[i];
    if (nested.size()){
        for (int i=0;i<nested.size();i++){
            QString tableName = nested[i];
            int tableType = QString(tableName.at(0)).toInt();
            tableName.remove(0,1);
            if (tableType  == LUA_TNUMBER)
                lua_pushnumber(L, tableName.toInt());
            else
                lua_pushstring(L, tableName.toLatin1().data());
            if (i>0){
                lua_gettable(L,-2);
            }
            else
                lua_getglobal(L,tableName.toLatin1().data());
            if (lua_type(L,-1) == LUA_TNIL){
                lua_pop(L,1);
                if (tableType  == LUA_TNUMBER)
                    lua_pushnumber(L, tableName.toInt());
                else
                    lua_pushstring(L, tableName.toLatin1().data());
                lua_newtable(L);
                if (i>0)
                    lua_settable(L,-3);
                else{
                    lua_setglobal(L,tableName.toLatin1().data());
                    lua_pop(L,1);
                }
                i--; //reiterate after making the table to get it on the stack
                continue;
            }
        }
    }
    if (pInfo[0].toInt() == LUA_TNUMBER){
        lua_pushnumber(L, newName.toInt());
    }
    else{
        lua_pushstring(L, newName.toLatin1().data());
    }
    if (vType == LUA_TNUMBER){
        lua_pushnumber(L,newValue.toInt());
    }
    else if (vType == LUA_TTABLE){
        lua_newtable(L);
    }
    else{
        lua_pushstring(L, newValue.toLatin1().data());
    }
    if (lua_type(L,-3) == LUA_TTABLE){
        lua_settable(L,-3);
    }
    else
        lua_setglobal(L,newName.toLatin1().data());
    lua_settop(L,startSize);
}

void luaInterface::saveVar(QTreeWidgetItem * pItem, QString newName, QString newValue){
    if (newName=="")
        return;
    //qDebug()<<newName<<":"<<newValue;
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    //qDebug()<<"starting stack size"<<startSize;
    QTreeWidgetItem* pParent = pItem->parent();
    QStringList pInfo = pItem->data(0,Qt::UserRole).toStringList();
    if (!pInfo.size() || pInfo.contains(newName))
        return;
    //qDebug()<<"info on selected"<<pInfo;
    if (newName == pItem->text(0) && newValue == pInfo[2])
        return;
    QStringList nested;
    int tabled = 0;
    if (pParent){
        for (int i=3;i<pInfo.size();i++)
            if (pInfo[i] != "")
                nested<<pInfo[i];
        //qDebug()<<"nested list"<<nested;
        if (nested.size()){
            for (int i=0;i<nested.size();i++){
                tabled++;
                /*
                  Sample setup for 2 tables:
                  iteration 1:
                  -1 {}
                  -2 key
                  iteration 2:
                  -1 {}
                  -2 key
                  -3 {}
                  -4 key
                  */
                QString tableName = nested[i];
                int tableType = QString(tableName.at(0)).toInt();
                tableName.remove(0,1);
                //qDebug()<<"table:"<<tableName<<","<<tableType;
                if (tableType  == LUA_TNUMBER)
                //if (tableName == "0" || tableName.toInt())
                    lua_pushnumber(L, tableName.toInt());
                else
                    lua_pushstring(L, tableName.toLatin1().data());
                //qDebug()<<"inter";
                for (int o=1;o<=lua_gettop(L);o++){
                    //qDebug()<<o*-1<<","<<lua_type(L,o*-1);
                }
                if (i>0){
                    lua_gettable(L,-2);
                }
                else
                    lua_getglobal(L,tableName.toLatin1().data());
                //qDebug()<<"after fetching table";
                for (int o=1;o<=lua_gettop(L);o++){
                    //qDebug()<<o*-1<<","<<lua_type(L,o*-1);
                }
            }
        }
    }
    //push the key
    //qDebug()<<"new name:"<<newName;
    if (newName == "0" || newName.toInt()){
        pInfo[0] = QString::number(LUA_TNUMBER);
        lua_pushnumber(L, newName.toInt());
    }
    else{
        pInfo[0] = QString::number(LUA_TSTRING);
        lua_pushstring(L, newName.toLatin1().data());
    }
    //qDebug()<<"new value"<<newValue;
    if (QString(pInfo[1]).toInt() != LUA_TTABLE){
        if (newValue.toInt()){
            lua_pushnumber(L,newValue.toInt());
            pInfo[1] = QString::number(LUA_TNUMBER);
        }
        else if (newValue.toFloat()){
            lua_pushnumber(L, newValue.toFloat());
            pInfo[1] = QString::number(LUA_TNUMBER);
        }
        else if (newValue.toLower() == "true" || newValue.toLower() == "false"){
            lua_pushboolean(L, newValue.toLower()=="true"?1:0);
            pInfo[1] = QString::number(LUA_TBOOLEAN);
        }
        else{
            lua_pushstring(L, newValue.toLatin1().data());
            pInfo[1] = QString::number(LUA_TSTRING);
        }
    }
    else if (QString(pInfo[1]).toInt() == LUA_TTABLE){
        lua_newtable(L);
        pInfo << pInfo[0]+newName;
    }
    while (lua_gettop(L)>startSize+2 && lua_type(L,-3) == LUA_TTABLE){
        lua_settable(L,-3);//do our table functions if needed
    }
    lua_pushvalue(L,-2);
    QString name = lua_tostring(L,-1);
    lua_pop(L,1);
    lua_setglobal(L,name.toLatin1().data());
    lua_settop(L,startSize);
    pInfo[2] = newValue;
    pItem->setText(0,newName);
    pItem->setData(0, Qt::UserRole, pInfo);
}

void luaInterface::iterateTable(lua_State* L, QList<tableObject*> &tables, QList<tableObject*> &tables2, QStringList nestList){
    //this function goes through a table and adds any new tables found
    lua_pushnil(L);
    tableObject* rootTable = tables.first();
    QString rootName = rootTable->getName();
    ////qDebug()<<lua_gettop(L);
    while (lua_next(L, -2)){
        int vType = lua_type(L,-1);
        int kType = lua_type(L,-2);
        ////qDebug()<<kType<<":"<<vType;
        lua_pushvalue(L,-2);
        QString keyName = lua_tostring(L,-1);
        QString valueName;
        lua_pop(L,1);
        if (vType == LUA_TTABLE){
            if (!nestList.contains(QString::number(kType)+keyName) && keyName != rootName && keyName != "loaded" && keyName[0] != '_'){
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
            valueName = QString::number(vType)+valueName;
            rootTable->addVariable(QString::number(kType)+keyName, valueName);
            ////qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
            ////qDebug()<<rootTable->getVariables();
            lua_pop(L,1);
        }
        else if (vType == LUA_TBOOLEAN){
            valueName = lua_toboolean(L, -1) == 0 ? "false" : "true";
            valueName = QString::number(vType)+valueName;
            rootTable->addVariable(QString::number(kType)+keyName, valueName);
            ////qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
        }
        else{
            ////qDebug()<<vType;
        }
        ////qDebug()<<keyName<<":"<<valueName;
        lua_pop(L,1);
    }
}

QString luaInterface::getValue(QTreeWidgetItem * pItem){
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    QTreeWidgetItem* pParent = pItem->parent();
    QStringList pInfo = pItem->data(0,Qt::UserRole).toStringList();
    if (!pInfo.size())
        return "";
    QStringList nested;
    if (pParent){
        for (int i=3;i<pInfo.size();i++)
            if (pInfo[i] != "")
                nested<<pInfo[i];
        if (nested.size()){
            for (int i=0;i<nested.size();i++){
                QString tableName = nested[i];
                int tableType = QString(tableName.at(0)).toInt();
                tableName.remove(0,1);
                if (tableType  == LUA_TNUMBER)
                    lua_pushnumber(L, tableName.toInt());
                else
                    lua_pushstring(L, tableName.toLatin1().data());
                if (i>0){
                    lua_gettable(L,-2);
                }
                else
                    lua_getglobal(L,tableName.toLatin1().data());
            }
        }
    }
    int kType = pInfo[0].toInt();
    QString kName = pItem->text(0);
    if (nested.size()){
        if (kType == LUA_TNUMBER){
            lua_pushnumber(L, kName.toInt());
        }
        else{
            lua_pushstring(L, kName.toLatin1().data());
        }
        lua_gettable(L,-2);
    }
    else{
        lua_getglobal(L, kName.toLatin1().data());
    }
    QString curValue;
    if (pInfo[1].toInt() == LUA_TBOOLEAN)
        curValue = lua_toboolean(L, -1) == 0 ? "false" : "true";
    else
        curValue = lua_tostring(L,-1);
    lua_settop(L,startSize);
    pInfo[2] = curValue;
    pItem->setData(0, Qt::UserRole, pInfo);
    return curValue;
}

void luaInterface::getVars(QTreeWidgetItem * mpVarBaseItem, int hide){
    //Help from:
    //http://cdry.wordpress.com/2010/06/26/how-to-save-global-variables-using-the-lua-c-api/
    //another resource: http://lua-users.org/lists/lua-l/2004-06/msg00329.html
    //This code is hideous but it works and doesn't affect performance.
    //A pretty recursive function using just the stack was too difficult to work out for all cases.
    //if hide = 1, then all variables discovered here will be marked as hidden and not shown
    QTime myTimer;
    myTimer.start();
    L = interpreter->pGlobalLua;
    QList<tableObject*> tables;
    tableObject* rootTable = new tableObject("_G");
    lua_pushnil(L);
    QList<QTreeWidgetItem *> itemsToAdd;
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
                newTable->setType(kType);
                tables.append(newTable);
            }
        }
        else if (vType == LUA_TSTRING || vType == LUA_TNUMBER || vType == LUA_TBOOLEAN){
            lua_pushvalue(L,-1);
            if (vType == LUA_TBOOLEAN)
                valueName = lua_toboolean(L, -1) == 0 ? "false" : "true";
            else
                valueName = lua_tostring(L,-1);
            if (hide)
                hiddenVars[mpHost].insert(keyName);
            else{
                QStringList sList;
                sList << keyName;
                QTreeWidgetItem * pI = new QTreeWidgetItem( mpVarBaseItem, sList);
                pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
                QIcon icon;
                QStringList pData;
                pData << QString::number(kType);
                pData << QString::number(vType);
                pData << valueName;
                pData << "";
                QString nestListConcat = pData[0]+keyName;
                if (mpHost->savedVariables.contains(nestListConcat)){
                    mpHost->savedVariables[nestListConcat] = pI;
                    pI->setCheckState(0, Qt::Checked);
                }
                else
                    pI->setCheckState(0, Qt::Unchecked);
                //we're ROOT, we're at the topmost level
                icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
                pI->setData( 0, Qt::UserRole, pData );
                itemsToAdd.append(pI);
            }
            lua_pop(L,1);
        }
        lua_pop(L,1);
    }
    qDebug()<<myTimer.elapsed()<<"to take care to main loop";
    myTimer.restart();
    mpVarBaseItem->addChildren( itemsToAdd );
    itemsToAdd.clear();
    //above we stored all the variables at the global level (one level in), now we go through these and add any nested tables
    QMap<QString, QTreeWidgetItem *> tableOrder;
    QList<tableObject*> tables2 = tables;
    while (tables.size()){
        tableObject* table = tables.first();
        QList<tableObject*> tableList;
        tableList.append(table);
        tableObject* parentTable = table->getParent();
        while (parentTable->getName() != "_G"){
            tableList.insert(0,parentTable);
            parentTable = parentTable->getParent();
        }
        QString nestName = tableList.first()->getName();
        QStringList nestList;
        nestList.append(QString::number(tableList.first()->getType())+nestName);
        lua_getglobal(L, nestName.toLatin1().data());//get our first table
        if (!tableOrder.contains(nestName)){
            if (hide){
                tableOrder.insert(nestName, mpVarBaseItem);
                hiddenVars[mpHost].insert(nestList.join(""));
            }
            else{
                QStringList sList;
                QTreeWidgetItem * pItem;
                sList << nestName;
                pItem = new QTreeWidgetItem( mpVarBaseItem, sList);
                pItem->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
                tableOrder.insert(nestName, pItem);
                QStringList pData;
                pData << QString::number(tableList.first()->getType());
                pData << QString::number(LUA_TTABLE);
                pData << nestName;
                pData << nestList;
                QString nestListConcat = nestList.join("");
                if (mpHost->savedVariables.contains(nestListConcat)){
                    mpHost->savedVariables[nestListConcat] = pItem;
                    pItem->setCheckState(0, Qt::Checked);
                }
                else
                    pItem->setCheckState(0, Qt::Unchecked);
                QIcon icon;
                icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
                pItem->setData( 0, Qt::UserRole, pData );
                itemsToAdd.append(pItem );
            }
        }
        if (itemsToAdd.size()){
            mpVarBaseItem->addChildren(itemsToAdd);
            itemsToAdd.clear();
        }
        tableList.pop_front();
        //now we go into the nested orders
        while (tableList.size()){
            tableObject* tableInfo = tableList.first();
            int tableType = tableInfo->getType();
            ////qDebug()<<tableInfo->getName()<<":"<<tableType;
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
            nestList.append(QString::number(tableType)+tableName);
            if (!tableOrder.contains(nestName+tableName)){
                if (hide){
                    tableOrder.insert(nestName+tableName, mpVarBaseItem);
                    hiddenVars[mpHost].insert(nestList.join(""));
                }
                else{
                    QStringList sList;
                    QTreeWidgetItem * pItem;
                    sList << tableName;
                    ////qDebug()<<"adding new table"<<tableName<<"under "<<nestName;
                    pItem = new QTreeWidgetItem( tableOrder[nestName], sList);
                    pItem->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
                    //pItem->setCheckState(0, Qt::Unchecked);
                    tableOrder.insert(nestName+tableName, pItem);
                    QStringList pData;
                    pData << QString::number(tableInfo->getType());
                    pData << QString::number(LUA_TTABLE);
                    pData << tableName;
                    pData << nestList;
                    QString nestListConcat = nestList.join("");
                    if (mpHost->savedVariables.contains(nestListConcat)){
                        mpHost->savedVariables[nestListConcat] = pItem;
                        pItem->setCheckState(0, Qt::Checked);
                    }
                    else
                        pItem->setCheckState(0, Qt::Unchecked);
                    QIcon icon;
                    icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/folder-brown.png")), QIcon::Normal, QIcon::Off);
                    pItem->setData( 0, Qt::UserRole, pData );
                    itemsToAdd.append(pItem );
                }
            }
            if (itemsToAdd.size()){
                tableOrder[nestName]->addChildren(itemsToAdd);
                itemsToAdd.clear();
            }
            nestName+=tableName;
            lua_gettable(L,-2);
            tableList.pop_front();
        }
        ////qDebug()<<"before remove"<<lua_gettop(L);
        while (lua_gettop(L)>2)//we're operating in key/pair mode so we should always have 2
        //for (int i=0;i<removeNum;i++)
            lua_remove(L,-2);//just keep our top table
        ////qDebug()<<"after remove"<<lua_gettop(L);
//        //qDebug()<<"about to iterate"<<nestList;
//        //qDebug()<<tables.first()->getName();
        iterateTable(L, tables, tables2, nestList);
        ////qDebug()<<"variables set under"<<table->getName();
        ////qDebug()<<table->getVariables();
        tables.pop_front();
    }
    qDebug()<<myTimer.elapsed()<<"to take care of tables";
    myTimer.restart();
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
        nestList.append(QString::number(tableList.first()->getType())+nestName);
        ////qDebug()<<varsLoaded;
        if (!varsLoaded.contains(nestName)){
            QMap<QString, QString> vars = tableList.first()->getVariables();
            ////qDebug()<<"loading variables for"<<tableList.first()->getName();
            ////qDebug()<<vars;
            if (vars.size()){
                QMapIterator<QString, QString> it(vars);
                QTreeWidgetItem * pItem = tableOrder[nestName];
                while (it.hasNext()){
                    it.next();
                    if (hide){
                        hiddenVars[mpHost].insert(nestName+it.key());
                    }
                    else{
                        QStringList sList;
                        QString itValue = it.value();
                        QString itName = it.key();
                        QStringList pData;
                        //qDebug()<<itName<<":"<<itValue;
                        pData << itName.at(0);
                        pData << itValue.at(0);
                        itName.remove(0,1);
                        itValue.remove(0,1);
                        pData << itValue;
                        pData << nestList;
                        //qDebug()<<pData;
                        sList << itName;
                        QTreeWidgetItem * pI = new QTreeWidgetItem( pItem, sList);
                        pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
                        //pI->setCheckState(0, Qt::Unchecked);
                        pI->setData( 0, Qt::UserRole, pData );
                        QString nestListConcat = nestList.join("")+pData[0]+itName;
                        if (mpHost->savedVariables.contains(nestListConcat)){
                            mpHost->savedVariables[nestListConcat] = pI;
                            pI->setCheckState(0, Qt::Checked);
                        }
                        else
                            pI->setCheckState(0, Qt::Unchecked);
                        itemsToAdd.append(pItem );
                    }
                }
                if (itemsToAdd.size()){
                    pItem->addChildren(itemsToAdd);
                    itemsToAdd.clear();
                }
            }
            varsLoaded.append(nestName);
        }
        tableList.pop_front();
        //now we go into the nested orders
        while (tableList.size()){
            tableObject* tableInfo = tableList.first();
            QString tableName = tableInfo->getName();
            nestList.append(QString::number(tableInfo->getType())+tableName);
            nestName+=tableName;
            ////qDebug()<<nestName;
            ////qDebug()<<varsLoaded;
            if (!varsLoaded.contains(nestName)){
                QMap<QString, QString> vars = tableInfo->getVariables();
                if (vars.size()){
                    QTreeWidgetItem * pItem = tableOrder[nestName];
                    QMapIterator<QString, QString> it(vars);
                    while (it.hasNext()){
                        it.next();
                        if (hide){
                            hiddenVars[mpHost].insert(nestName+it.key());
                        }
                        else{
                            QStringList sList;
                            QString itValue = it.value();
                            QString itName = it.key();
                            QStringList pData;
                            //qDebug()<<itName<<":"<<itValue;
                            pData << itName.at(0);
                            pData << itValue.at(0);
                            itName.remove(0,1);
                            itValue.remove(0,1);
                            pData << itValue;
                            pData << nestList;
                            //qDebug()<<pData;
                            sList << itName;
                            QTreeWidgetItem * pI = new QTreeWidgetItem( pItem, sList);
                            pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable);
                            //pI->setCheckState(0, Qt::Unchecked);
                            pI->setData( 0, Qt::UserRole, pData );
                            QString nestListConcat = nestList.join("")+pData[0]+itName;
                            if (mpHost->savedVariables.contains(nestListConcat)){
                                mpHost->savedVariables[nestListConcat] = pI;
                                pI->setCheckState(0, Qt::Checked);
                            }
                            else
                                pI->setCheckState(0, Qt::Unchecked);
                            itemsToAdd.append(pItem );
                        }
                    }
                    if (itemsToAdd.size()){
                        pItem->addChildren(itemsToAdd);
                        itemsToAdd.clear();
                    }
                }
                varsLoaded.append(nestName);
            }
            tableList.pop_front();
        }
        tables2.pop_front();
    }
    qDebug()<<myTimer.elapsed()<<"to take care of tables2";
    myTimer.restart();
    qDebug()<<"hide status"<<hide;
    qDebug()<<hiddenVars;
}
