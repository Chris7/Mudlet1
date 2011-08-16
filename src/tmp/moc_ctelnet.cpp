/****************************************************************************
** Meta object code from reading C++ file 'ctelnet.h'
**
** Created: Mon Aug 15 15:05:17 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ctelnet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctelnet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cTelnet[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x0a,
      46,    8,    8,    8, 0x0a,
      76,    8,    8,    8, 0x0a,
      87,    8,    8,    8, 0x0a,
     129,    8,    8,    8, 0x0a,
     162,    8,    8,    8, 0x0a,
     198,    8,    8,    8, 0x0a,
     231,    8,    8,    8, 0x0a,
     260,    8,    8,    8, 0x0a,
     280,    8,    8,    8, 0x0a,
     298,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cTelnet[] = {
    "cTelnet\0\0,\0setDownloadProgress(qint64,qint64)\0"
    "replyFinished(QNetworkReply*)\0readPipe()\0"
    "handle_socket_signal_hostFound(QHostInfo)\0"
    "handle_socket_signal_connected()\0"
    "handle_socket_signal_disconnected()\0"
    "handle_socket_signal_readyRead()\0"
    "handle_socket_signal_error()\0"
    "slot_timerPosting()\0slot_send_login()\0"
    "slot_send_pass()\0"
};

const QMetaObject cTelnet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cTelnet,
      qt_meta_data_cTelnet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cTelnet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cTelnet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cTelnet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cTelnet))
        return static_cast<void*>(const_cast< cTelnet*>(this));
    return QObject::qt_metacast(_clname);
}

int cTelnet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: readPipe(); break;
        case 3: handle_socket_signal_hostFound((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 4: handle_socket_signal_connected(); break;
        case 5: handle_socket_signal_disconnected(); break;
        case 6: handle_socket_signal_readyRead(); break;
        case 7: handle_socket_signal_error(); break;
        case 8: slot_timerPosting(); break;
        case 9: slot_send_login(); break;
        case 10: slot_send_pass(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
