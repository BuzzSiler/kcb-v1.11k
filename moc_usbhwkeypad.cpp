/****************************************************************************
** Meta object code from reading C++ file 'usbhwkeypad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "usbhwkeypad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbhwkeypad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CUSBHWKeypad_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CUSBHWKeypad_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CUSBHWKeypad_t qt_meta_stringdata_CUSBHWKeypad = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 24),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 9)
    },
    "CUSBHWKeypad\0__signalHWKeypadKeypress\0"
    "\0cKeyValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUSBHWKeypad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Char,    3,

       0        // eod
};

void CUSBHWKeypad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CUSBHWKeypad *_t = static_cast<CUSBHWKeypad *>(_o);
        switch (_id) {
        case 0: _t->__signalHWKeypadKeypress((*reinterpret_cast< char(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CUSBHWKeypad::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUSBHWKeypad::__signalHWKeypadKeypress)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CUSBHWKeypad::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CUSBHWKeypad.data,
      qt_meta_data_CUSBHWKeypad,  qt_static_metacall, 0, 0}
};


const QMetaObject *CUSBHWKeypad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUSBHWKeypad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CUSBHWKeypad.stringdata))
        return static_cast<void*>(const_cast< CUSBHWKeypad*>(this));
    return QObject::qt_metacast(_clname);
}

int CUSBHWKeypad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CUSBHWKeypad::__signalHWKeypadKeypress(char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
