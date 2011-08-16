/****************************************************************************
** Meta object code from reading C++ file 'dlgIRC.h'
**
** Created: Mon Aug 15 15:07:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgIRC.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgIRC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgIRC[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    8,    7,    7, 0x0a,
      51,   47,    7,    7, 0x0a,
      93,   84,    7,    7, 0x0a,
     136,  131,    7,    7, 0x0a,
     158,  156,    7,    7, 0x0a,
     187,    8,    7,    7, 0x0a,
     224,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgIRC[] = {
    "dlgIRC\0\0,,\0irc_gotMsg(QString,QString,QString)\0"
    "a,c\0irc_gotMsg2(QString,QStringList)\0"
    "a,code,c\0irc_gotMsg3(QString,uint,QStringList)\0"
    "link\0anchorClicked(QUrl)\0,\0"
    "slot_joined(QString,QString)\0"
    "slot_parted(QString,QString,QString)\0"
    "sendMsg()\0"
};

const QMetaObject dlgIRC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dlgIRC,
      qt_meta_data_dlgIRC, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgIRC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgIRC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgIRC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgIRC))
        return static_cast<void*>(const_cast< dlgIRC*>(this));
    if (!strcmp(_clname, "Ui::irc_dlg"))
        return static_cast< Ui::irc_dlg*>(const_cast< dlgIRC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dlgIRC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: irc_gotMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: irc_gotMsg2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: irc_gotMsg3((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 3: anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: slot_joined((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: slot_parted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: sendMsg(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
