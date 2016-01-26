/****************************************************************************
** Meta object code from reading C++ file 'buttons.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUIwithconnections/WidgetsUsed/Buttons/buttons.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Buttons_t {
    QByteArrayData data[17];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Buttons_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Buttons_t qt_meta_stringdata_Buttons = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 7),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 4),
QT_MOC_LITERAL(4, 22, 13),
QT_MOC_LITERAL(5, 36, 12),
QT_MOC_LITERAL(6, 49, 3),
QT_MOC_LITERAL(7, 53, 5),
QT_MOC_LITERAL(8, 59, 4),
QT_MOC_LITERAL(9, 64, 18),
QT_MOC_LITERAL(10, 83, 15),
QT_MOC_LITERAL(11, 99, 16),
QT_MOC_LITERAL(12, 116, 16),
QT_MOC_LITERAL(13, 133, 14),
QT_MOC_LITERAL(14, 148, 16),
QT_MOC_LITERAL(15, 165, 19),
QT_MOC_LITERAL(16, 185, 15)
    },
    "Buttons\0TakeOff\0\0Land\0EmergencyStop\0"
    "CalibrateIMU\0IMU\0Pilot\0Kill\0"
    "on_Takeoff_clicked\0on_Land_clicked\0"
    "on_EmStp_clicked\0on_CbIMU_clicked\0"
    "on_IMU_clicked\0on_Pilot_clicked\0"
    "on_StartAll_clicked\0on_Kill_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Buttons[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06,
       3,    0,   90,    2, 0x06,
       4,    0,   91,    2, 0x06,
       5,    0,   92,    2, 0x06,
       6,    0,   93,    2, 0x06,
       7,    0,   94,    2, 0x06,
       8,    0,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   96,    2, 0x08,
      10,    0,   97,    2, 0x08,
      11,    0,   98,    2, 0x08,
      12,    0,   99,    2, 0x08,
      13,    0,  100,    2, 0x08,
      14,    0,  101,    2, 0x08,
      15,    0,  102,    2, 0x08,
      16,    0,  103,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Buttons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buttons *_t = static_cast<Buttons *>(_o);
        switch (_id) {
        case 0: _t->TakeOff(); break;
        case 1: _t->Land(); break;
        case 2: _t->EmergencyStop(); break;
        case 3: _t->CalibrateIMU(); break;
        case 4: _t->IMU(); break;
        case 5: _t->Pilot(); break;
        case 6: _t->Kill(); break;
        case 7: _t->on_Takeoff_clicked(); break;
        case 8: _t->on_Land_clicked(); break;
        case 9: _t->on_EmStp_clicked(); break;
        case 10: _t->on_CbIMU_clicked(); break;
        case 11: _t->on_IMU_clicked(); break;
        case 12: _t->on_Pilot_clicked(); break;
        case 13: _t->on_StartAll_clicked(); break;
        case 14: _t->on_Kill_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::TakeOff)) {
                *result = 0;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::Land)) {
                *result = 1;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::EmergencyStop)) {
                *result = 2;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::CalibrateIMU)) {
                *result = 3;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::IMU)) {
                *result = 4;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::Pilot)) {
                *result = 5;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buttons::Kill)) {
                *result = 6;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Buttons::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Buttons.data,
      qt_meta_data_Buttons,  qt_static_metacall, 0, 0}
};


const QMetaObject *Buttons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Buttons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Buttons.stringdata))
        return static_cast<void*>(const_cast< Buttons*>(this));
    return QDialog::qt_metacast(_clname);
}

int Buttons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Buttons::TakeOff()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Buttons::Land()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Buttons::EmergencyStop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Buttons::CalibrateIMU()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Buttons::IMU()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Buttons::Pilot()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Buttons::Kill()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
