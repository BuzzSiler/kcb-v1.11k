/****************************************************************************
** Meta object code from reading C++ file 'dlgsmtp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgsmtp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgsmtp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDlgSMTP_t {
    QByteArrayData data[17];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDlgSMTP_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDlgSMTP_t qt_meta_stringdata_CDlgSMTP = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 22),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 9),
QT_MOC_LITERAL(4, 43, 21),
QT_MOC_LITERAL(5, 65, 21),
QT_MOC_LITERAL(6, 87, 24),
QT_MOC_LITERAL(7, 112, 22),
QT_MOC_LITERAL(8, 135, 22),
QT_MOC_LITERAL(9, 158, 22),
QT_MOC_LITERAL(10, 181, 13),
QT_MOC_LITERAL(11, 195, 17),
QT_MOC_LITERAL(12, 213, 9),
QT_MOC_LITERAL(13, 223, 13),
QT_MOC_LITERAL(14, 237, 9),
QT_MOC_LITERAL(15, 247, 16),
QT_MOC_LITERAL(16, 264, 15)
    },
    "CDlgSMTP\0__onSMTPDialogComplete\0\0"
    "CDlgSMTP*\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0on_lblSMTPServer_clicked\0"
    "on_lblSMTPPort_clicked\0on_lblUsername_clicked\0"
    "on_lblPassword_clicked\0OnTextEntered\0"
    "CDlgFullKeyboard*\0pkeyboard\0CCurrentEdit*\0"
    "pCurrEdit\0OnCancelKeyboard\0OnCloseKeyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDlgSMTP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    2,   73,    2, 0x08 /* Private */,
      15,    2,   78,    2, 0x08 /* Private */,
      16,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void CDlgSMTP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDlgSMTP *_t = static_cast<CDlgSMTP *>(_o);
        switch (_id) {
        case 0: _t->__onSMTPDialogComplete((*reinterpret_cast< CDlgSMTP*(*)>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_lblSMTPServer_clicked(); break;
        case 4: _t->on_lblSMTPPort_clicked(); break;
        case 5: _t->on_lblUsername_clicked(); break;
        case 6: _t->on_lblPassword_clicked(); break;
        case 7: _t->OnTextEntered((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1])),(*reinterpret_cast< CCurrentEdit*(*)>(_a[2]))); break;
        case 8: _t->OnCancelKeyboard((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1])),(*reinterpret_cast< CCurrentEdit*(*)>(_a[2]))); break;
        case 9: _t->OnCloseKeyboard((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgSMTP* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CCurrentEdit* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgFullKeyboard* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CCurrentEdit* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgFullKeyboard* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgFullKeyboard* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDlgSMTP::*_t)(CDlgSMTP * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDlgSMTP::__onSMTPDialogComplete)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CDlgSMTP::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgSMTP.data,
      qt_meta_data_CDlgSMTP,  qt_static_metacall, 0, 0}
};


const QMetaObject *CDlgSMTP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDlgSMTP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgSMTP.stringdata))
        return static_cast<void*>(const_cast< CDlgSMTP*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgSMTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CDlgSMTP::__onSMTPDialogComplete(CDlgSMTP * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
