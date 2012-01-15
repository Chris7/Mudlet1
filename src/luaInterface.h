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

class tableObject{
    public:
        tableObject(QString);
        QList<tableObject*> getChildren();
        tableObject* getParent();
        QString getName();
        void addChildTable(tableObject* table);
        void addVariable(QString name, QString entry);
        QMap<QString, QString> getVariables();
        QString getVariable(QString name);
        void setParent(tableObject* table);
        void setType(int);
        int getType();
    private:
        QString tableName;
        QList<tableObject*> children;
        tableObject* parent;
        QMap<QString, QString> variables;
        int tableType;
};

class luaInterface{

    //friend class TLuaInterpreter;

public:
    luaInterface( Host * mpHost);
    void getVars(QTreeWidgetItem *);
    void saveVar(QTreeWidgetItem * pItem, QString newName, QString newValue);
    void iterateTable(lua_State* L, QList<tableObject*> &tables, QList<tableObject*> &tables2, QStringList nestList);

private:
    Host * mpHost;
    int mHostID;
    TLuaInterpreter *interpreter;
    lua_State* L;
};
#endif // LUAINTERFACE_H
