/****************************************************************************
** Meta object code from reading C++ file 'TTextEdit.h'
**
** Created: Tue Aug 16 19:35:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TTextEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      35,   10,   10,   10, 0x0a,
      67,   10,   10,   10, 0x0a,
      92,   10,   10,   10, 0x0a,
     109,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TTextEdit[] = {
    "TTextEdit\0\0slot_toggleTimeStamps()\0"
    "slot_copySelectionToClipboard()\0"
    "slot_scrollBarMoved(int)\0slot_popupMenu()\0"
    "slot_copySelectionToClipboardHTML()\0"
};

const QMetaObject TTextEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TTextEdit,
      qt_meta_data_TTextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TTextEdit))
        return static_cast<void*>(const_cast< TTextEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int TTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slot_toggleTimeStamps(); break;
        case 1: slot_copySelectionToClipboard(); break;
        case 2: slot_scrollBarMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slot_popupMenu(); break;
        case 4: slot_copySelectionToClipboardHTML(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
