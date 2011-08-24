/****************************************************************************
** Meta object code from reading C++ file 'TLuaInterpreter.h'
**
** Created: Tue Aug 23 23:12:54 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TLuaInterpreter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TLuaInterpreter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TLuaInterpreter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x05,
      56,   53,   16,   16, 0x05,
      98,   17,   16,   16, 0x05,
     133,   17,   16,   16, 0x05,
     164,   17,   16,   16, 0x05,
     196,   16,   16,   16, 0x05,
     218,   17,   16,   16, 0x05,
     249,   53,   16,   16, 0x05,
     279,   53,   16,   16, 0x05,
     312,   17,   16,   16, 0x05,
     343,  339,   16,   16, 0x05,
     377,  339,   16,   16, 0x05,
     411,  339,   16,   16, 0x05,
     455,   17,   16,   16, 0x05,
     485,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     526,  520,   16,   16, 0x0a,
     556,   17,   16,   16, 0x0a,
     588,   53,   16,   16, 0x0a,
     628,   17,   16,   16, 0x0a,
     661,   17,   16,   16, 0x0a,
     690,   17,   16,   16, 0x0a,
     720,   17,   16,   16, 0x0a,
     745,   17,   16,   16, 0x0a,
     774,   17,   16,   16, 0x0a,
     836,  802,   16,   16, 0x0a,
     878,   16,   16,   16, 0x0a,
     890,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TLuaInterpreter[] = {
    "TLuaInterpreter\0\0,\0signalOpenUserWindow(int,QString)\0"
    ",,\0signalEchoUserWindow(int,QString,QString)\0"
    "signalClearUserWindow(int,QString)\0"
    "signalEnableTimer(int,QString)\0"
    "signalDisableTimer(int,QString)\0"
    "signalNewJob(QString)\0"
    "signalEchoMessage(int,QString)\0"
    "signalSelect(int,QString,int)\0"
    "signalSelectSection(int,int,int)\0"
    "signalReplace(int,QString)\0,,,\0"
    "signalSetFgColor(int,int,int,int)\0"
    "signalSetBgColor(int,int,int,int)\0"
    "signalTempTimer(int,double,QString,QString)\0"
    "signalNewCommand(int,QString)\0"
    "signalNewLuaCodeToExecute(QString)\0"
    "reply\0replyFinished(QNetworkReply*)\0"
    "slotOpenUserWindow(int,QString)\0"
    "slotEchoUserWindow(int,QString,QString)\0"
    "slotClearUserWindow(int,QString)\0"
    "slotEnableTimer(int,QString)\0"
    "slotDisableTimer(int,QString)\0"
    "slotReplace(int,QString)\0"
    "slotEchoMessage(int,QString)\0"
    "slotNewCommand(int,QString)\0"
    "hostID,timeout,function,timerName\0"
    "slotTempTimer(int,double,QString,QString)\0"
    "slotPurge()\0slotDeleteSender()\0"
};

const QMetaObject TLuaInterpreter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TLuaInterpreter,
      qt_meta_data_TLuaInterpreter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TLuaInterpreter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TLuaInterpreter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TLuaInterpreter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TLuaInterpreter))
        return static_cast<void*>(const_cast< TLuaInterpreter*>(this));
    return QThread::qt_metacast(_clname);
}

int TLuaInterpreter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalOpenUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: signalEchoUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: signalClearUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: signalEnableTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: signalDisableTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: signalNewJob((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: signalEchoMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: signalSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: signalSelectSection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: signalReplace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: signalSetFgColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: signalSetBgColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 12: signalTempTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 13: signalNewCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: signalNewLuaCodeToExecute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 16: slotOpenUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: slotEchoUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 18: slotClearUserWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: slotEnableTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: slotDisableTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: slotReplace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: slotEchoMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: slotNewCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: slotTempTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 25: slotPurge(); break;
        case 26: slotDeleteSender(); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void TLuaInterpreter::signalOpenUserWindow(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TLuaInterpreter::signalEchoUserWindow(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TLuaInterpreter::signalClearUserWindow(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TLuaInterpreter::signalEnableTimer(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TLuaInterpreter::signalDisableTimer(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TLuaInterpreter::signalNewJob(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TLuaInterpreter::signalEchoMessage(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TLuaInterpreter::signalSelect(int _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TLuaInterpreter::signalSelectSection(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TLuaInterpreter::signalReplace(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TLuaInterpreter::signalSetFgColor(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TLuaInterpreter::signalSetBgColor(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TLuaInterpreter::signalTempTimer(int _t1, double _t2, QString _t3, QString _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TLuaInterpreter::signalNewCommand(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TLuaInterpreter::signalNewLuaCodeToExecute(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
