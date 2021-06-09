/****************************************************************************
** Meta object code from reading C++ file 'adminpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminPanel_t {
    QByteArrayData data[19];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPanel_t qt_meta_stringdata_AdminPanel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AdminPanel"
QT_MOC_LITERAL(1, 11, 10), // "adminLogin"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "std::string"
QT_MOC_LITERAL(4, 35, 8), // "username"
QT_MOC_LITERAL(5, 44, 8), // "password"
QT_MOC_LITERAL(6, 53, 33), // "on_adminLoginpushButton_2_cli..."
QT_MOC_LITERAL(7, 87, 27), // "on_ActioncomboBox_activated"
QT_MOC_LITERAL(8, 115, 4), // "arg1"
QT_MOC_LITERAL(9, 120, 7), // "actions"
QT_MOC_LITERAL(10, 128, 4), // "arg2"
QT_MOC_LITERAL(11, 133, 31), // "on_listActioncomboBox_activated"
QT_MOC_LITERAL(12, 165, 33), // "on_adminLoginpushButton_3_cli..."
QT_MOC_LITERAL(13, 199, 17), // "addMovieAndTiming"
QT_MOC_LITERAL(14, 217, 5), // "movie"
QT_MOC_LITERAL(15, 223, 6), // "timing"
QT_MOC_LITERAL(16, 230, 9), // "addCoupon"
QT_MOC_LITERAL(17, 240, 4), // "code"
QT_MOC_LITERAL(18, 245, 3) // "per"

    },
    "AdminPanel\0adminLogin\0\0std::string\0"
    "username\0password\0on_adminLoginpushButton_2_clicked\0"
    "on_ActioncomboBox_activated\0arg1\0"
    "actions\0arg2\0on_listActioncomboBox_activated\0"
    "on_adminLoginpushButton_3_clicked\0"
    "addMovieAndTiming\0movie\0timing\0addCoupon\0"
    "code\0per"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    2,   63,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    2,   72,    2, 0x08 /* Private */,
      16,    2,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,   10,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

       0        // eod
};

void AdminPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminPanel *_t = static_cast<AdminPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->adminLogin((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_adminLoginpushButton_2_clicked(); break;
        case 2: _t->on_ActioncomboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->actions((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->on_listActioncomboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_adminLoginpushButton_3_clicked(); break;
        case 6: _t->addMovieAndTiming((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->addCoupon((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AdminPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminPanel.data,
      qt_meta_data_AdminPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
