/****************************************************************************
** Meta object code from reading C++ file 'dlgProfilePreferences.h'
**
** Created: Sun Aug 21 15:54:03 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgProfilePreferences.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgProfilePreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgProfilePreferences[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      37,   22,   22,   22, 0x0a,
      53,   22,   22,   22, 0x0a,
      74,   22,   22,   22, 0x0a,
      88,   22,   22,   22, 0x0a,
     107,   22,   22,   22, 0x0a,
     122,   22,   22,   22, 0x0a,
     142,   22,   22,   22, 0x0a,
     158,   22,   22,   22, 0x0a,
     179,   22,   22,   22, 0x0a,
     196,   22,   22,   22, 0x0a,
     218,   22,   22,   22, 0x0a,
     233,   22,   22,   22, 0x0a,
     253,   22,   22,   22, 0x0a,
     271,   22,   22,   22, 0x0a,
     294,   22,   22,   22, 0x0a,
     310,   22,   22,   22, 0x0a,
     331,   22,   22,   22, 0x0a,
     348,   22,   22,   22, 0x0a,
     369,   22,   22,   22, 0x0a,
     382,   22,   22,   22, 0x0a,
     395,   22,   22,   22, 0x0a,
     419,   22,   22,   22, 0x0a,
     443,   22,   22,   22, 0x0a,
     463,   22,   22,   22, 0x0a,
     483,   22,   22,   22, 0x0a,
     500,   22,   22,   22, 0x0a,
     522,   22,   22,   22, 0x0a,
     537,   22,   22,   22, 0x0a,
     557,   22,   22,   22, 0x0a,
     573,   22,   22,   22, 0x0a,
     594,   22,   22,   22, 0x0a,
     611,   22,   22,   22, 0x0a,
     633,   22,   22,   22, 0x0a,
     651,   22,   22,   22, 0x0a,
     674,   22,   22,   22, 0x0a,
     690,   22,   22,   22, 0x0a,
     711,   22,   22,   22, 0x0a,
     730,   22,   22,   22, 0x0a,
     754,   22,   22,   22, 0x0a,
     771,   22,   22,   22, 0x0a,
     793,   22,   22,   22, 0x0a,
     807,   22,   22,   22, 0x0a,
     821,   22,   22,   22, 0x0a,
     835,   22,   22,   22, 0x0a,
     849,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dlgProfilePreferences[] = {
    "dlgProfilePreferences\0\0setFontSize()\0"
    "setColorBlack()\0setColorLightBlack()\0"
    "setColorRed()\0setColorLightRed()\0"
    "setColorBlue()\0setColorLightBlue()\0"
    "setColorGreen()\0setColorLightGreen()\0"
    "setColorYellow()\0setColorLightYellow()\0"
    "setColorCyan()\0setColorLightCyan()\0"
    "setColorMagenta()\0setColorLightMagenta()\0"
    "setColorWhite()\0setColorLightWhite()\0"
    "setDisplayFont()\0setCommandLineFont()\0"
    "setFgColor()\0setBgColor()\0"
    "setCommandLineBgColor()\0setCommandLineFgColor()\0"
    "setCommandFgColor()\0setCommandBgColor()\0"
    "setColorBlack2()\0setColorLightBlack2()\0"
    "setColorRed2()\0setColorLightRed2()\0"
    "setColorBlue2()\0setColorLightBlue2()\0"
    "setColorGreen2()\0setColorLightGreen2()\0"
    "setColorYellow2()\0setColorLightYellow2()\0"
    "setColorCyan2()\0setColorLightCyan2()\0"
    "setColorMagenta2()\0setColorLightMagenta2()\0"
    "setColorWhite2()\0setColorLightWhite2()\0"
    "setFgColor2()\0setBgColor2()\0resetColors()\0"
    "downloadMap()\0slot_save_and_exit()\0"
};

const QMetaObject dlgProfilePreferences::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dlgProfilePreferences,
      qt_meta_data_dlgProfilePreferences, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgProfilePreferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgProfilePreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgProfilePreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgProfilePreferences))
        return static_cast<void*>(const_cast< dlgProfilePreferences*>(this));
    if (!strcmp(_clname, "Ui::profile_preferences"))
        return static_cast< Ui::profile_preferences*>(const_cast< dlgProfilePreferences*>(this));
    return QDialog::qt_metacast(_clname);
}

int dlgProfilePreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setFontSize(); break;
        case 1: setColorBlack(); break;
        case 2: setColorLightBlack(); break;
        case 3: setColorRed(); break;
        case 4: setColorLightRed(); break;
        case 5: setColorBlue(); break;
        case 6: setColorLightBlue(); break;
        case 7: setColorGreen(); break;
        case 8: setColorLightGreen(); break;
        case 9: setColorYellow(); break;
        case 10: setColorLightYellow(); break;
        case 11: setColorCyan(); break;
        case 12: setColorLightCyan(); break;
        case 13: setColorMagenta(); break;
        case 14: setColorLightMagenta(); break;
        case 15: setColorWhite(); break;
        case 16: setColorLightWhite(); break;
        case 17: setDisplayFont(); break;
        case 18: setCommandLineFont(); break;
        case 19: setFgColor(); break;
        case 20: setBgColor(); break;
        case 21: setCommandLineBgColor(); break;
        case 22: setCommandLineFgColor(); break;
        case 23: setCommandFgColor(); break;
        case 24: setCommandBgColor(); break;
        case 25: setColorBlack2(); break;
        case 26: setColorLightBlack2(); break;
        case 27: setColorRed2(); break;
        case 28: setColorLightRed2(); break;
        case 29: setColorBlue2(); break;
        case 30: setColorLightBlue2(); break;
        case 31: setColorGreen2(); break;
        case 32: setColorLightGreen2(); break;
        case 33: setColorYellow2(); break;
        case 34: setColorLightYellow2(); break;
        case 35: setColorCyan2(); break;
        case 36: setColorLightCyan2(); break;
        case 37: setColorMagenta2(); break;
        case 38: setColorLightMagenta2(); break;
        case 39: setColorWhite2(); break;
        case 40: setColorLightWhite2(); break;
        case 41: setFgColor2(); break;
        case 42: setBgColor2(); break;
        case 43: resetColors(); break;
        case 44: downloadMap(); break;
        case 45: slot_save_and_exit(); break;
        default: ;
        }
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
