#include "luaInterface.h"
#include <QDebug>

using namespace std;
luaInterface::luaInterface( Host * pH)
:mpHost( pH )
{
    interpreter = mpHost->getLuaInterpreter();
}

void luaInterface::saveVar(QString oldName, QString newName, QString newValue){
    qDebug()<<"saving variable"<<oldName<<"to"<<newName<<":"<<newValue;
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

void luaInterface::iterateTable(lua_State* L, QString tableName, QMap<QString, QStringList> &out, int endCondition){
    lua_pushnil(L);
    while (lua_next(L, endCondition) != 0) {
        qDebug()<<"inside table";
        int key_type = lua_type(L, -2);
        int value_type = lua_type(L, -1);
        if (key_type != LUA_TSTRING && key_type != LUA_TNUMBER) {
            lua_pop(L, 1); // pop the value so that the top contains the key for the next iteration
            continue;
        }
        if (value_type != LUA_TNUMBER &&
            value_type != LUA_TBOOLEAN &&
            value_type != LUA_TSTRING &&
            value_type != LUA_TTABLE) {
            lua_pop(L, 1); // again, pop the value before going to the next loop iteration
            continue;
        }
        lua_pushvalue(L,-2);
        QString key_string = lua_tostring(L, -1);
        lua_pop(L,1);
        qDebug()<<key_string<<key_type<<":valuetype"<<value_type;
        if (!key_string.size() || key_string[0] == '_' || key_string == tableName) {
            lua_pop(L, 1);
            continue;
        }
        QString value_string;
        switch (value_type) {
            case LUA_TTABLE:
                   qDebug()<<"going into table"<<key_string;
                   //lua_getglobal( L, key_string.toLatin1().data() );
                   //lua_pushnil(L);
                   //iterateTable(L,key_string, out, -2);
                   //lua_pop( L, 1 );
                   break;
            case LUA_TSTRING:
            case LUA_TNUMBER:
                // numbers can be converted to strings

                // get the value as a string (this requires a copy because traversing tables
                // uses the top of the stack as an index. If conversion from a number to string
                // happens, the top of the stack will be altered and the table index will become invalid)
                lua_pushvalue(L, -1);
                value_string = lua_tostring(L, -1);
                lua_pop(L, 1);
                break;
            case LUA_TBOOLEAN:
                value_string = lua_toboolean(L, -1) == 0 ? "false" : "true";
                break;
        }
        qDebug()<<key_string<<":"<<value_string<<" of type:"<<value_type<<" in table"<<tableName;
        if (value_type == LUA_TSTRING) {// enclose the value in "" if it is a string
            value_string = "\"" + value_string + "\"";
        }

        QStringList val;
        val << value_string;
        val << tableName;
        out.insertMulti(key_string,val);
        lua_pop(L,1);//pop our value out now
    }
}

QMap<QString, QStringList > luaInterface::getGlobals(){
    //Code from:
    //http://cdry.wordpress.com/2010/06/26/how-to-save-global-variables-using-the-lua-c-api/
    //another resource: http://lua-users.org/lists/lua-l/2004-06/msg00329.html
    L = interpreter->pGlobalLua;
    QMap<QString, QStringList> out; //3 things stored in QStringList, 0=name, 1=type, 2=table containted within, if applicable
    iterateTable(L, "__ROOT", out, LUA_GLOBALSINDEX);
    /*lua_pushnil(L);
    while (lua_next(L, LUA_GLOBALSINDEX) != 0) {
        int key_type = lua_type(L, -2);
        int value_type = lua_type(L, -1);
        if (key_type != LUA_TSTRING) {
            lua_pop(L, 1); // pop the value so that the top contains the key for the next iteration
            continue;
        }
        if (value_type != LUA_TNUMBER &&
            value_type != LUA_TBOOLEAN &&
            value_type != LUA_TSTRING) {
            lua_pop(L, 1); // again, pop the value before going to the next loop iteration
            continue;
        }
        QString key_string = lua_tostring(L, -2); // no copy required - we already know this is a string
        if (!key_string.size() || key_string[0] == '_') {
            lua_pop(L, 1);
            continue;
        }
        QString value_string;
        switch (value_type) {
            case LUA_TSTRING:
            case LUA_TNUMBER:
                // numbers can be converted to strings

                // get the value as a string (this requires a copy because traversing tables
                // uses the top of the stack as an index. If conversion from a number to string
                // happens, the top of the stack will be altered and the table index will become invalid)
                lua_pushvalue(L, -1);
                value_string = lua_tostring(L, -1);
                lua_pop(L, 1);
                break;
            case LUA_TBOOLEAN:
                value_string = lua_toboolean(L, -1) == 0 ? "false" : "true";
                break;
        }
        qDebug()<<key_string<<":"<<value_string;
        if (value_type == LUA_TSTRING) {// enclose the value in "" if it is a string
            value_string = "\"" + value_string + "\"";
        }

        QStringList val;
        val << value_string;
        val << "__ROOT";
        out.insertMulti(key_string,val);
        lua_pop(L,1);//pop our value out now
    }*/
    return out;
}
