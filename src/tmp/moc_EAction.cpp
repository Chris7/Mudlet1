/****************************************************************************
** Meta object code from reading C++ file 'EAction.h'
**
** Created: Thu Sep 8 00:59:34 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EAction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EAction[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   29,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EAction[] = {
    "EAction\0\0triggered(QAction*)\0checked\0"
    "slot_execute(bool)\0"
};

const QMetaObject EAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_EAction,
      qt_meta_data_EAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EAction))
        return static_cast<void*>(const_cast< EAction*>(this));
    return QAction::qt_metacast(_clname);
}

int EAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: slot_execute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EAction::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
