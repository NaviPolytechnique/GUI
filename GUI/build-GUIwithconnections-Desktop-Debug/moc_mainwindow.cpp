/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUIwithconnections/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 7),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 3),
QT_MOC_LITERAL(4, 24, 9),
QT_MOC_LITERAL(5, 34, 7),
QT_MOC_LITERAL(6, 42, 9),
QT_MOC_LITERAL(7, 52, 9),
QT_MOC_LITERAL(8, 62, 7),
QT_MOC_LITERAL(9, 70, 4),
QT_MOC_LITERAL(10, 75, 13),
QT_MOC_LITERAL(11, 89, 12),
QT_MOC_LITERAL(12, 102, 3),
QT_MOC_LITERAL(13, 106, 5),
QT_MOC_LITERAL(14, 112, 4),
QT_MOC_LITERAL(15, 117, 11),
QT_MOC_LITERAL(16, 129, 8),
QT_MOC_LITERAL(17, 138, 15)
    },
    "MainWindow\0LigneLu\0\0Str\0SystemMsg\0"
    "message\0Exception\0HomePoint\0TakeOff\0"
    "Land\0EmergencyStop\0CalibrateIMU\0IMU\0"
    "Pilot\0Kill\0sendztarget\0sendRPYT\0"
    "sendtextcommand\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       4,    1,   87,    2, 0x06,
       6,    1,   90,    2, 0x06,
       7,    1,   93,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    0,   96,    2, 0x08,
       9,    0,   97,    2, 0x08,
      10,    0,   98,    2, 0x08,
      11,    0,   99,    2, 0x08,
      12,    0,  100,    2, 0x08,
      13,    0,  101,    2, 0x08,
      14,    0,  102,    2, 0x08,
      15,    1,  103,    2, 0x08,
      16,    1,  106,    2, 0x08,
      17,    1,  109,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->LigneLu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SystemMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Exception((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->HomePoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->TakeOff(); break;
        case 5: _t->Land(); break;
        case 6: _t->EmergencyStop(); break;
        case 7: _t->CalibrateIMU(); break;
        case 8: _t->IMU(); break;
        case 9: _t->Pilot(); break;
        case 10: _t->Kill(); break;
        case 11: _t->sendztarget((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->sendRPYT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->sendtextcommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::LigneLu)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::SystemMsg)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Exception)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::HomePoint)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::LigneLu(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::SystemMsg(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::Exception(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::HomePoint(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
