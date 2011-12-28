#ifndef LUAINTERFACE_H
#define LUAINTERFACE_H

#include "TLuaInterpreter.h"
#include "Host.h"

extern "C"
{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

class TLuaInterpreter;
class Host;

class luaInterface{

    //friend class TLuaInterpreter;

public:
    luaInterface( Host * mpHost);
    QMap<QString,QStringList> getGlobals();
    void saveVar(QString oldName, QString newName, QString newValue);
    void iterateTable(lua_State* L, QString tableName, QMap<QString, QStringList> &out, int endCondition);

private:
    Host * mpHost;
    int mHostID;
    TLuaInterpreter *interpreter;
    lua_State* L;
};
#endif // LUAINTERFACE_H
