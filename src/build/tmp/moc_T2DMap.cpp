/****************************************************************************
** Meta object code from reading C++ file 'T2DMap.h'
**
** Created: Tue Aug 16 19:36:47 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../T2DMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T2DMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_T2DMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      27,    7,    7,    7, 0x0a,
      50,    7,    7,    7, 0x0a,
      61,    7,    7,    7, 0x0a,
      72,    7,    7,    7, 0x0a,
      85,    7,    7,    7, 0x0a,
     105,    7,    7,    7, 0x0a,
     123,    7,    7,    7, 0x0a,
     133,    7,    7,    7, 0x0a,
     145,    7,    7,    7, 0x0a,
     157,    7,    7,    7, 0x0a,
     170,    7,    7,    7, 0x0a,
     190,    7,    7,    7, 0x0a,
     206,    7,    7,    7, 0x0a,
     226,    7,    7,    7, 0x0a,
     251,  248,    7,    7, 0x0a,
     290,    7,    7,    7, 0x0a,
     306,    7,    7,    7, 0x0a,
     324,    7,    7,    7, 0x0a,
     343,    7,    7,    7, 0x0a,
     357,    7,    7,    7, 0x0a,
     371,    7,    7,    7, 0x0a,
     387,    7,    7,    7, 0x0a,
     406,    7,    7,    7, 0x0a,
     422,    7,    7,    7, 0x0a,
     443,    7,    7,    7, 0x0a,
     458,    7,    7,    7, 0x0a,
     479,    7,    7,    7, 0x0a,
     503,  501,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_T2DMap[] = {
    "T2DMap\0\0slot_createLabel()\0"
    "slot_customLineColor()\0showInfo()\0"
    "shiftZup()\0shiftZdown()\0switchArea(QString)\0"
    "toggleShiftMode()\0shiftUp()\0shiftDown()\0"
    "shiftLeft()\0shiftRight()\0slot_setCharacter()\0"
    "slot_setImage()\0slot_movePosition()\0"
    "slot_defineNewColor()\0pI\0"
    "slot_selectRoomColor(QListWidgetItem*)\0"
    "slot_moveRoom()\0slot_deleteRoom()\0"
    "slot_changeColor()\0slot_spread()\0"
    "slot_shrink()\0slot_setExits()\0"
    "slot_setUserData()\0slot_lockRoom()\0"
    "slot_setRoomWeight()\0slot_setArea()\0"
    "slot_setCustomLine()\0slot_setCustomLine2()\0"
    ",\0slot_setCustomLine2B(QTreeWidgetItem*,int)\0"
};

const QMetaObject T2DMap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_T2DMap,
      qt_meta_data_T2DMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &T2DMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *T2DMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *T2DMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_T2DMap))
        return static_cast<void*>(const_cast< T2DMap*>(this));
    return QWidget::qt_metacast(_clname);
}

int T2DMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_createLabel(); break;
        case 1: slot_customLineColor(); break;
        case 2: showInfo(); break;
        case 3: shiftZup(); break;
        case 4: shiftZdown(); break;
        case 5: switchArea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: toggleShiftMode(); break;
        case 7: shiftUp(); break;
        case 8: shiftDown(); break;
        case 9: shiftLeft(); break;
        case 10: shiftRight(); break;
        case 11: slot_setCharacter(); break;
        case 12: slot_setImage(); break;
        case 13: slot_movePosition(); break;
        case 14: slot_defineNewColor(); break;
        case 15: slot_selectRoomColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: slot_moveRoom(); break;
        case 17: slot_deleteRoom(); break;
        case 18: slot_changeColor(); break;
        case 19: slot_spread(); break;
        case 20: slot_shrink(); break;
        case 21: slot_setExits(); break;
        case 22: slot_setUserData(); break;
        case 23: slot_lockRoom(); break;
        case 24: slot_setRoomWeight(); break;
        case 25: slot_setArea(); break;
        case 26: slot_setCustomLine(); break;
        case 27: slot_setCustomLine2(); break;
        case 28: slot_setCustomLine2B((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
