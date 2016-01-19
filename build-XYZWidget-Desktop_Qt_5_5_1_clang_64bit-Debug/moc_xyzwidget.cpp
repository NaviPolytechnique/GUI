/****************************************************************************
** Meta object code from reading C++ file 'xyzwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../XYZWidget/xyzwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xyzwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XyzWidget_t {
    QByteArrayData data[19];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XyzWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XyzWidget_t qt_meta_stringdata_XyzWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "XyzWidget"
QT_MOC_LITERAL(1, 10, 17), // "realtimeDataSlot1"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "X"
QT_MOC_LITERAL(4, 31, 1), // "Y"
QT_MOC_LITERAL(5, 33, 1), // "Z"
QT_MOC_LITERAL(6, 35, 17), // "realtimeDataSlot2"
QT_MOC_LITERAL(7, 53, 2), // "Vx"
QT_MOC_LITERAL(8, 56, 2), // "Vy"
QT_MOC_LITERAL(9, 59, 2), // "Vz"
QT_MOC_LITERAL(10, 62, 17), // "realtimeDataSlot3"
QT_MOC_LITERAL(11, 80, 2), // "ax"
QT_MOC_LITERAL(12, 83, 2), // "ay"
QT_MOC_LITERAL(13, 86, 2), // "az"
QT_MOC_LITERAL(14, 89, 17), // "realtimeDataSlot4"
QT_MOC_LITERAL(15, 107, 1), // "R"
QT_MOC_LITERAL(16, 109, 1), // "P"
QT_MOC_LITERAL(17, 111, 13), // "readResponse4"
QT_MOC_LITERAL(18, 125, 15) // "readResponseXYZ"

    },
    "XyzWidget\0realtimeDataSlot1\0\0X\0Y\0Z\0"
    "realtimeDataSlot2\0Vx\0Vy\0Vz\0realtimeDataSlot3\0"
    "ax\0ay\0az\0realtimeDataSlot4\0R\0P\0"
    "readResponse4\0readResponseXYZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XyzWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x08 /* Private */,
       6,    3,   51,    2, 0x08 /* Private */,
      10,    3,   58,    2, 0x08 /* Private */,
      14,    3,   65,    2, 0x08 /* Private */,
      17,    0,   72,    2, 0x08 /* Private */,
      18,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   15,   16,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XyzWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XyzWidget *_t = static_cast<XyzWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->realtimeDataSlot1((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->realtimeDataSlot2((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->realtimeDataSlot3((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->realtimeDataSlot4((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->readResponse4(); break;
        case 5: _t->readResponseXYZ(); break;
        default: ;
        }
    }
}

const QMetaObject XyzWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XyzWidget.data,
      qt_meta_data_XyzWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XyzWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XyzWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XyzWidget.stringdata0))
        return static_cast<void*>(const_cast< XyzWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int XyzWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
