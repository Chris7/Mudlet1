/****************************************************************************
** Meta object code from reading C++ file 'dlgConnectionProfiles.h'
**
** Created: Tue Aug 16 19:33:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlgConnectionProfiles.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgConnectionProfiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgConnectionProfiles[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   23,   22,   22, 0x05,
      92,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   22,   22,   22, 0x0a,
     122,   22,   22,   22, 0x0a,
     148,   22,   22,   22, 0x0a,
     165,   22,   22,   22, 0x0a,
     190,   22,   22,   22, 0x0a,
     216,   22,   22,   22, 0x0a,
     243,   22,   22,   22, 0x0a,
     269,   22,   22,   22, 0x0a,
     298,   22,   22,   22, 0x0a,
     332,   22,   22,   22, 0x0a,
     358,   22,   22,   22, 0x0a,
     394,   22,   22,   22, 0x0a,
     408,   22,   22,   22, 0x0a,
     426,   22,   22,   22, 0x0a,
     447,   22,   22,   22, 0x0a,
     480,  474,   22,   22, 0x0a,
     507,   22,   22,   22, 0x0a,
     530,   22,   22,   22, 0x0a,
     544,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgConnectionProfiles[] = {
    "dlgConnectionProfiles\0\0"
    "profile_name,historyVersion\0"
    "signal_establish_connection(QString,int)\0"
    "update()\0slot_chose_history()\0"
    "slot_update_name(QString)\0slot_save_name()\0"
    "slot_update_url(QString)\0"
    "slot_update_port(QString)\0"
    "slot_update_login(QString)\0"
    "slot_update_pass(QString)\0"
    "slot_update_website(QString)\0"
    "slot_deleteprofile_check(QString)\0"
    "slot_update_description()\0"
    "slot_item_clicked(QListWidgetItem*)\0"
    "slot_update()\0slot_addProfile()\0"
    "slot_deleteProfile()\0slot_reallyDeleteProfile()\0"
    "state\0slot_update_autologin(int)\0"
    "slot_connectToServer()\0slot_cancel()\0"
    "slot_copy_profile()\0"
};

const QMetaObject dlgConnectionProfiles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgConnectionProfiles,
      qt_meta_data_dlgConnectionProfiles, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgConnectionProfiles::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgConnectionProfiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgConnectionProfiles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgConnectionProfiles))
        return static_cast<void*>(const_cast< dlgConnectionProfiles*>(this));
    if (!strcmp(_clname, "Ui::profile_dialog"))
        return static_cast< Ui::profile_dialog*>(const_cast< dlgConnectionProfiles*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgConnectionProfiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signal_establish_connection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: update(); break;
        case 2: slot_chose_history(); break;
        case 3: slot_update_name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: slot_save_name(); break;
        case 5: slot_update_url((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: slot_update_port((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: slot_update_login((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: slot_update_pass((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: slot_update_website((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: slot_deleteprofile_check((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: slot_update_description(); break;
        case 12: slot_item_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: slot_update(); break;
        case 14: slot_addProfile(); break;
        case 15: slot_deleteProfile(); break;
        case 16: slot_reallyDeleteProfile(); break;
        case 17: slot_update_autologin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: slot_connectToServer(); break;
        case 19: slot_cancel(); break;
        case 20: slot_copy_profile(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void dlgConnectionProfiles::signal_establish_connection(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dlgConnectionProfiles::update()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
