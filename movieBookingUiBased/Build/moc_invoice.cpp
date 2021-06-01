/****************************************************************************
** Meta object code from reading C++ file 'invoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../invoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Invoice_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Invoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Invoice_t qt_meta_stringdata_Invoice = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Invoice"
QT_MOC_LITERAL(1, 8, 11), // "paymentPage"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "std::string"
QT_MOC_LITERAL(4, 33, 5), // "movie"
QT_MOC_LITERAL(5, 39, 6), // "timing"
QT_MOC_LITERAL(6, 46, 7), // "tickets"
QT_MOC_LITERAL(7, 54, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(8, 79, 5), // "seats"
QT_MOC_LITERAL(9, 85, 27), // "on_cancelpushButton_clicked"
QT_MOC_LITERAL(10, 113, 24), // "on_paypushButton_clicked"
QT_MOC_LITERAL(11, 138, 30) // "on_discoutpushButton_2_clicked"

    },
    "Invoice\0paymentPage\0\0std::string\0movie\0"
    "timing\0tickets\0std::vector<std::string>\0"
    "seats\0on_cancelpushButton_clicked\0"
    "on_paypushButton_clicked\0"
    "on_discoutpushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Invoice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x08 /* Private */,
      10,    0,   44,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 7,    4,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Invoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Invoice *_t = static_cast<Invoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paymentPage((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< std::vector<std::string>(*)>(_a[4]))); break;
        case 1: _t->on_cancelpushButton_clicked(); break;
        case 2: _t->on_paypushButton_clicked(); break;
        case 3: _t->on_discoutpushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Invoice::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Invoice.data,
      qt_meta_data_Invoice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Invoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Invoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Invoice.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Invoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
