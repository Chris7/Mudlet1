/****************************************************************************
** Meta object code from reading C++ file 'dlgOptionsAreaTriggers.h'
**
** Created: Tue Aug 16 19:34:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlgOptionsAreaTriggers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgOptionsAreaTriggers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgOptionsAreaTriggers[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_dlgOptionsAreaTriggers[] = {
    "dlgOptionsAreaTriggers\0"
};

const QMetaObject dlgOptionsAreaTriggers::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgOptionsAreaTriggers,
      qt_meta_data_dlgOptionsAreaTriggers, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgOptionsAreaTriggers::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgOptionsAreaTriggers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgOptionsAreaTriggers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgOptionsAreaTriggers))
        return static_cast<void*>(const_cast< dlgOptionsAreaTriggers*>(this));
    if (!strcmp(_clname, "Ui::options_area_triggers"))
        return static_cast< Ui::options_area_triggers*>(const_cast< dlgOptionsAreaTriggers*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgOptionsAreaTriggers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
