/****************************************************************************
** Meta object code from reading C++ file 'dlgColorTrigger.h'
**
** Created: Tue Aug 16 19:36:22 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlgColorTrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgColorTrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgColorTrigger[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      87,   16,   16,   16, 0x0a,
     102,   16,   16,   16, 0x0a,
     122,   16,   16,   16, 0x0a,
     138,   16,   16,   16, 0x0a,
     159,   16,   16,   16, 0x0a,
     176,   16,   16,   16, 0x0a,
     198,   16,   16,   16, 0x0a,
     213,   16,   16,   16, 0x0a,
     233,   16,   16,   16, 0x0a,
     251,   16,   16,   16, 0x0a,
     274,   16,   16,   16, 0x0a,
     290,   16,   16,   16, 0x0a,
     311,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgColorTrigger[] = {
    "dlgColorTrigger\0\0setColorBlack()\0"
    "setColorLightBlack()\0setColorRed()\0"
    "setColorLightRed()\0setColorBlue()\0"
    "setColorLightBlue()\0setColorGreen()\0"
    "setColorLightGreen()\0setColorYellow()\0"
    "setColorLightYellow()\0setColorCyan()\0"
    "setColorLightCyan()\0setColorMagenta()\0"
    "setColorLightMagenta()\0setColorWhite()\0"
    "setColorLightWhite()\0slot_save_and_exit()\0"
};

const QMetaObject dlgColorTrigger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgColorTrigger,
      qt_meta_data_dlgColorTrigger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgColorTrigger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgColorTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgColorTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgColorTrigger))
        return static_cast<void*>(const_cast< dlgColorTrigger*>(this));
    if (!strcmp(_clname, "Ui::color_trigger_dlg"))
        return static_cast< Ui::color_trigger_dlg*>(const_cast< dlgColorTrigger*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgColorTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setColorBlack(); break;
        case 1: setColorLightBlack(); break;
        case 2: setColorRed(); break;
        case 3: setColorLightRed(); break;
        case 4: setColorBlue(); break;
        case 5: setColorLightBlue(); break;
        case 6: setColorGreen(); break;
        case 7: setColorLightGreen(); break;
        case 8: setColorYellow(); break;
        case 9: setColorLightYellow(); break;
        case 10: setColorCyan(); break;
        case 11: setColorLightCyan(); break;
        case 12: setColorMagenta(); break;
        case 13: setColorLightMagenta(); break;
        case 14: setColorWhite(); break;
        case 15: setColorLightWhite(); break;
        case 16: slot_save_and_exit(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
