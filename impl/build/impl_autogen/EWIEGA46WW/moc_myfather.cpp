/****************************************************************************
** Meta object code from reading C++ file 'myfather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../myfather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myfather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyFather_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyFather_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyFather_t qt_meta_stringdata_MyFather = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyFather"
QT_MOC_LITERAL(1, 9, 11), // "nameChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "name"
QT_MOC_LITERAL(4, 27, 10), // "ageChanged"
QT_MOC_LITERAL(5, 38, 3), // "age"
QT_MOC_LITERAL(6, 42, 14), // "_q_nameChanged"
QT_MOC_LITERAL(7, 57, 13) // "_q_ageChanged"

    },
    "MyFather\0nameChanged\0\0name\0ageChanged\0"
    "age\0_q_nameChanged\0_q_ageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyFather[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x08 /* Private */,
       7,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void MyFather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyFather *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_ageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyFather::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyFather::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyFather::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyFather::ageChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MyFather *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->age(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MyFather *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAge(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyFather::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyFather.data,
    qt_meta_data_MyFather,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyFather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyFather::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyFather.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyFather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyFather::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyFather::ageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MyFatherPrivate_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyFatherPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyFatherPrivate_t qt_meta_stringdata_MyFatherPrivate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyFatherPrivate"
QT_MOC_LITERAL(1, 16, 14), // "_q_nameChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "name"
QT_MOC_LITERAL(4, 37, 13), // "_q_ageChanged"
QT_MOC_LITERAL(5, 51, 3) // "age"

    },
    "MyFatherPrivate\0_q_nameChanged\0\0name\0"
    "_q_ageChanged\0age"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyFatherPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void MyFatherPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyFatherPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_q_nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->_q_ageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyFatherPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyFatherPrivate.data,
    qt_meta_data_MyFatherPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyFatherPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyFatherPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyFatherPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyFatherPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
