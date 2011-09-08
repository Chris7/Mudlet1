/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created: Thu Sep 8 01:01:04 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x05,
      38,   10,    9,    9, 0x05,
      60,   10,    9,    9, 0x05,
      82,   10,    9,    9, 0x05,
     100,   10,    9,    9, 0x05,
     118,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,    9,    9,    9, 0x0a,
     147,    9,    9,    9, 0x0a,
     157,    9,    9,    9, 0x0a,
     169,    9,    9,    9, 0x0a,
     181,    9,    9,    9, 0x0a,
     194,    9,    9,    9, 0x0a,
     205,    9,    9,    9, 0x0a,
     218,    9,    9,    9, 0x0a,
     236,   10,    9,    9, 0x0a,
     254,   10,    9,    9, 0x0a,
     272,   10,    9,    9, 0x0a,
     290,   10,    9,    9, 0x0a,
     304,   10,    9,    9, 0x0a,
     318,   10,    9,    9, 0x0a,
     332,    9,    9,    9, 0x0a,
     346,    9,    9,    9, 0x0a,
     362,    9,    9,    9, 0x0a,
     373,    9,    9,    9, 0x0a,
     386,    9,    9,    9, 0x0a,
     400,    9,    9,    9, 0x0a,
     412,    9,    9,    9, 0x0a,
     429,    9,    9,    9, 0x0a,
     444,    9,    9,    9, 0x0a,
     458,    9,    9,    9, 0x0a,
     469,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLWidget[] = {
    "GLWidget\0\0angle\0xRotationChanged(int)\0"
    "yRotationChanged(int)\0zRotationChanged(int)\0"
    "xDistChanged(int)\0yDistChanged(int)\0"
    "zDistChanged(int)\0showInfo()\0shiftUp()\0"
    "shiftDown()\0shiftLeft()\0shiftRight()\0"
    "shiftZup()\0shiftZdown()\0showArea(QString)\0"
    "setXRotation(int)\0setYRotation(int)\0"
    "setZRotation(int)\0setXDist(int)\0"
    "setYDist(int)\0setZDist(int)\0setScale(int)\0"
    "goRoom(QString)\0fullView()\0singleView()\0"
    "increaseTop()\0reduceTop()\0increaseBottom()\0"
    "reduceBottom()\0defaultView()\0sideView()\0"
    "topView()\0"
};

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget,
      qt_meta_data_GLWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: xDistChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: yDistChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: zDistChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: showInfo(); break;
        case 7: shiftUp(); break;
        case 8: shiftDown(); break;
        case 9: shiftLeft(); break;
        case 10: shiftRight(); break;
        case 11: shiftZup(); break;
        case 12: shiftZdown(); break;
        case 13: showArea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: setXDist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: setYDist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: setZDist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: setScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: goRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: fullView(); break;
        case 23: singleView(); break;
        case 24: increaseTop(); break;
        case 25: reduceTop(); break;
        case 26: increaseBottom(); break;
        case 27: reduceBottom(); break;
        case 28: defaultView(); break;
        case 29: sideView(); break;
        case 30: topView(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::xRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLWidget::yRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::zRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLWidget::xDistChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLWidget::yDistChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLWidget::zDistChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
