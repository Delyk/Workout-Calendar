/****************************************************************************
** Meta object code from reading C++ file 'datelist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../datelist.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8DateListE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8DateListE = QtMocHelpers::stringData(
    "DateList",
    "sendDate",
    "",
    "date",
    "add",
    "row",
    "column",
    "Date"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto DateList::qt_create_metaobjectdata<qt_meta_tag_ZN8DateListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'sendDate'
        QtMocHelpers::SignalData<void(QString)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(int, int)>(4, 2, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
        // Slot 'Date'
        QtMocHelpers::SlotData<void()>(7, 2, 6, QMC::AccessPublic, QMetaType::Void),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN8DateListE_t>()
{
    return DateList::qt_create_metaobjectdata<qt_meta_tag_ZN8DateListE_t>();
}
static constexpr auto qt_meta_data_ZN8DateListE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN8DateListE_t>().data;
static constexpr const uint *qt_meta_data_ZN8DateListE =
    qt_meta_data_ZN8DateListE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN8DateListE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   35,    2, 0x0a,    3 /* Public */,
       7,    0,   40,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject DateList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8DateListE.offsetsAndSizes,
    qt_meta_data_ZN8DateListE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8DateListE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateList, std::true_type>,
        // method 'sendDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'Date'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DateList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DateList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendDate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->add((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->Date(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (DateList::*)(QString );
            if (_q_method_type _q_method = &DateList::sendDate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DateList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8DateListE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DateList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DateList::sendDate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN17ExercisesDateListE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17ExercisesDateListE = QtMocHelpers::stringData(
    "ExercisesDateList",
    "Date",
    "",
    "add",
    "name",
    "num",
    "pos"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto ExercisesDateList::qt_create_metaobjectdata<qt_meta_tag_ZN17ExercisesDateListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'Date'
        QtMocHelpers::SlotData<void()>(1, 2, 1, QMC::AccessPublic, QMetaType::Void),
        // Slot 'add'
        QtMocHelpers::SlotData<void(const QString &, int, int)>(3, 2, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN17ExercisesDateListE_t>()
{
    return ExercisesDateList::qt_create_metaobjectdata<qt_meta_tag_ZN17ExercisesDateListE_t>();
}
static constexpr auto qt_meta_data_ZN17ExercisesDateListE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN17ExercisesDateListE_t>().data;
static constexpr const uint *qt_meta_data_ZN17ExercisesDateListE =
    qt_meta_data_ZN17ExercisesDateListE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN17ExercisesDateListE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    3,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    5,    6,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject ExercisesDateList::staticMetaObject = { {
    QMetaObject::SuperData::link<DateList::staticMetaObject>(),
    qt_meta_stringdata_ZN17ExercisesDateListE.offsetsAndSizes,
    qt_meta_data_ZN17ExercisesDateListE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17ExercisesDateListE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExercisesDateList, std::true_type>,
        // method 'Date'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ExercisesDateList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExercisesDateList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Date(); break;
        case 1: _t->add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExercisesDateList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExercisesDateList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17ExercisesDateListE.stringdata0))
        return static_cast<void*>(this);
    return DateList::qt_metacast(_clname);
}

int ExercisesDateList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DateList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN18NameLineConnectionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18NameLineConnectionE = QtMocHelpers::stringData(
    "NameLineConnection",
    "info",
    "",
    "name",
    "num",
    "pos",
    "sendEdit",
    "text"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto NameLineConnection::qt_create_metaobjectdata<qt_meta_tag_ZN18NameLineConnectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'info'
        QtMocHelpers::SignalData<void(const QString &, int, int)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Int, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'sendEdit'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, 5, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN18NameLineConnectionE_t>()
{
    return NameLineConnection::qt_create_metaobjectdata<qt_meta_tag_ZN18NameLineConnectionE_t>();
}
static constexpr auto qt_meta_data_ZN18NameLineConnectionE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN18NameLineConnectionE_t>().data;
static constexpr const uint *qt_meta_data_ZN18NameLineConnectionE =
    qt_meta_data_ZN18NameLineConnectionE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN18NameLineConnectionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   33,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject NameLineConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN18NameLineConnectionE.offsetsAndSizes,
    qt_meta_data_ZN18NameLineConnectionE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18NameLineConnectionE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NameLineConnection, std::true_type>,
        // method 'info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void NameLineConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NameLineConnection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->info((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->sendEdit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (NameLineConnection::*)(const QString & , int , int );
            if (_q_method_type _q_method = &NameLineConnection::info; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *NameLineConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NameLineConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18NameLineConnectionE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NameLineConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void NameLineConnection::info(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN15WorkoutDateListE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15WorkoutDateListE = QtMocHelpers::stringData(
    "WorkoutDateList",
    "Date",
    "",
    "currentTrain",
    "row",
    "column",
    "add"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto WorkoutDateList::qt_create_metaobjectdata<qt_meta_tag_ZN15WorkoutDateListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'Date'
        QtMocHelpers::SlotData<void()>(1, 2, 1, QMC::AccessPublic, QMetaType::Void),
        // Slot 'currentTrain'
        QtMocHelpers::SlotData<void(int, int)>(3, 2, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(int, int)>(6, 2, 5, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Int, 5 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN15WorkoutDateListE_t>()
{
    return WorkoutDateList::qt_create_metaobjectdata<qt_meta_tag_ZN15WorkoutDateListE_t>();
}
static constexpr auto qt_meta_data_ZN15WorkoutDateListE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN15WorkoutDateListE_t>().data;
static constexpr const uint *qt_meta_data_ZN15WorkoutDateListE =
    qt_meta_data_ZN15WorkoutDateListE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN15WorkoutDateListE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    2,   33,    2, 0x0a,    2 /* Public */,
       6,    2,   38,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject WorkoutDateList::staticMetaObject = { {
    QMetaObject::SuperData::link<DateList::staticMetaObject>(),
    qt_meta_stringdata_ZN15WorkoutDateListE.offsetsAndSizes,
    qt_meta_data_ZN15WorkoutDateListE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15WorkoutDateListE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WorkoutDateList, std::true_type>,
        // method 'Date'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTrain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void WorkoutDateList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkoutDateList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Date(); break;
        case 1: _t->currentTrain((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->add((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *WorkoutDateList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkoutDateList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15WorkoutDateListE.stringdata0))
        return static_cast<void*>(this);
    return DateList::qt_metacast(_clname);
}

int WorkoutDateList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DateList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13DateListModelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13DateListModelE = QtMocHelpers::stringData(
    "DateListModel",
    "List",
    "",
    "QWidget*",
    "l",
    "selectionChanged",
    "QModelIndex",
    "index",
    "prev",
    "currentChanged",
    "current",
    "previous"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto DateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN13DateListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'List'
        QtMocHelpers::SignalData<void(QWidget *)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(5, 2, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 6, 8 },
        }}),
        // Slot 'currentChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(9, 2, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 10 }, { 0x80000000 | 6, 11 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN13DateListModelE_t>()
{
    return DateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN13DateListModelE_t>();
}
static constexpr auto qt_meta_data_ZN13DateListModelE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN13DateListModelE_t>().data;
static constexpr const uint *qt_meta_data_ZN13DateListModelE =
    qt_meta_data_ZN13DateListModelE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN13DateListModelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   35,    2, 0x0a,    3 /* Public */,
       9,    2,   40,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,   10,   11,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject DateListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ZN13DateListModelE.offsetsAndSizes,
    qt_meta_data_ZN13DateListModelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13DateListModelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateListModel, std::true_type>,
        // method 'List'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void DateListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DateListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->List((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (DateListModel::*)(QWidget * );
            if (_q_method_type _q_method = &DateListModel::List; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DateListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13DateListModelE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DateListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DateListModel::List(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN20WorkoutDateListModelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN20WorkoutDateListModelE = QtMocHelpers::stringData(
    "WorkoutDateListModel",
    "selectionChanged",
    "",
    "QModelIndex",
    "index",
    "prev"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto WorkoutDateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN20WorkoutDateListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN20WorkoutDateListModelE_t>()
{
    return WorkoutDateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN20WorkoutDateListModelE_t>();
}
static constexpr auto qt_meta_data_ZN20WorkoutDateListModelE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN20WorkoutDateListModelE_t>().data;
static constexpr const uint *qt_meta_data_ZN20WorkoutDateListModelE =
    qt_meta_data_ZN20WorkoutDateListModelE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN20WorkoutDateListModelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject WorkoutDateListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<DateListModel::staticMetaObject>(),
    qt_meta_stringdata_ZN20WorkoutDateListModelE.offsetsAndSizes,
    qt_meta_data_ZN20WorkoutDateListModelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN20WorkoutDateListModelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WorkoutDateListModel, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void WorkoutDateListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkoutDateListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *WorkoutDateListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkoutDateListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN20WorkoutDateListModelE.stringdata0))
        return static_cast<void*>(this);
    return DateListModel::qt_metacast(_clname);
}

int WorkoutDateListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DateListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN22ExercisesDateListModelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN22ExercisesDateListModelE = QtMocHelpers::stringData(
    "ExercisesDateListModel",
    "selectionChanged",
    "",
    "QModelIndex",
    "index",
    "prev"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto ExercisesDateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN22ExercisesDateListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN22ExercisesDateListModelE_t>()
{
    return ExercisesDateListModel::qt_create_metaobjectdata<qt_meta_tag_ZN22ExercisesDateListModelE_t>();
}
static constexpr auto qt_meta_data_ZN22ExercisesDateListModelE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN22ExercisesDateListModelE_t>().data;
static constexpr const uint *qt_meta_data_ZN22ExercisesDateListModelE =
    qt_meta_data_ZN22ExercisesDateListModelE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN22ExercisesDateListModelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject ExercisesDateListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<DateListModel::staticMetaObject>(),
    qt_meta_stringdata_ZN22ExercisesDateListModelE.offsetsAndSizes,
    qt_meta_data_ZN22ExercisesDateListModelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN22ExercisesDateListModelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExercisesDateListModel, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void ExercisesDateListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExercisesDateListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExercisesDateListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExercisesDateListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN22ExercisesDateListModelE.stringdata0))
        return static_cast<void*>(this);
    return DateListModel::qt_metacast(_clname);
}

int ExercisesDateListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DateListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
