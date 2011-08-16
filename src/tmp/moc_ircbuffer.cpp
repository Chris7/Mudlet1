/****************************************************************************
** Meta object code from reading C++ file 'ircbuffer.h'
**
** Created: Mon Aug 15 15:03:36 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../irc/include/ircbuffer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ircbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Irc__Buffer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       3,  139, // properties
       2,  148, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      52,   47,   12,   12, 0x05,
      81,   74,   12,   12, 0x05,
     112,   97,   12,   12, 0x05,
     136,   97,   12,   12, 0x05,
     170,  158,   12,   12, 0x05,
     216,  199,   12,   12, 0x05,
     266,  253,   12,   12, 0x05,
     320,  296,   12,   12, 0x05,
     373,  353,   12,   12, 0x05,
     426,  405,   12,   12, 0x05,
     485,   97,   12,   12, 0x25,
     538,  518,   12,   12, 0x05,
     610,  596,   12,   12, 0x25,
     663,  642,   12,   12, 0x05,
     741,  726,   12,   12, 0x25,
     797,  778,   12,   12, 0x05,
     871,  858,   12,   12, 0x25,
     926,  906,   12,   12, 0x05,
    1002,  988,   12,   12, 0x25,
    1057, 1038,   12,   12, 0x05,
    1120, 1106,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
    1177, 1169, 1164,   12, 0x0a,
    1201, 1194, 1164,   12, 0x0a,
    1224, 1217, 1164,   12, 0x0a,

 // properties: name, type, flags
      13, 1244, 0x0a095001,
    1252, 1244, 0x0a095001,
    1270, 1258, 0x0b095001,

 // enums: name, flags, count, data
    1276, 0x0,    3,  156,
    1288, 0x1,    3,  162,

 // enum data: key, value
    1301, uint(Irc::Buffer::NoFlags),
    1309, uint(Irc::Buffer::IdentifiedFlag),
    1324, uint(Irc::Buffer::EchoFlag),
    1301, uint(Irc::Buffer::NoFlags),
    1309, uint(Irc::Buffer::IdentifiedFlag),
    1324, uint(Irc::Buffer::EchoFlag),

       0        // eod
};

static const char qt_meta_stringdata_Irc__Buffer[] = {
    "Irc::Buffer\0\0receiver\0receiverChanged(QString)\0"
    "motd\0motdReceived(QString)\0origin\0"
    "joined(QString)\0origin,message\0"
    "parted(QString,QString)\0quit(QString,QString)\0"
    "origin,nick\0nickChanged(QString,QString)\0"
    "origin,mode,args\0modeChanged(QString,QString,QString)\0"
    "origin,topic\0topicChanged(QString,QString)\0"
    "origin,receiver,channel\0"
    "invited(QString,QString,QString)\0"
    "origin,nick,message\0kicked(QString,QString,QString)\0"
    "origin,message,flags\0"
    "messageReceived(QString,QString,Irc::Buffer::MessageFlags)\0"
    "messageReceived(QString,QString)\0"
    "origin,notice,flags\0"
    "noticeReceived(QString,QString,Irc::Buffer::MessageFlags)\0"
    "origin,notice\0noticeReceived(QString,QString)\0"
    "origin,request,flags\0"
    "ctcpRequestReceived(QString,QString,Irc::Buffer::MessageFlags)\0"
    "origin,request\0ctcpRequestReceived(QString,QString)\0"
    "origin,reply,flags\0"
    "ctcpReplyReceived(QString,QString,Irc::Buffer::MessageFlags)\0"
    "origin,reply\0ctcpReplyReceived(QString,QString)\0"
    "origin,action,flags\0"
    "ctcpActionReceived(QString,QString,Irc::Buffer::MessageFlags)\0"
    "origin,action\0ctcpActionReceived(QString,QString)\0"
    "origin,code,params\0"
    "numericMessageReceived(QString,uint,QStringList)\0"
    "origin,params\0unknownMessageReceived(QString,QStringList)\0"
    "bool\0message\0message(QString)\0notice\0"
    "notice(QString)\0action\0ctcpAction(QString)\0"
    "QString\0topic\0QStringList\0names\0"
    "MessageFlag\0MessageFlags\0NoFlags\0"
    "IdentifiedFlag\0EchoFlag\0"
};

const QMetaObject Irc::Buffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Irc__Buffer,
      qt_meta_data_Irc__Buffer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Irc::Buffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Irc::Buffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Irc::Buffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Irc__Buffer))
        return static_cast<void*>(const_cast< Buffer*>(this));
    return QObject::qt_metacast(_clname);
}

int Irc::Buffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receiverChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: motdReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: joined((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: parted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: quit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: nickChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: modeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: topicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: invited((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: kicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 11: messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: noticeReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 13: noticeReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: ctcpRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 15: ctcpRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: ctcpReplyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 17: ctcpReplyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: ctcpActionReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 19: ctcpActionReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: numericMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 21: unknownMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 22: { bool _r = message((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = notice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = ctcpAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = receiver(); break;
        case 1: *reinterpret_cast< QString*>(_v) = topic(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = names(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Irc::Buffer::receiverChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Irc::Buffer::motdReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Irc::Buffer::joined(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Irc::Buffer::parted(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Irc::Buffer::quit(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Irc::Buffer::nickChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Irc::Buffer::modeChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Irc::Buffer::topicChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Irc::Buffer::invited(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Irc::Buffer::kicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Irc::Buffer::messageReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 12
void Irc::Buffer::noticeReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 14
void Irc::Buffer::ctcpRequestReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 16
void Irc::Buffer::ctcpReplyReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 18
void Irc::Buffer::ctcpActionReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 20
void Irc::Buffer::numericMessageReceived(const QString & _t1, uint _t2, const QStringList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Irc::Buffer::unknownMessageReceived(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_END_MOC_NAMESPACE
