#ifndef LUAINTERFACE_H
#define LUAINTERFACE_H

#include "TLuaInterpreter.h"
#include "TTreeWidget.h"
#include "Host.h"
#include <QSet>
#include <setjmp.h>

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
    static int lua_panic (lua_State *L);
    int pushVariable(lua_State* L, int varType, QString varName);
    int pushVariable(lua_State* L, QTreeWidgetItem * pItem);
    int getVariable(lua_State* L, QStringList varInfo);
    int getVariable(lua_State* L, QTreeWidgetItem * pItem);
    int deleteVar(lua_State* L, QTreeWidgetItem * pItem);
    int renameVariable(lua_State* L, QTreeWidgetItem * pItem, QString newName);
    void getVars(QTreeWidgetItem *, int hide, bool showHidden);
    int saveVar(QTreeWidgetItem * pItem, QString newName, QString newValue, int force);
    void iterateTable(lua_State* L, QList<tableObject*> &tables, QList<tableObject*> &tables2, QStringList nestList);
    int deleteVar(QTreeWidgetItem * pItem);
    int restoreVar(QStringList pInfo);
    QString getValue(QTreeWidgetItem * pItem);

private:
    Host * mpHost;
    int mHostID;
    TLuaInterpreter *interpreter;
    lua_State* L;
    QSet<QString> hiddenVars;
};
#endif // LUAINTERFACE_H
