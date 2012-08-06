
CONFIG += debug uitools

QMAKE_CXXFLAGS_RELEASE += -O3 -Wno-deprecated -Wno-unused-parameter
QMAKE_CXXFLAGS_DEBUG += -O3
MOC_DIR = ./tmp
OBJECTS_DIR = ./tmp
QT += network opengl phonon webkit
DEPENDPATH += .
INCLUDEPATH += .
LIBLUA = -llua5.1
!exists(/usr/lib/liblua5.1.a):LIBLUA = -llua
EXTERNAL_INCLUDES = "C:\mudlet_package\includes"
# automatically link to LuaJIT if it exists
exists(/usr/local/lib/libluajit-5.1.a):LIBLUA = -L/usr/local/lib -lluajit-5.1

unix:LIBS += -lpcre \
    $$LIBLUA \
    -lhunspell \
    -lyajl \
    -lzzip 

win32:LIBS += -L"C:\mudlet_package\mudlet_libs" \
    -llua51 \
    -lpcre \
    -lhunspell \
    -lyajl

unix:INCLUDEPATH += /usr/include/lua5.1

win32:INCLUDEPATH += $$EXTERNAL_INCLUDES\lua-5.1.4\src \
    "C:\QtSDK\Desktop\Qt\4.8.1\mingw\lib" \
"C:\QtSDK\Desktop\Qt\4.8.1\mingw\include"\
"C:\QtSDK\Desktop\Qt\4.8.1\mingw\include\QtCore" \
    $$EXTERNAL_INCLUDES\zlib123-dll\include \
    $$EXTERNAL_INCLUDES\boost_1_47_0 \
    $$EXTERNAL_INCLUDES\pcre-8.13 \
    $$EXTERNAL_INCLUDES\lloyd-yajl-17b1790\src \
    $$EXTERNAL_INCLUDES\hunspell-1.3.2\src

unix:isEmpty( INSTALL_PREFIX ):INSTALL_PREFIX = /usr/local
unix: {
    SHARE_DIR = /usr/local/share/mudlet
    BIN_DIR = $$INSTALL_PREFIX/bin
}
INCLUDEPATH += irc/include
SOURCES += TConsole.cpp \
    ctelnet.cpp \
    main.cpp \
    Host.cpp \
    HostManager.cpp \
    HostPool.cpp \
    dlgConnectionProfiles.cpp \
    dlgTriggerEditor.cpp \
    TTrigger.cpp \
    TriggerUnit.cpp \
    TLuaInterpreter.cpp \
    dlgTriggersMainArea.cpp \
    dlgOptionsAreaTriggers.cpp \
    dlgOptionsAreaTimers.cpp \
    dlgOptionsAreaScripts.cpp \
    TCommandLine.cpp \
    TTreeWidget.cpp \
    TTreeWidgetItem.cpp \
    TTimer.cpp \
    TScript.cpp \
    TAlias.cpp \
    dlgTimersMainArea.cpp \
    dlgSystemMessageArea.cpp \
    dlgSourceEditorArea.cpp \
    TimerUnit.cpp \
    ScriptUnit.cpp \
    AliasUnit.cpp \
    dlgScriptsMainArea.cpp \
    dlgAliasMainArea.cpp \
    dlgOptionsAreaAlias.cpp \
    dlgSearchArea.cpp \
    TAction.cpp \
    ActionUnit.cpp \
    dlgActionMainArea.cpp \
    dlgOptionsAreaAction.cpp \
    EAction.cpp \
    dlgAboutDialog.cpp \
    TDebug.cpp \
    dlgKeysMainArea.cpp \
    TKey.cpp \
    KeyUnit.cpp \
    dlgProfilePreferences.cpp \
    TTextEdit.cpp \
    XMLexport.cpp \
    XMLimport.cpp \
    FontManager.cpp \
    TFlipButton.cpp \
    TToolBar.cpp \
    TLabel.cpp \
    TEasyButtonBar.cpp \
    TForkedProcess.cpp \
    dlgColorTrigger.cpp \
    dlgTriggerPatternEdit.cpp \
    TSplitter.cpp \
    TSplitterHandle.cpp \
    mudlet.cpp \
    dlgNotepad.cpp \
    THighlighter.cpp \
    dlgComposer.cpp \
    TArea.cpp \
    glwidget.cpp \
    dlgMapper.cpp \
    TRoom.cpp \
    TMap.cpp \
    lua_yajl1.c \
    TBuffer.cpp \
    irc/src/ircbuffer.cpp \
    irc/src/irc.cpp \
    irc/src/ircsession.cpp \
    irc/src/ircutil.cpp \
    dlgIRC.cpp \
    T2DMap.cpp \
    dlgRoomExits.cpp \
    luaInterface.cpp \
    dlgVarsMainArea.cpp \
    dlgPackageExporter.cpp


HEADERS += mudlet.h \
    TTimer.h \
    EAction.h \
    TConsole.h \
    ctelnet.h \
    Host.h \
    TMap.h \
    TAStar.h \
    HostManager.h \
    HostPool.h \
    dlgConnectionProfiles.h \
    dlgTriggerEditor.h \
    TTrigger.h \
    TLuaInterpreter.h \
    dlgTriggers_main_area.h \
    dlgOptionsAreaTriggers.h \
    dlgTriggerPatternEdit.h \
    TCommandLine.h \
    TTreeWidget.h \
    TTreeWidgetItem.h \
    TScript.h \
    TAlias.h \
    dlgTimersMainArea.h \
    dlgSourceEditorArea.h \
    dlgSystemMessageArea.h \
    TimerUnit.h \
    ScriptUnit.h \
    AliasUnit.h \
    dlgScriptsMainArea.h \
    dlgAliasMainArea.h \
    dlgOptionsAreaAlias.h \
    dlgOptionsAreaScripts.h \
    dlgOptionsAreaTimers.h \
    dlgSearchArea.h \
    TAction.h \
    ActionUnit.h \
    dlgActionMainArea.h \
    dlgOptionsAreaAction.h \
    dlgAboutDialog.h \
    TMatchState.h \
    TEvent.h \
    TDebug.h \
    dlgKeysMainArea.h \
    TKey.h \
    KeyUnit.h \
    dlgProfilePreferences.h \
    TTextEdit.h \
    TFlipButton.h \
    TToolBar.h \
    TBuffer.h \
    TriggerUnit.h \
    TLabel.h \
    TEasyButtonBar.h \
    TForkedProcess.h \
    dlgColorTrigger.h \
    TSplitter.h \
    TSplitterHandle.h \
    dlgNotepad.h \
    THighlighter.h \
    dlgComposer.h \
    TRoom.h \
    TArea.h \
    TMap.h \
    glwidget.h \
    dlgMapper.h \
    Tree.h \
    irc/include/ircbuffer.h \
    irc/include/irc.h \
    irc/include/ircsession.h \
    irc/include/ircutil.h \
    dlgIRC.h \
    T2DMap.h \
    dlgRoomExits.h \
    luaInterface.h \
    dlgVarsMainArea.h \
    dlgPackageExporter.h

FORMS += ui/connection_profiles.ui \
    ui/main_window.ui \
    ui/trigger_editor.ui \
    ui/options_area_triggers.ui \
    ui/options_area_timers.ui \
    ui/options_area_aliases.ui \
    ui/options_area_scripts.ui \
    ui/triggers_main_area.ui \
    ui/scripts_main_area.ui \
    ui/aliases_main_area.ui \
    ui/system_message_area.ui \
    ui/source_editor_area.ui \
    ui/extended_search_area.ui \
    ui/actions_main_area.ui \
    ui/options_area_actions.ui \
    ui/timers_main_area.ui \
    ui/about_dialog.ui \
    ui/keybindings_main_area.ui \
    ui/color_trigger.ui \
    ui/notes_editor.ui \
    ui/trigger_pattern_edit.ui \
    ui/composer.ui \
    ui/mapper.ui \
    ui/profile_preferences.ui \
    ui/irc.ui \
    ui/mapper_room_color.ui \
    ui/room_exits.ui \
    ui/lacking_mapper_script.ui \
    ui/package_manager.ui \
    ui/module_manager.ui \
    ui/package_manager_unpack.ui \
    ui/custom_lines.ui \
    ui/vars_main_area.ui \
    ui/dlgPackageExporter.ui

#win32: {
#    SOURCES += lua_yajl.c
#}

#unix: {
#    SOURCES += lua_yajl1.c
#}

TEMPLATE = app
TARGET = mudlet
RESOURCES = mudlet_alpha.qrc
DISTFILES += paragraph.css
unix: {
    luaglobal.path = $$SHARE_DIR
    luaglobal.files = LuaGlobal.lua
    documentation.path = $$SHARE_DIR
    documentation.files = mudlet_documentation.html
    fonts.path = $$SHARE_DIR
    fonts.files = fonts/ttf-bitstream-vera-1.10/*
    target.path = $$BIN_DIR
}
INSTALLS += fonts \
    luaglobal \
    documentation \
    target

OTHER_FILES += \
    mudlet_documentation.txt
