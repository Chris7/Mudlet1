/****************************************************************************
** Meta object code from reading C++ file 'dlgMapper.h'
**
** Created: Tue Aug 30 21:16:35 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgMapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgMapper[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x0a,
      44,   42,   10,   10, 0x0a,
      74,   72,   10,   10, 0x0a,
     106,   10,   10,   10, 0x0a,
     119,   10,   10,   10, 0x0a,
     140,  138,   10,   10, 0x0a,
     175,   10,   10,   10, 0x0a,
     184,   10,   10,   10, 0x0a,
     214,   10,   10,   10, 0x0a,
     223,   10,   10,   10, 0x0a,
     253,  251,   10,   10, 0x0a,
     272,  251,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgMapper[] = {
    "dlgMapper\0\0slot_bubbles()\0slot_showGrid()\0"
    "s\0slot_toggleShowRoomIDs(int)\0v\0"
    "slot_toggleStrongHighlight(int)\0"
    "show2dView()\0slot_togglePanel()\0,\0"
    "setDownloadProgress(qint64,qint64)\0"
    "cancel()\0replyFinished(QNetworkReply*)\0"
    "goRoom()\0choseRoom(QListWidgetItem*)\0"
    "d\0slot_roomSize(int)\0slot_lineSize(int)\0"
};

const QMetaObject dlgMapper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgMapper,
      qt_meta_data_dlgMapper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgMapper))
        return static_cast<void*>(const_cast< dlgMapper*>(this));
    if (!strcmp(_clname, "Ui::mapper"))
        return static_cast< Ui::mapper*>(const_cast< dlgMapper*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_bubbles(); break;
        case 1: slot_showGrid(); break;
        case 2: slot_toggleShowRoomIDs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slot_toggleStrongHighlight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: show2dView(); break;
        case 5: slot_togglePanel(); break;
        case 6: setDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: cancel(); break;
        case 8: replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: goRoom(); break;
        case 10: choseRoom((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: slot_roomSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: slot_lineSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
