/****************************************************************************
** Meta object code from reading C++ file 'Openglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/Openglwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Openglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenGLWidget_t {
    QByteArrayData data[16];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenGLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenGLWidget_t qt_meta_stringdata_OpenGLWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OpenGLWidget"
QT_MOC_LITERAL(1, 13, 12), // "toggleLeader"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "_leaderState"
QT_MOC_LITERAL(4, 40, 11), // "setPredator"
QT_MOC_LITERAL(5, 52, 11), // "addObstacle"
QT_MOC_LITERAL(6, 64, 11), // "std::string"
QT_MOC_LITERAL(7, 76, 13), // "_obstacleType"
QT_MOC_LITERAL(8, 90, 7), // "addFood"
QT_MOC_LITERAL(9, 98, 10), // "removeFood"
QT_MOC_LITERAL(10, 109, 14), // "removeObstacle"
QT_MOC_LITERAL(11, 124, 18), // "updateObstacleSize"
QT_MOC_LITERAL(12, 143, 5), // "_size"
QT_MOC_LITERAL(13, 149, 7), // "addBoid"
QT_MOC_LITERAL(14, 157, 25), // "_randomizeInitialPosition"
QT_MOC_LITERAL(15, 183, 10) // "removeBoid"

    },
    "OpenGLWidget\0toggleLeader\0\0_leaderState\0"
    "setPredator\0addObstacle\0std::string\0"
    "_obstacleType\0addFood\0removeFood\0"
    "removeObstacle\0updateObstacleSize\0"
    "_size\0addBoid\0_randomizeInitialPosition\0"
    "removeBoid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenGLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      15,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

       0        // eod
};

void OpenGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenGLWidget *_t = static_cast<OpenGLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleLeader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPredator(); break;
        case 2: _t->addObstacle((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->addFood(); break;
        case 4: _t->removeFood(); break;
        case 5: _t->removeObstacle(); break;
        case 6: _t->updateObstacleSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->addBoid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->removeBoid(); break;
        default: ;
        }
    }
}

const QMetaObject OpenGLWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_OpenGLWidget.data,
      qt_meta_data_OpenGLWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLWidget.stringdata0))
        return static_cast<void*>(const_cast< OpenGLWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int OpenGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
