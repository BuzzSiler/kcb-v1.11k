/****************************************************************************
** Meta object code from reading C++ file 'reportcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CReportController_t {
    QByteArrayData data[29];
    char stringdata[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CReportController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CReportController_t qt_meta_stringdata_CReportController = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 16),
QT_MOC_LITERAL(4, 50, 23),
QT_MOC_LITERAL(5, 74, 32),
QT_MOC_LITERAL(6, 107, 7),
QT_MOC_LITERAL(7, 115, 5),
QT_MOC_LITERAL(8, 121, 25),
QT_MOC_LITERAL(9, 147, 16),
QT_MOC_LITERAL(10, 164, 15),
QT_MOC_LITERAL(11, 180, 11),
QT_MOC_LITERAL(12, 192, 10),
QT_MOC_LITERAL(13, 203, 8),
QT_MOC_LITERAL(14, 212, 8),
QT_MOC_LITERAL(15, 221, 12),
QT_MOC_LITERAL(16, 234, 12),
QT_MOC_LITERAL(17, 247, 4),
QT_MOC_LITERAL(18, 252, 2),
QT_MOC_LITERAL(19, 255, 7),
QT_MOC_LITERAL(20, 263, 4),
QT_MOC_LITERAL(21, 268, 12),
QT_MOC_LITERAL(22, 281, 11),
QT_MOC_LITERAL(23, 293, 6),
QT_MOC_LITERAL(24, 300, 7),
QT_MOC_LITERAL(25, 308, 27),
QT_MOC_LITERAL(26, 336, 23),
QT_MOC_LITERAL(27, 360, 10),
QT_MOC_LITERAL(28, 371, 9)
    },
    "CReportController\0__EmailFailed\0\0"
    "__EmailSucceeded\0__OnRequestCurrentAdmin\0"
    "__RequestCodeHistoryForDateRange\0"
    "dtStart\0dtEnd\0OnCodeHistoryForDateRange\0"
    "CLockHistorySet*\0pLockHistorySet\0"
    "OnSendEmail\0SMTPServer\0SMTPPort\0"
    "SMTPType\0SMTPUsername\0SMTPPassword\0"
    "from\0to\0subject\0body\0const QFile*\0"
    "pfileAttach\0OnStop\0OnStart\0"
    "OnCheckIfReportingTimeEvent\0"
    "OnRequestedCurrentAdmin\0CAdminRec*\0"
    "adminInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CReportController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   72,    2, 0x0a /* Public */,
      11,   10,   79,    2, 0x0a /* Public */,
      23,    0,  100,    2, 0x0a /* Public */,
      24,    0,  101,    2, 0x0a /* Public */,
      25,    0,  102,    2, 0x08 /* Private */,
      26,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime, 0x80000000 | 9,    6,    7,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 21,   12,   13,   14,   15,   16,   17,   18,   19,   20,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,

       0        // eod
};

void CReportController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CReportController *_t = static_cast<CReportController *>(_o);
        switch (_id) {
        case 0: _t->__EmailFailed(); break;
        case 1: _t->__EmailSucceeded(); break;
        case 2: _t->__OnRequestCurrentAdmin(); break;
        case 3: _t->__RequestCodeHistoryForDateRange((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 4: _t->OnCodeHistoryForDateRange((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< CLockHistorySet*(*)>(_a[3]))); break;
        case 5: _t->OnSendEmail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QFile*(*)>(_a[10]))); break;
        case 6: _t->OnStop(); break;
        case 7: _t->OnStart(); break;
        case 8: _t->OnCheckIfReportingTimeEvent(); break;
        case 9: _t->OnRequestedCurrentAdmin((*reinterpret_cast< CAdminRec*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CLockHistorySet* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CAdminRec* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CReportController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CReportController::__EmailFailed)) {
                *result = 0;
            }
        }
        {
            typedef void (CReportController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CReportController::__EmailSucceeded)) {
                *result = 1;
            }
        }
        {
            typedef void (CReportController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CReportController::__OnRequestCurrentAdmin)) {
                *result = 2;
            }
        }
        {
            typedef void (CReportController::*_t)(QDateTime , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CReportController::__RequestCodeHistoryForDateRange)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject CReportController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CReportController.data,
      qt_meta_data_CReportController,  qt_static_metacall, 0, 0}
};


const QMetaObject *CReportController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CReportController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CReportController.stringdata))
        return static_cast<void*>(const_cast< CReportController*>(this));
    return QObject::qt_metacast(_clname);
}

int CReportController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CReportController::__EmailFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CReportController::__EmailSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CReportController::__OnRequestCurrentAdmin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CReportController::__RequestCodeHistoryForDateRange(QDateTime _t1, QDateTime _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
