/****************************************************************************
** Meta object code from reading C++ file 'mudlet.h'
**
** Created: Tue Aug 23 23:12:34 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mudlet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mudlet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mudlet[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      22,    7,    7,    7, 0x0a,
      47,    7,    7,    7, 0x0a,
      68,    7,    7,    7, 0x0a,
      91,    7,    7,    7, 0x0a,
     114,    7,    7,    7, 0x0a,
     168,    7,    7,    7, 0x0a,
     193,    7,    7,    7, 0x0a,
     223,    7,    7,    7, 0x0a,
     253,    7,    7,    7, 0x0a,
     281,    7,    7,    7, 0x0a,
     314,    7,    7,    7, 0x0a,
     346,    7,    7,    7, 0x0a,
     364,    7,    7,    7, 0x0a,
     390,  387,    7,    7, 0x0a,
     448,  425,    7,    7, 0x0a,
     491,    7,    7,    7, 0x0a,
     510,    7,    7,    7, 0x0a,
     528,    7,    7,    7, 0x0a,
     545,    7,    7,    7, 0x0a,
     559,    7,    7,    7, 0x0a,
     577,    7,    7,    7, 0x0a,
     590,    7,    7,    7, 0x0a,
     607,    7,    7,    7, 0x0a,
     641,    7,    7,    7, 0x0a,
     658,    7,    7,    7, 0x0a,
     669,    7,    7,    7, 0x0a,
     694,    7,    7,    7, 0x0a,
     717,    7,    7,    7, 0x0a,
     740,    7,    7,    7, 0x08,
     761,    7,    7,    7, 0x08,
     783,    7,    7,    7, 0x08,
     802,    7,    7,    7, 0x08,
     820,    7,    7,    7, 0x08,
     842,    7,    7,    7, 0x08,
     862,    7,    7,    7, 0x08,
     883,    7,    7,    7, 0x08,
     903,    7,    7,    7, 0x08,
     924,    7,    7,    7, 0x08,
     942,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mudlet[] = {
    "mudlet\0\0slot_mapper()\0slot_replayTimeChanged()\0"
    "slot_replaySpeedUp()\0slot_replaySpeedDown()\0"
    "toggleFullScreenView()\0"
    "slot_userToolBar_orientation_changed(Qt::Orientation)\0"
    "slot_show_about_dialog()\0"
    "slot_show_help_dialog_video()\0"
    "slot_show_help_dialog_forum()\0"
    "slot_show_help_dialog_irc()\0"
    "slot_show_help_dialog_download()\0"
    "slot_open_mappingscripts_page()\0"
    "slot_multi_view()\0slot_stopAllTriggers()\0"
    "pA\0slot_userToolBar_hovered(QAction*)\0"
    "profile,historyVersion\0"
    "slot_connection_dlg_finnished(QString,int)\0"
    "slot_timer_fires()\0slot_send_login()\0"
    "slot_send_pass()\0slot_replay()\0"
    "slot_disconnect()\0slot_notes()\0"
    "slot_reconnect()\0slot_close_profile_requested(int)\0"
    "startAutoLogin()\0slot_irc()\0"
    "slot_uninstall_package()\0"
    "slot_install_package()\0slot_package_manager()\0"
    "slot_close_profile()\0slot_tab_changed(int)\0"
    "show_help_dialog()\0connectToServer()\0"
    "show_trigger_dialog()\0show_alias_dialog()\0"
    "show_script_dialog()\0show_timer_dialog()\0"
    "show_action_dialog()\0show_key_dialog()\0"
    "show_options_dialog()\0"
};

const QMetaObject mudlet::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mudlet,
      qt_meta_data_mudlet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mudlet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mudlet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mudlet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mudlet))
        return static_cast<void*>(const_cast< mudlet*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< mudlet*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mudlet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_mapper(); break;
        case 1: slot_replayTimeChanged(); break;
        case 2: slot_replaySpeedUp(); break;
        case 3: slot_replaySpeedDown(); break;
        case 4: toggleFullScreenView(); break;
        case 5: slot_userToolBar_orientation_changed((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 6: slot_show_about_dialog(); break;
        case 7: slot_show_help_dialog_video(); break;
        case 8: slot_show_help_dialog_forum(); break;
        case 9: slot_show_help_dialog_irc(); break;
        case 10: slot_show_help_dialog_download(); break;
        case 11: slot_open_mappingscripts_page(); break;
        case 12: slot_multi_view(); break;
        case 13: slot_stopAllTriggers(); break;
        case 14: slot_userToolBar_hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: slot_connection_dlg_finnished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: slot_timer_fires(); break;
        case 17: slot_send_login(); break;
        case 18: slot_send_pass(); break;
        case 19: slot_replay(); break;
        case 20: slot_disconnect(); break;
        case 21: slot_notes(); break;
        case 22: slot_reconnect(); break;
        case 23: slot_close_profile_requested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: startAutoLogin(); break;
        case 25: slot_irc(); break;
        case 26: slot_uninstall_package(); break;
        case 27: slot_install_package(); break;
        case 28: slot_package_manager(); break;
        case 29: slot_close_profile(); break;
        case 30: slot_tab_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: show_help_dialog(); break;
        case 32: connectToServer(); break;
        case 33: show_trigger_dialog(); break;
        case 34: show_alias_dialog(); break;
        case 35: show_script_dialog(); break;
        case 36: show_timer_dialog(); break;
        case 37: show_action_dialog(); break;
        case 38: show_key_dialog(); break;
        case 39: show_options_dialog(); break;
        default: ;
        }
        _id -= 40;
    }
    return _id;
}
static const uint qt_meta_data_TConsoleMonitor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TConsoleMonitor[] = {
    "TConsoleMonitor\0"
};

const QMetaObject TConsoleMonitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TConsoleMonitor,
      qt_meta_data_TConsoleMonitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TConsoleMonitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TConsoleMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TConsoleMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TConsoleMonitor))
        return static_cast<void*>(const_cast< TConsoleMonitor*>(this));
    return QObject::qt_metacast(_clname);
}

int TConsoleMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
