/****************************************************************************
** Meta object code from reading C++ file 'dlgComposer.h'
**
** Created: Mon Aug 15 15:07:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgComposer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgComposer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgComposer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      20,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgComposer[] = {
    "dlgComposer\0\0save()\0cancel()\0"
};

const QMetaObject dlgComposer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dlgComposer,
      qt_meta_data_dlgComposer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgComposer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgComposer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgComposer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgComposer))
        return static_cast<void*>(const_cast< dlgComposer*>(this));
    if (!strcmp(_clname, "Ui::composer"))
        return static_cast< Ui::composer*>(const_cast< dlgComposer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dlgComposer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: save(); break;
        case 1: cancel(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
