#include "luaInterface.h"
#include <QDebug>
#include <QTime>
#include <QSet>
#include <setjmp.h>

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

jmp_buf buf;

luaInterface::luaInterface( Host * pH)
:mpHost( pH )
{
    interpreter = mpHost->getLuaInterpreter();
}

int luaInterface::lua_panic (lua_State *L){
    QString error = lua_tostring(L, -1);
    qDebug()<<"panic hit"<<error;//<<error;
    lua_pushstring(L,error.toLatin1().data());
    lua_error(L);
    longjmp(buf,1);
    return 0;
}

int luaInterface::pushVariable(lua_State* L, int varType, QString varName){
    switch (varType){
    case LUA_TSTRING:
        lua_pushstring(L, varName.toLatin1().data());
        break;
    case LUA_TNUMBER:
        lua_pushnumber(L, varName.toInt());
        break;
    case LUA_TBOOLEAN:
        lua_pushboolean(L, varName.toLower()=="true"?1:0);
        break;
    case LUA_TTABLE:
        lua_newtable(L);
        break;
    default:
        return 0;
    }
    return 1;
}

int luaInterface::pushVariable(lua_State* L, QTreeWidgetItem * pItem){
    QStringList pInfo = pItem->data(0, Qt::UserRole).toStringList();
    int varType = QString(pInfo[0]).toInt();
    QString varName = QString(pItem->text(0));
    switch (varType){
    case LUA_TSTRING:
        lua_pushstring(L, varName.toLatin1().data());
        break;
    case LUA_TNUMBER:
        lua_pushnumber(L, varName.toInt());
        break;
    case LUA_TBOOLEAN:
        lua_pushboolean(L, varName.toLower()=="true"?1:0);
        break;
    case LUA_TTABLE:
        lua_newtable(L);
    default:
        return 0;
    }
    return 1;
}

int luaInterface::getVariable(lua_State* L, QStringList varInfo){
    //will set the lua state L to the stringlist varInfo
    //varInfo has names like: xyName, where x is the LUA_TYPE, y is the name type, and Name is the name
    //the stack will be returned with the value at -1, the return value
    //indicates: 0 means something broke, 1 means we're at global level,
    //2 means we're a table @ root, 3 means we're a table in a table,
    //4 means we're a variable in a table
    qDebug()<<"variable we're fetching"<<varInfo;
    QString curVar = varInfo.first();
    int kType = QString(curVar.at(1)).toInt();
    int startStack = lua_gettop(L);
    if (setjmp(buf) == 0){
    //    setjmp(buf);
        int vType = QString(curVar.at(0)).toInt();
        curVar = curVar.remove(0,2);
        int tabled = 0;
        while (vType == LUA_TTABLE){
            //fetch tables until we're where we need to be
            varInfo.pop_front();
//            if (!pushVariable(L, kType, curVar)){
//                lua_settop(L, startStack);
//                return 0;
//            }
            if (!tabled){
//                lua_pop(L,1);
                lua_getglobal(L, curVar.toLatin1().data());
                tabled=1;
                if (!varInfo.size())
                    return 2;
            }
            else{
                if (!pushVariable(L, kType, curVar)){
                    lua_settop(L, startStack);
                    return 0;
                }
                lua_gettable(L,-2);
            }
            if (varInfo.size()){
                curVar = varInfo.first();
                vType = QString(curVar.at(0)).toInt();
                kType = QString(curVar.at(1)).toInt();
                curVar = curVar.remove(0,2);
            }
            else{
                //if nothing is left in varInfo, we are fetching a table, so return the stack
                //which will contain our table at -1 position
                if (lua_type(L,-1) == LUA_TTABLE)
                    return 3;
                //else we have no idea what we have
                lua_settop(L, startStack);
                return 0;
            }
        }
        if (!pushVariable(L, kType, curVar)){
            lua_settop(L, startStack);
            return 0;
        }
        if (tabled){
            lua_gettable(L, -2);
            return 3;
        }
        else{
            lua_pop(L,1);
            lua_getglobal(L, curVar.toLatin1().data());
            return 1;
        }
    }
    else{
        lua_settop(L,startStack);
        return 0;
    }
}

int luaInterface::getVariable(lua_State* L, QTreeWidgetItem * pItem){
    //will set the lua state L to the stringlist varInfo
    //varInfo has names like: xyName, where x is the LUA_TYPE, y is the name type, and Name is the name
    //the stack will be returned with the value at -1
    QStringList testNest;
    QStringList pInfo = pItem->data(0, Qt::UserRole).toStringList();
    for (int i=3;i<pInfo.size();i++){
        if (pInfo[i] != "")
            testNest << "5"+pInfo[i];
    }
    if (QString(pInfo[1]).toInt() != LUA_TTABLE){
        testNest << pInfo[1]+pInfo[0]+pItem->text(0);
    }
    return getVariable(L, testNest);
}

int luaInterface::deleteVar(lua_State* L, QTreeWidgetItem * pItem){
//    for (int i=1;i<=lua_gettop(L);i++){
//        qDebug()<<i<<":"<<lua_type(L,i*-1);
//    }
    int startSize = lua_gettop(L);
    if (setjmp(buf) == 0){
        int tabled = getVariable(L, pItem);
        lua_pop(L, 1);
        QString vName = pItem->text(0);
        if (!pushVariable(L, pItem)){
            lua_settop(L, startSize);
            return 0;
        }
        lua_pushnil(L);
        for (int i=1;i<=lua_gettop(L);i++){
            qDebug()<<i<<":"<<lua_type(L,i*-1);
        }
        qDebug()<<"dtabled"<<tabled;
        if (tabled == 1 || tabled == 2){
            lua_setglobal(L, vName.toLatin1().data());
            return 1;
        }
        else if (tabled){
            //we're in a table
            lua_settable(L, -3);
            return 1;
        }
        else{
            lua_settop(L,startSize);
            return 0;
        }
    }
    else{
        lua_settop(L,startSize);
        return 0;
    }
}

int luaInterface::renameVariable(lua_State* L, QTreeWidgetItem * pItem, QString newName){
    int stackTop = lua_gettop(L);
    if (setjmp(buf) == 0){
        int tabled = getVariable(L, pItem);
    //    for (int i=1;i<=lua_gettop(L);i++){
    //        qDebug()<<i<<":"<<lua_type(L,i*-1);
    //    }
        //at this point -1 is the variable's value, we want its name below it
        //then use replace, and then reset the variable
        QStringList pInfo = pItem->data(0, Qt::UserRole).toStringList();
        int kType = QString(pInfo[0]).toInt();
        qDebug()<<"going to push"<<newName<<"of type"<<kType<<"tabled:"<<tabled;
        if (pushVariable(L, kType, newName)){
            //right now we have -1 as key, -2 as value, we want to reverse this
            lua_insert(L,-2);//now we're -1 value -2 key
    //        for (int i=1;i<=lua_gettop(L);i++){
    //            qDebug()<<i<<":"<<lua_type(L,i*-1);
    //        }
            //if we're inside a table:
            if (tabled == 1 || tabled == 2){
                //global
                lua_setglobal(L,newName.toLatin1().data());
                if (setjmp(buf) == 0)
                    deleteVar(L, pItem);
                else{
                    lua_settop(L,stackTop);
                    return 0;
                }
                pItem->setText(0,newName);
                pItem->setText(1,newName.toLower());
                return 1;
            }
            else if (tabled>0){
                //we're renaming a table, so first we save the value
                lua_settable(L, -3);
                //then we delete the old value
                //lua_settop(L, stackTop);
                //a quick hack to get the deletion right
                QString oldName = pInfo.last();
                QStringList oPinfo = pInfo;
                pInfo[0] = oldName.at(0);
                pItem->setData(0, Qt::UserRole, pInfo);
                if (setjmp(buf) == 0)
                    if (!deleteVar(L, pItem)){
                        lua_settop(L, stackTop);
                        pItem->setData(0, Qt::UserRole, oPinfo);
                        return 0;
                    }
                else{
                    lua_settop(L, stackTop);
                    pItem->setData(0, Qt::UserRole, oPinfo);
                    return 0;
                }
                pInfo[0] = QString::number(kType);
                //now we need to reset the variable name itself inside the pInfo
                pInfo.pop_back();
                pInfo << pInfo[0]+newName;
                pItem->setText(0,newName);
                pItem->setText(1,newName.toLower());
                pItem->setData(0, Qt::UserRole, pInfo);
                return 1;
            }
        }
        else{
            lua_settop(L, stackTop);
            return 0;
        }
    }
    else{
        lua_settop(L,stackTop);
        return 0;
    }
}

int luaInterface::deleteVar(QTreeWidgetItem * pItem){
    if (!pItem)
        return 1;
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    if (setjmp(buf) == 0){
        int st = deleteVar(L, pItem);
        lua_settop(L,startSize);
        return st;
    }
    else{
        lua_settop(L,startSize);
        return 0;
    }
}

int luaInterface::restoreVar(QStringList pInfo){
    qDebug()<<"pinfo we're trying to restore"<<pInfo;
    L = interpreter->pGlobalLua;
    int startSize = lua_gettop(L);
    if (setjmp(buf) == 0){
        QStringList nested;
        QString newName = pInfo[0];
        pInfo.pop_front();
        int vType = pInfo[1].toInt();
        if (vType == -1 || pInfo[0].toInt() == -1)
            return 0;
        QString newValue = pInfo[2];
        if (vType == LUA_TTABLE)
            pInfo.pop_back();//for this instance, we want to remove the self-reference
        for (int i=3;i<pInfo.size();i++)
            if (pInfo[i] != "")
                nested<<pInfo[i];
        if (nested.size() && (nested.first() == "Table" || nested.first() == "NewTable"))
            nested.pop_front();
        if (nested.size()){
            for (int i=0;i<nested.size();i++){
                QString tableName = nested[i];
                int tableType = QString(tableName.at(0)).toInt();
                tableName.remove(0,1);
                if (tableType == LUA_TNUMBER)
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
        pushVariable(L, pInfo[0].toInt(), newName);
        pushVariable(L, vType, newValue);
    /*    for (int i=1;i<=lua_gettop(L);i++){
            qDebug()<<lua_type(L,i*-1);
        }*/
        if (nested.size()){//(lua_type(L,-3) == LUA_TTABLE){
            lua_settable(L,-3);
        }
        else
            lua_setglobal(L,newName.toLatin1().data());
        lua_settop(L,startSize);
        return 1;
    }
    else{
        lua_settop(L,startSize);
        return 0;
    }
}

int luaInterface::saveVar(QTreeWidgetItem * pItem, QString newName, QString newValue, int force){
    if (newName=="")
        return 0;
    QTreeWidgetItem* pParent = (QTreeWidgetItem*)pItem->parent();
    if (pItem == NULL || !(pItem->columnCount()))
        return 0;
    QStringList pInfo = pItem->data(0,Qt::UserRole).toStringList();
    if (!pParent)
        return 0;
    if (!force && !pInfo.size())// || pInfo.contains(newName)))
        return 0;
    L = interpreter->pGlobalLua;
        int startSize = lua_gettop(L);
    if (!force && newName == pItem->text(0) && (newValue == pInfo[2] || pInfo[2] == "Table"))
        return 0;
    if (setjmp(buf) == 0){
        if (force == 2 || (pInfo[2] != "NewTable" && newName != pItem->text(0) && (newValue == pInfo[2] || pInfo[2] == "Table"))){
            //renaming
            qDebug()<<"going to rename";
            return renameVariable(L, pItem, newName);;
        }
        QStringList nested;
        int tabled = 0;
        if (pParent){
            for (int i=3;i<pInfo.size();i++)
                if (pInfo[i] != "")
                    nested<<pInfo[i];
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
        //push the key
        int nameCast = QString(pInfo[0]).toInt();
        int valueCast = QString(pInfo[1]).toInt();
        if ((nameCast == LUA_TNUMBER) || (nameCast == LUA_TNONE && (newName == "0" || newName.toInt()))){
            pInfo[0] = QString::number(LUA_TNUMBER);
            lua_pushnumber(L, newName.toInt());
        }
        else{
            pInfo[0] = QString::number(LUA_TSTRING);
            lua_pushstring(L, newName.toLatin1().data());
        }
        if (valueCast != LUA_TTABLE){
            if (valueCast == LUA_TNUMBER || (valueCast == LUA_TNONE && (newValue.toInt() || newValue.toFloat()))){
                if (newValue.toInt())
                    lua_pushnumber(L,newValue.toInt());
                else
                    lua_pushnumber(L, newValue.toFloat());
                pInfo[1] = QString::number(LUA_TNUMBER);
            }
            else if (valueCast == LUA_TBOOLEAN || (valueCast == LUA_TNONE && (newValue.toLower() == "true" || newValue.toLower() == "false"))){
                lua_pushboolean(L, newValue.toLower()=="true"?1:0);
                pInfo[1] = QString::number(LUA_TBOOLEAN);
            }
            else{
                lua_pushstring(L, newValue.toLatin1().data());
                pInfo[1] = QString::number(LUA_TSTRING);
            }
        }
        else if (valueCast == LUA_TTABLE){
            lua_newtable(L);
            newValue = "Table";
            if (pInfo[3] == "")
                pInfo[3] = pInfo[0]+newName;
            else
                pInfo << pInfo[0]+newName;
        }
        /*while (lua_gettop(L)>startSize+2 && lua_type(L,-3) == LUA_TTABLE){
            lua_settable(L,-3);//do our table functions if needed
        }*/
        pInfo[2] = newValue;
        pItem->setText(0,newName);
        pItem->setText(1,newName.toLower());
        pItem->setData(0, Qt::UserRole, pInfo);
        if (tabled && lua_type(L,-3) == LUA_TTABLE && lua_gettop(L)>startSize+2){
            lua_settable(L,-3);
            lua_settop(L, startSize);
            return 1;
        }
        lua_pushvalue(L,-2);
        QString name = lua_tostring(L,-1);
        lua_pop(L,1);
        lua_setglobal(L,name.toLatin1().data());
        lua_settop(L,startSize);
        return 1;
    }
    else{
        lua_settop(L, startSize);
        return 0;
    }
}

void luaInterface::iterateTable(lua_State* L, QList<tableObject*> &tables, QList<tableObject*> &tables2, QStringList nestList){
    //this function goes through a table and adds any new tables found
    lua_pushnil(L);
    tableObject* rootTable = tables.first();
    QString rootName = rootTable->getName();
    ////qDebug()<<lua_gettop(L);
    QSet<int> tableRefs;
    while (lua_next(L, -2)){
        int vType = lua_type(L,-1);
        int kType = lua_type(L,-2);
        ////qDebug()<<kType<<":"<<vType;
        lua_pushvalue(L,-2);
        int r = luaL_ref(L, LUA_REGISTRYINDEX);
        lua_rawgeti(L, LUA_REGISTRYINDEX, r);
        QString keyName = lua_tostring(L,-1);
        QString valueName;
        lua_pop(L,1);
        if (vType == LUA_TTABLE){
            if (tableRefs.contains(r)){
                qDebug()<<"already in table"<<keyName;
            }
            else{
                tableRefs.insert(r);
                if (!nestList.contains(QString::number(kType)+keyName) && keyName != rootName && keyName != "loaded" && keyName[0] != '_'){
                    tableObject* newTable = new tableObject(keyName);
                    newTable->setParent(rootTable);
                    newTable->setType(kType);
                    tables.append(newTable);
                    tables2.append(newTable);
                }
            }
        }
        else if (vType == LUA_TSTRING || vType == LUA_TNUMBER){
            luaL_unref(L, LUA_REGISTRYINDEX, r);
            lua_pushvalue(L,-1);
            valueName = lua_tostring(L,-1);
            valueName = QString::number(vType)+valueName;
            rootTable->addVariable(QString::number(kType)+keyName, valueName);
            ////qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
            ////qDebug()<<rootTable->getVariables();
            lua_pop(L,1);
        }
        else if (vType == LUA_TBOOLEAN){
            luaL_unref(L, LUA_REGISTRYINDEX, r);
            valueName = lua_toboolean(L, -1) == 0 ? "false" : "true";
            valueName = QString::number(vType)+valueName;
            rootTable->addVariable(QString::number(kType)+keyName, valueName);
            ////qDebug()<<"putting "<<keyName<<":"<<valueName<<"under "<<rootTable->getName();
        }
        else{
            luaL_unref(L, LUA_REGISTRYINDEX, r);
            ////qDebug()<<vType;
        }
        ////qDebug()<<keyName<<":"<<valueName;
        lua_pop(L,1);
    }
    QSetIterator<int> it(tableRefs);
    while (it.hasNext())
        luaL_unref(L, LUA_REGISTRYINDEX, it.next());
}

QString luaInterface::getValue(QTreeWidgetItem * pItem){
    if (pItem == NULL)
        return "";
    L = interpreter->pGlobalLua;
    //pushes the key/value, so value of global table is @ -1, key is -2
    int startSize = lua_gettop(L);
    if (setjmp(buf) == 0){
        //QTreeWidgetItem* pParent = pItem->parent();
        QStringList pInfo = pItem->data(0,Qt::UserRole).toStringList();
        if (!pInfo.size())
            return "";
        if (!getVariable(L,pItem))
            return "";
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
    else{
        lua_settop(L,startSize);
        return "";
    }
}

void luaInterface::getVars(QTreeWidgetItem * mpVarBaseItem, int hide, bool showHidden){
    //Help from:
    //http://cdry.wordpress.com/2010/06/26/how-to-save-global-variables-using-the-lua-c-api/
    //another resource: http://lua-users.org/lists/lua-l/2004-06/msg00329.html
    //This code is hideous but it works and doesn't affect performance.
    //A pretty recursive function using just the stack was too difficult to work out for all cases.
    //if hide = 1, then all variables discovered here will be marked as hidden and not shown
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
                hiddenVars.insert(QString::number(kType)+keyName);
            else{
                QStringList sList;
                sList << keyName;
                sList << keyName.toLower();
                QTreeWidgetItem * pI = new QTreeWidgetItem(sList);
                pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled);
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
                if (showHidden || !mpHost->isHiddenVariable(pI))
                    itemsToAdd.append(pI);
                else{
                    qDebug()<<pData;
                    qDebug()<<pI->text(0);
                }
            }
            lua_pop(L,1);
        }
        lua_pop(L,1);
    }
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
                hiddenVars.insert(nestList.join(""));
            }
            else{
                QStringList sList;
                QTreeWidgetItem * pItem;
                sList << nestName;
                sList << nestName.toLower();
                pItem = new QTreeWidgetItem(sList);
                pItem->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsDropEnabled|Qt::ItemIsDragEnabled);
                tableOrder.insert(nestName, pItem);
                QStringList pData;
                pData << QString::number(tableList.first()->getType());
                pData << QString::number(LUA_TTABLE);
                pData << "Table";
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
                if (showHidden || !mpHost->isHiddenVariable(pItem))
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
                    hiddenVars.insert(nestList.join(""));
                }
                else{
                    QStringList sList;
                    QTreeWidgetItem * pItem;
                    sList << tableName;
                    sList << tableName.toLower();
                    ////qDebug()<<"adding new table"<<tableName<<"under "<<nestName;
                    pItem = new QTreeWidgetItem(sList);
                    pItem->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsDropEnabled|Qt::ItemIsDragEnabled);
                    //pItem->setCheckState(0, Qt::Unchecked);
                    tableOrder.insert(nestName+tableName, pItem);
                    QStringList pData;
                    pData << QString::number(tableInfo->getType());
                    pData << QString::number(LUA_TTABLE);
                    pData << "Table";
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
                    if (showHidden || !mpHost->isHiddenVariable(pItem))
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
                        hiddenVars.insert(nestList.join("")+it.key());
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
                        sList << itName.toLower();
                        QTreeWidgetItem * pI = new QTreeWidgetItem( sList);
                        pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsDropEnabled|Qt::ItemIsDragEnabled);
                        //pI->setCheckState(0, Qt::Unchecked);
                        pI->setData( 0, Qt::UserRole, pData );
                        QString nestListConcat = nestList.join("")+pData[0]+itName;
                        if (mpHost->savedVariables.contains(nestListConcat)){
                            mpHost->savedVariables[nestListConcat] = pI;
                            pI->setCheckState(0, Qt::Checked);
                        }
                        else
                            pI->setCheckState(0, Qt::Unchecked);
                        if (showHidden || !mpHost->isHiddenVariable(pI))
                            itemsToAdd.append(pI );
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
                            hiddenVars.insert(nestList.join("")+it.key());
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
                            sList << itName.toLower();
                            QTreeWidgetItem * pI = new QTreeWidgetItem(sList);
                            pI->setFlags(Qt::ItemIsTristate|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsDropEnabled|Qt::ItemIsDragEnabled);
                            //pI->setCheckState(0, Qt::Unchecked);
                            pI->setData( 0, Qt::UserRole, pData );
                            QString nestListConcat = nestList.join("")+pData[0]+itName;
                            if (mpHost->savedVariables.contains(nestListConcat)){
                                mpHost->savedVariables[nestListConcat] = pI;
                                pI->setCheckState(0, Qt::Checked);
                            }
                            else
                                pI->setCheckState(0, Qt::Unchecked);
                            if (showHidden || !mpHost->isHiddenVariable(pI))
                                itemsToAdd.append(pI );
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
    mpHost->addHiddenVars(hiddenVars);
    //qDebug()<<"hide status"<<hide;
    //qDebug()<<hiddenVars;
}
