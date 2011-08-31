/****************************************************************************
** Meta object code from reading C++ file 'TConsole.h'
**
** Created: Tue Aug 30 00:54:12 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TConsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TConsole[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      32,    9,    9,    9, 0x0a,
      56,    9,    9,    9, 0x0a,
      85,    9,    9,    9, 0x0a,
     114,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TConsole[] = {
    "TConsole\0\0slot_searchBufferUp()\0"
    "slot_searchBufferDown()\0"
    "slot_toggleReplayRecording()\0"
    "slot_stop_all_triggers(bool)\0"
    "slot_toggleLogging()\0"
};

const QMetaObject TConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TConsole,
      qt_meta_data_TConsole, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TConsole))
        return static_cast<void*>(const_cast< TConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int TConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_searchBufferUp(); break;
        case 1: slot_searchBufferDown(); break;
        case 2: slot_toggleReplayRecording(); break;
        case 3: slot_stop_all_triggers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: slot_toggleLogging(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
