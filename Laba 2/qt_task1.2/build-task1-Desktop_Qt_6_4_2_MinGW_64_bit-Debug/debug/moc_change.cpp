/****************************************************************************
** Meta object code from reading C++ file 'change.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../task1/change.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'change.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_change_t {
    uint offsetsAndSizes[20];
    char stringdata0[7];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[36];
    char stringdata5[6];
    char stringdata6[38];
    char stringdata7[26];
    char stringdata8[5];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_change_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_change_t qt_meta_stringdata_change = {
    {
        QT_MOC_LITERAL(0, 6),  // "change"
        QT_MOC_LITERAL(7, 14),  // "sendIformation"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 5),  // "Value"
        QT_MOC_LITERAL(29, 35),  // "on_dayComboBox1_currentIndexC..."
        QT_MOC_LITERAL(65, 5),  // "index"
        QT_MOC_LITERAL(71, 37),  // "on_monthComboBox1_currentInde..."
        QT_MOC_LITERAL(109, 25),  // "on_spinBox_3_valueChanged"
        QT_MOC_LITERAL(135, 4),  // "arg1"
        QT_MOC_LITERAL(140, 21)   // "on_pushButton_clicked"
    },
    "change",
    "sendIformation",
    "",
    "Value",
    "on_dayComboBox1_currentIndexChanged",
    "index",
    "on_monthComboBox1_currentIndexChanged",
    "on_spinBox_3_valueChanged",
    "arg1",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_change[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x08,    3 /* Private */,
       6,    1,   50,    2, 0x08,    5 /* Private */,
       7,    1,   53,    2, 0x08,    7 /* Private */,
       9,    0,   56,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject change::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_change.offsetsAndSizes,
    qt_meta_data_change,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_change_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<change, std::true_type>,
        // method 'sendIformation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Value &, std::false_type>,
        // method 'on_dayComboBox1_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_monthComboBox1_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_3_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void change::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<change *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendIformation((*reinterpret_cast< std::add_pointer_t<Value>>(_a[1]))); break;
        case 1: _t->on_dayComboBox1_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_monthComboBox1_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_spinBox_3_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (change::*)(const Value & );
            if (_t _q_method = &change::sendIformation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *change::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *change::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_change.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int change::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void change::sendIformation(const Value & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
