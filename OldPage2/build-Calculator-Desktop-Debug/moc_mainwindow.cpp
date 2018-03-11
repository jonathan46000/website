/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QT_Calculator/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "toNumber"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "toOp"
QT_MOC_LITERAL(4, 26, 3), // "clr"
QT_MOC_LITERAL(5, 30, 4), // "eval"
QT_MOC_LITERAL(6, 35, 7), // "number0"
QT_MOC_LITERAL(7, 43, 7), // "number1"
QT_MOC_LITERAL(8, 51, 7), // "number2"
QT_MOC_LITERAL(9, 59, 7), // "number3"
QT_MOC_LITERAL(10, 67, 7), // "number4"
QT_MOC_LITERAL(11, 75, 7), // "number5"
QT_MOC_LITERAL(12, 83, 7), // "number6"
QT_MOC_LITERAL(13, 91, 7), // "number7"
QT_MOC_LITERAL(14, 99, 7), // "number8"
QT_MOC_LITERAL(15, 107, 7), // "number9"
QT_MOC_LITERAL(16, 115, 5), // "opSum"
QT_MOC_LITERAL(17, 121, 6), // "opDiff"
QT_MOC_LITERAL(18, 128, 6), // "opMult"
QT_MOC_LITERAL(19, 135, 5), // "opDiv"
QT_MOC_LITERAL(20, 141, 7), // "decimal"
QT_MOC_LITERAL(21, 149, 5), // "clear"
QT_MOC_LITERAL(22, 155, 8), // "evaluate"
QT_MOC_LITERAL(23, 164, 7) // "display"

    },
    "MainWindow\0toNumber\0\0toOp\0clr\0eval\0"
    "number0\0number1\0number2\0number3\0number4\0"
    "number5\0number6\0number7\0number8\0number9\0"
    "opSum\0opDiff\0opMult\0opDiv\0decimal\0"
    "clear\0evaluate\0display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    1,  127,    2, 0x06 /* Public */,
       4,    0,  130,    2, 0x06 /* Public */,
       5,    0,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  132,    2, 0x0a /* Public */,
       7,    0,  133,    2, 0x0a /* Public */,
       8,    0,  134,    2, 0x0a /* Public */,
       9,    0,  135,    2, 0x0a /* Public */,
      10,    0,  136,    2, 0x0a /* Public */,
      11,    0,  137,    2, 0x0a /* Public */,
      12,    0,  138,    2, 0x0a /* Public */,
      13,    0,  139,    2, 0x0a /* Public */,
      14,    0,  140,    2, 0x0a /* Public */,
      15,    0,  141,    2, 0x0a /* Public */,
      16,    0,  142,    2, 0x0a /* Public */,
      17,    0,  143,    2, 0x0a /* Public */,
      18,    0,  144,    2, 0x0a /* Public */,
      19,    0,  145,    2, 0x0a /* Public */,
      20,    0,  146,    2, 0x0a /* Public */,
      21,    0,  147,    2, 0x0a /* Public */,
      22,    0,  148,    2, 0x0a /* Public */,
      23,    1,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Char,    2,
    QMetaType::Void, QMetaType::Char,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toNumber((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 1: _t->toOp((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 2: _t->clr(); break;
        case 3: _t->eval(); break;
        case 4: _t->number0(); break;
        case 5: _t->number1(); break;
        case 6: _t->number2(); break;
        case 7: _t->number3(); break;
        case 8: _t->number4(); break;
        case 9: _t->number5(); break;
        case 10: _t->number6(); break;
        case 11: _t->number7(); break;
        case 12: _t->number8(); break;
        case 13: _t->number9(); break;
        case 14: _t->opSum(); break;
        case 15: _t->opDiff(); break;
        case 16: _t->opMult(); break;
        case 17: _t->opDiv(); break;
        case 18: _t->decimal(); break;
        case 19: _t->clear(); break;
        case 20: _t->evaluate(); break;
        case 21: _t->display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::toNumber)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::toOp)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::clr)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::eval)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::toNumber(char _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::toOp(char _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::clr()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::eval()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
