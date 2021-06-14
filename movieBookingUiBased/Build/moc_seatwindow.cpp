/****************************************************************************
** Meta object code from reading C++ file 'seatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../seatwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeatWindow_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeatWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeatWindow_t qt_meta_stringdata_SeatWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SeatWindow"
QT_MOC_LITERAL(1, 11, 33), // "on_adminLoginpushButton_2_cli..."
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "seatBooked"
QT_MOC_LITERAL(4, 57, 3), // "row"
QT_MOC_LITERAL(5, 61, 6), // "column"
QT_MOC_LITERAL(6, 68, 17), // "seatAlreadyBooked"
QT_MOC_LITERAL(7, 86, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(8, 113, 10), // "textBoxSet"
QT_MOC_LITERAL(9, 124, 11), // "std::string"
QT_MOC_LITERAL(10, 136, 5), // "movie"
QT_MOC_LITERAL(11, 142, 6), // "timing"
QT_MOC_LITERAL(12, 149, 7) // "tickets"

    },
    "SeatWindow\0on_adminLoginpushButton_2_clicked\0"
    "\0seatBooked\0row\0column\0seatAlreadyBooked\0"
    "on_tableWidget_cellClicked\0textBoxSet\0"
    "std::string\0movie\0timing\0tickets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeatWindow[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       6,    2,   45,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
       8,    3,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, QMetaType::Int,   10,   11,   12,

       0        // eod
};

void SeatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SeatWindow *_t = static_cast<SeatWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_adminLoginpushButton_2_clicked(); break;
        case 1: _t->seatBooked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: { bool _r = _t->seatAlreadyBooked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->textBoxSet((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject SeatWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SeatWindow.data,
      qt_meta_data_SeatWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SeatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeatWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SeatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
