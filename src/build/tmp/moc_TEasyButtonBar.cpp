/****************************************************************************
** Meta object code from reading C++ file 'TEasyButtonBar.h'
**
** Created: Tue Aug 16 19:36:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TEasyButtonBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TEasyButtonBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TEasyButtonBar[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TEasyButtonBar[] = {
    "TEasyButtonBar\0\0slot_pressed()\0"
};

const QMetaObject TEasyButtonBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TEasyButtonBar,
      qt_meta_data_TEasyButtonBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TEasyButtonBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TEasyButtonBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TEasyButtonBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TEasyButtonBar))
        return static_cast<void*>(const_cast< TEasyButtonBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int TEasyButtonBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_pressed(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
