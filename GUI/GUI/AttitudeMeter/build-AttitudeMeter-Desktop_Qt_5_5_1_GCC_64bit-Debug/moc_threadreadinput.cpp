/****************************************************************************
** Meta object code from reading C++ file 'threadreadinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Widgets/AttitudeMeter/AttitudeMeter/threadreadinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadreadinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReadInput_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadInput_t qt_meta_stringdata_ReadInput = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ReadInput"
QT_MOC_LITERAL(1, 10, 13), // "signalNewLine"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "signalReadInputEnded"
QT_MOC_LITERAL(4, 46, 5), // "start"
QT_MOC_LITERAL(5, 52, 8) // "sendline"

    },
    "ReadInput\0signalNewLine\0\0signalReadInputEnded\0"
    "start\0sendline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReadInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadInput *_t = static_cast<ReadInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalNewLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalReadInputEnded(); break;
        case 2: _t->start(); break;
        case 3: _t->sendline(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReadInput::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadInput::signalNewLine)) {
                *result = 0;
            }
        }
        {
            typedef void (ReadInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadInput::signalReadInputEnded)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ReadInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ReadInput.data,
      qt_meta_data_ReadInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadInput.stringdata0))
        return static_cast<void*>(const_cast< ReadInput*>(this));
    return QObject::qt_metacast(_clname);
}

int ReadInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ReadInput::signalNewLine(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReadInput::signalReadInputEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_ThreadReadInput_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadReadInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadReadInput_t qt_meta_stringdata_ThreadReadInput = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ThreadReadInput"
QT_MOC_LITERAL(1, 16, 10), // "TonNewLine"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "start"
QT_MOC_LITERAL(4, 34, 9), // "onNewLine"
QT_MOC_LITERAL(5, 44, 16) // "onReadInputEnded"

    },
    "ThreadReadInput\0TonNewLine\0\0start\0"
    "onNewLine\0onReadInputEnded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadReadInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x0a /* Public */,
       4,    1,   38,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ThreadReadInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadReadInput *_t = static_cast<ThreadReadInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TonNewLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        case 2: _t->onNewLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onReadInputEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadReadInput::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadReadInput::TonNewLine)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ThreadReadInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ThreadReadInput.data,
      qt_meta_data_ThreadReadInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ThreadReadInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadReadInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadReadInput.stringdata0))
        return static_cast<void*>(const_cast< ThreadReadInput*>(this));
    return QObject::qt_metacast(_clname);
}

int ThreadReadInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ThreadReadInput::TonNewLine(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
