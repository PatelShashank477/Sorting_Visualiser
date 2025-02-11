/****************************************************************************
** Meta object code from reading C++ file 'SortingVisualizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../SortingVisualizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SortingVisualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortingVisualizer_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortingVisualizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortingVisualizer_t qt_meta_stringdata_SortingVisualizer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SortingVisualizer"
QT_MOC_LITERAL(1, 18, 18), // "visualizeAlgorithm"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "algorithm"
QT_MOC_LITERAL(4, 48, 5), // "input"
QT_MOC_LITERAL(5, 54, 19), // "updateVisualization"
QT_MOC_LITERAL(6, 74, 4), // "play"
QT_MOC_LITERAL(7, 79, 5), // "pause"
QT_MOC_LITERAL(8, 85, 18) // "resetVisualization"

    },
    "SortingVisualizer\0visualizeAlgorithm\0"
    "\0algorithm\0input\0updateVisualization\0"
    "play\0pause\0resetVisualization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortingVisualizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SortingVisualizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortingVisualizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visualizeAlgorithm((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->updateVisualization(); break;
        case 2: _t->play(); break;
        case 3: _t->pause(); break;
        case 4: _t->resetVisualization(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SortingVisualizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SortingVisualizer.data,
    qt_meta_data_SortingVisualizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SortingVisualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortingVisualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortingVisualizer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SortingVisualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
