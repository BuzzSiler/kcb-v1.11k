/****************************************************************************
** Meta object code from reading C++ file 'dlgfingerprint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dlgfingerprint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgfingerprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDlgFingerprint_t {
    QByteArrayData data[10];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDlgFingerprint_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDlgFingerprint_t qt_meta_stringdata_CDlgFingerprint = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 33),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 33),
QT_MOC_LITERAL(4, 85, 7),
QT_MOC_LITERAL(5, 93, 5),
QT_MOC_LITERAL(6, 99, 26),
QT_MOC_LITERAL(7, 126, 22),
QT_MOC_LITERAL(8, 149, 31),
QT_MOC_LITERAL(9, 181, 7)
    },
    "CDlgFingerprint\0__onEnrollFingerprintDialogCancel\0"
    "\0__onUpdateEnrollFingerprintDialog\0"
    "current\0total\0on_buttonBoxCancel_clicked\0"
    "on_buttonBoxOk_clicked\0"
    "OnUpdateEnrollFingerprintDialog\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDlgFingerprint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    3,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    9,

       0        // eod
};

void CDlgFingerprint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDlgFingerprint *_t = static_cast<CDlgFingerprint *>(_o);
        switch (_id) {
        case 0: _t->__onEnrollFingerprintDialogCancel(); break;
        case 1: _t->__onUpdateEnrollFingerprintDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_buttonBoxCancel_clicked(); break;
        case 3: _t->on_buttonBoxOk_clicked(); break;
        case 4: _t->OnUpdateEnrollFingerprintDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDlgFingerprint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDlgFingerprint::__onEnrollFingerprintDialogCancel)) {
                *result = 0;
            }
        }
        {
            typedef void (CDlgFingerprint::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDlgFingerprint::__onUpdateEnrollFingerprintDialog)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CDlgFingerprint::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDlgFingerprint.data,
      qt_meta_data_CDlgFingerprint,  qt_static_metacall, 0, 0}
};


const QMetaObject *CDlgFingerprint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDlgFingerprint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDlgFingerprint.stringdata))
        return static_cast<void*>(const_cast< CDlgFingerprint*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDlgFingerprint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CDlgFingerprint::__onEnrollFingerprintDialogCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CDlgFingerprint::__onUpdateEnrollFingerprintDialog(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
