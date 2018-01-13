/****************************************************************************
** Meta object code from reading C++ file 'dlgvnc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgvnc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgvnc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDlgVNC_t {
    QByteArrayData data[16];
    char stringdata[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDlgVNC_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDlgVNC_t qt_meta_stringdata_CDlgVNC = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 21),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 8),
QT_MOC_LITERAL(4, 40, 21),
QT_MOC_LITERAL(5, 62, 21),
QT_MOC_LITERAL(6, 84, 21),
QT_MOC_LITERAL(7, 106, 22),
QT_MOC_LITERAL(8, 129, 22),
QT_MOC_LITERAL(9, 152, 13),
QT_MOC_LITERAL(10, 166, 17),
QT_MOC_LITERAL(11, 184, 9),
QT_MOC_LITERAL(12, 194, 13),
QT_MOC_LITERAL(13, 208, 9),
QT_MOC_LITERAL(14, 218, 16),
QT_MOC_LITERAL(15, 235, 15)
    },
    "CDlgVNC\0__onVNCDialogComplete\0\0CDlgVNC*\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_lblVNCPort_clicked\0on_lblPassword_clicked\0"
    "on_btnResetVNC_clicked\0OnTextEntered\0"
    "CDlgFullKeyboard*\0pkeyboard\0CCurrentEdit*\0"
    "pCurrEdit\0OnCancelKeyboard\0OnCloseKeyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDlgVNC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    2,   67,    2, 0x08 /* Private */,
      14,    2,   72,    2, 0x08 /* Private */,
      15,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void CDlgVNC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDlgVNC *_t = static_cast<CDlgVNC *>(_o);
        switch (_id) {
        case 0: _t->__onVNCDialogComplete((*reinterpret_cast< CDlgVNC*(*)>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_lblVNCPort_clicked(); break;
        case 4: _t->on_lblPassword_clicked(); break;
        case 5: _t->on_btnResetVNC_clicked(); break;
        case 6: _t->OnTextEntered((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1])),(*reinterpret_cast< CCurrentEdit*(*)>(_a[2]))); break;
        case 7: _t->OnCancelKeyboard((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1])),(*reinterpret_cast< CCurrentEdit*(*)>(_a[2]))); break;
        case 8: _t->OnCloseKeyboard((*reinterpret_cast< CDlgFullKeyboard*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgVNC* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CCurrentEdit* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgFullKeyboard* >(); break;
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CDlgFullKeyboard* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDlgVNC::*_t)(CDlgVNC * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDlgVNC::__onVNCDialogComplete)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CDlgVNC::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgVNC.data,
      qt_meta_data_CDlgVNC,  qt_static_metacall, 0, 0}
};


const QMetaObject *CDlgVNC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDlgVNC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgVNC.stringdata))
        return static_cast<void*>(const_cast< CDlgVNC*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgVNC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CDlgVNC::__onVNCDialogComplete(CDlgVNC * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
