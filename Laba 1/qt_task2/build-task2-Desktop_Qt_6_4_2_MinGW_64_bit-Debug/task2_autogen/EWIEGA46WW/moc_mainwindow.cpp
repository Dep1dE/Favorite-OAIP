/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../task2/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[8];
    char stringdata5[22];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[27];
    char stringdata10[4];
    char stringdata11[7];
    char stringdata12[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "on_action_triggered"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 21),  // "on_action_3_triggered"
        QT_MOC_LITERAL(54, 7),  // "recieve"
        QT_MOC_LITERAL(62, 21),  // "on_action_4_triggered"
        QT_MOC_LITERAL(84, 21),  // "on_action_8_triggered"
        QT_MOC_LITERAL(106, 21),  // "on_action_7_triggered"
        QT_MOC_LITERAL(128, 21),  // "on_action_2_triggered"
        QT_MOC_LITERAL(150, 26),  // "on_tableWidget_cellChanged"
        QT_MOC_LITERAL(177, 3),  // "row"
        QT_MOC_LITERAL(181, 6),  // "column"
        QT_MOC_LITERAL(188, 21)   // "on_action_9_triggered"
    },
    "MainWindow",
    "on_action_triggered",
    "",
    "on_action_3_triggered",
    "recieve",
    "on_action_4_triggered",
    "on_action_8_triggered",
    "on_action_7_triggered",
    "on_action_2_triggered",
    "on_tableWidget_cellChanged",
    "row",
    "column",
    "on_action_9_triggered"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    6,   70,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,   10 /* Private */,
       6,    0,   84,    2, 0x08,   11 /* Private */,
       7,    0,   85,    2, 0x08,   12 /* Private */,
       8,    0,   86,    2, 0x08,   13 /* Private */,
       9,    2,   87,    2, 0x08,   14 /* Private */,
      12,    0,   92,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_action_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_3_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recieve'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_action_4_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_8_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_7_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_action_9_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_action_triggered(); break;
        case 1: _t->on_action_3_triggered(); break;
        case 2: _t->recieve((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 3: _t->on_action_4_triggered(); break;
        case 4: _t->on_action_8_triggered(); break;
        case 5: _t->on_action_7_triggered(); break;
        case 6: _t->on_action_2_triggered(); break;
        case 7: _t->on_tableWidget_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->on_action_9_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
