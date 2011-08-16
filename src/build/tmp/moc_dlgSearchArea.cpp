/****************************************************************************
** Meta object code from reading C++ file 'dlgSearchArea.h'
**
** Created: Tue Aug 16 19:35:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlgSearchArea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgSearchArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgSearchArea[] = {

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

static const char qt_meta_stringdata_dlgSearchArea[] = {
    "dlgSearchArea\0"
};

const QMetaObject dlgSearchArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgSearchArea,
      qt_meta_data_dlgSearchArea, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgSearchArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgSearchArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgSearchArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgSearchArea))
        return static_cast<void*>(const_cast< dlgSearchArea*>(this));
    if (!strcmp(_clname, "Ui::extended_search_area"))
        return static_cast< Ui::extended_search_area*>(const_cast< dlgSearchArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgSearchArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
