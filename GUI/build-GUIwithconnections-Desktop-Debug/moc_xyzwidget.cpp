/****************************************************************************
** Meta object code from reading C++ file 'xyzwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUIwithconnections/WidgetsUsed/XYZWidget/xyzwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xyzwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XyzWidget_t {
    QByteArrayData data[15];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_XyzWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_XyzWidget_t qt_meta_stringdata_XyzWidget = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 17),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 1),
QT_MOC_LITERAL(4, 31, 1),
QT_MOC_LITERAL(5, 33, 1),
QT_MOC_LITERAL(6, 35, 17),
QT_MOC_LITERAL(7, 53, 2),
QT_MOC_LITERAL(8, 56, 2),
QT_MOC_LITERAL(9, 59, 2),
QT_MOC_LITERAL(10, 62, 17),
QT_MOC_LITERAL(11, 80, 1),
QT_MOC_LITERAL(12, 82, 1),
QT_MOC_LITERAL(13, 84, 12),
QT_MOC_LITERAL(14, 97, 21)
    },
    "XyzWidget\0realtimeDataSlot1\0\0X\0Y\0Z\0"
    "realtimeDataSlot2\0Vx\0Vy\0Vz\0realtimeDataSlot4\0"
    "R\0P\0MAJXyzWidget\0on_pushButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XyzWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x08,
       6,    3,   46,    2, 0x08,
      10,    3,   53,    2, 0x08,
      13,    1,   60,    2, 0x08,
      14,    0,   63,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void XyzWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XyzWidget *_t = static_cast<XyzWidget *>(_o);
        switch (_id) {
        case 0: _t->realtimeDataSlot1((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->realtimeDataSlot2((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->realtimeDataSlot4((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->MAJXyzWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject XyzWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XyzWidget.data,
      qt_meta_data_XyzWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *XyzWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XyzWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XyzWidget.stringdata))
        return static_cast<void*>(const_cast< XyzWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int XyzWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
