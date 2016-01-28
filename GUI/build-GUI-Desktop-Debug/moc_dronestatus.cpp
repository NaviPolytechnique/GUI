/****************************************************************************
** Meta object code from reading C++ file 'dronestatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI/dronestatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dronestatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DroneStatus_t {
    QByteArrayData data[10];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DroneStatus_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DroneStatus_t qt_meta_stringdata_DroneStatus = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 14),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 18),
QT_MOC_LITERAL(4, 47, 18),
QT_MOC_LITERAL(5, 66, 15),
QT_MOC_LITERAL(6, 82, 19),
QT_MOC_LITERAL(7, 102, 7),
QT_MOC_LITERAL(8, 110, 23),
QT_MOC_LITERAL(9, 134, 8)
    },
    "DroneStatus\0DroneStatusMAJ\0\0"
    "VecteurDroneStatus\0ParametresDroneMAJ\0"
    "ParametresDrone\0ModifierDroneStatus\0"
    "NewEtat\0ModifierParametresDrone\0"
    "NewParam\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DroneStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a,
       8,    1,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
       5, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void DroneStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DroneStatus *_t = static_cast<DroneStatus *>(_o);
        switch (_id) {
        case 0: _t->DroneStatusMAJ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ParametresDroneMAJ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->ModifierDroneStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ModifierParametresDrone((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DroneStatus::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DroneStatus::DroneStatusMAJ)) {
                *result = 0;
            }
        }
        {
            typedef void (DroneStatus::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DroneStatus::ParametresDroneMAJ)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DroneStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DroneStatus.data,
      qt_meta_data_DroneStatus,  qt_static_metacall, 0, 0}
};


const QMetaObject *DroneStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DroneStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DroneStatus.stringdata))
        return static_cast<void*>(const_cast< DroneStatus*>(this));
    return QObject::qt_metacast(_clname);
}

int DroneStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getVecteurDroneStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getParametresDrone(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setvaleurED(*reinterpret_cast< QString*>(_v)); break;
        case 1: setvaleurPD(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DroneStatus::DroneStatusMAJ(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DroneStatus::ParametresDroneMAJ(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
