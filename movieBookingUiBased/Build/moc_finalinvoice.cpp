/****************************************************************************
** Meta object code from reading C++ file 'finalinvoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../finalinvoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finalinvoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FinalInvoice_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FinalInvoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FinalInvoice_t qt_meta_stringdata_FinalInvoice = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FinalInvoice"
QT_MOC_LITERAL(1, 13, 12), // "finalInvoice"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "std::string"
QT_MOC_LITERAL(4, 39, 4), // "name"
QT_MOC_LITERAL(5, 44, 5), // "email"
QT_MOC_LITERAL(6, 50, 6), // "number"
QT_MOC_LITERAL(7, 57, 4), // "paid"
QT_MOC_LITERAL(8, 62, 6), // "method"
QT_MOC_LITERAL(9, 69, 12), // "totalTickets"
QT_MOC_LITERAL(10, 82, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(11, 107, 7), // "Inseats"
QT_MOC_LITERAL(12, 115, 30), // "on_discoutpushButton_2_clicked"
QT_MOC_LITERAL(13, 146, 11), // "updateSeats"
QT_MOC_LITERAL(14, 158, 1), // "r"
QT_MOC_LITERAL(15, 160, 1) // "c"

    },
    "FinalInvoice\0finalInvoice\0\0std::string\0"
    "name\0email\0number\0paid\0method\0"
    "totalTickets\0std::vector<std::string>\0"
    "Inseats\0on_discoutpushButton_2_clicked\0"
    "updateSeats\0r\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FinalInvoice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   29,    2, 0x0a /* Public */,
      12,    0,   44,    2, 0x08 /* Private */,
      13,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 10,    4,    5,    6,    7,    8,    9,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

       0        // eod
};

void FinalInvoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FinalInvoice *_t = static_cast<FinalInvoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finalInvoice((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< std::vector<std::string>(*)>(_a[7]))); break;
        case 1: _t->on_discoutpushButton_2_clicked(); break;
        case 2: _t->updateSeats((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject FinalInvoice::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FinalInvoice.data,
      qt_meta_data_FinalInvoice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FinalInvoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinalInvoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FinalInvoice.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FinalInvoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
