/****************************************************************************
** Meta object code from reading C++ file 'paraminput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../paraminput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paraminput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParamInput_t {
    QByteArrayData data[15];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParamInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParamInput_t qt_meta_stringdata_ParamInput = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ParamInput"
QT_MOC_LITERAL(1, 11, 3), // "set"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 2), // "_n"
QT_MOC_LITERAL(4, 19, 2), // "_g"
QT_MOC_LITERAL(5, 22, 2), // "_k"
QT_MOC_LITERAL(6, 25, 2), // "_x"
QT_MOC_LITERAL(7, 28, 2), // "_y"
QT_MOC_LITERAL(8, 31, 5), // "_flag"
QT_MOC_LITERAL(9, 37, 1), // "x"
QT_MOC_LITERAL(10, 39, 1), // "y"
QT_MOC_LITERAL(11, 41, 1), // "n"
QT_MOC_LITERAL(12, 43, 1), // "g"
QT_MOC_LITERAL(13, 45, 1), // "k"
QT_MOC_LITERAL(14, 47, 4) // "flag"

    },
    "ParamInput\0set\0\0_n\0_g\0_k\0_x\0_y\0_flag\0"
    "x\0y\0n\0g\0k\0flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParamInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    6,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,

 // properties: name, type, flags
       9, QMetaType::Double, 0x00095001,
      10, QMetaType::Double, 0x00095001,
      11, QMetaType::Double, 0x00095001,
      12, QMetaType::Double, 0x00095001,
      13, QMetaType::Double, 0x00095001,
      14, QMetaType::Double, 0x00095001,

       0        // eod
};

void ParamInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamInput *_t = static_cast<ParamInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ParamInput *_t = static_cast<ParamInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->n(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->g(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->k(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->flag(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ParamInput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ParamInput.data,
      qt_meta_data_ParamInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ParamInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParamInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParamInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParamInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
