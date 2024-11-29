/****************************************************************************
** Meta object code from reading C++ file 'schedule.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../schedule.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schedule.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8scheduleE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8scheduleE = QtMocHelpers::stringData(
    "schedule",
    "sendList",
    "",
    "QList<DateList*>",
    "datelist",
    "sendThis",
    "schedule*",
    "sch",
    "showList",
    "add",
    "DataPackage",
    "deleteByDate",
    "date"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto schedule::qt_create_metaobjectdata<qt_meta_tag_ZN8scheduleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'sendList'
        QtMocHelpers::SignalData<void(QList<DateList*>)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'sendThis'
        QtMocHelpers::SignalData<void(schedule *)>(5, 2, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'showList'
        QtMocHelpers::SlotData<void()>(8, 2, 5, QMC::AccessPublic, QMetaType::Void),
        // Slot 'add'
        QtMocHelpers::SlotData<void(DataPackage, schedule *)>(9, 2, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 }, { 0x80000000 | 6, 2 },
        }}),
        // Slot 'deleteByDate'
        QtMocHelpers::SlotData<void(QString)>(11, 2, 9, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN8scheduleE_t>()
{
    return schedule::qt_create_metaobjectdata<qt_meta_tag_ZN8scheduleE_t>();
}
static constexpr auto qt_meta_data_ZN8scheduleE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN8scheduleE_t>().data;
static constexpr const uint *qt_meta_data_ZN8scheduleE =
    qt_meta_data_ZN8scheduleE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN8scheduleE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   50,    2, 0x0a,    5 /* Public */,
       9,    2,   51,    2, 0x0a,    6 /* Public */,
      11,    1,   56,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject schedule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8scheduleE.offsetsAndSizes,
    qt_meta_data_ZN8scheduleE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8scheduleE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<schedule, std::true_type>,
        // method 'sendList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<DateList*>, std::false_type>,
        // method 'sendThis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>,
        // method 'showList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>,
        // method 'deleteByDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void schedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<schedule *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendList((*reinterpret_cast< std::add_pointer_t<QList<DateList*>>>(_a[1]))); break;
        case 1: _t->sendThis((*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[1]))); break;
        case 2: _t->showList(); break;
        case 3: _t->add((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[2]))); break;
        case 4: _t->deleteByDate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<DateList*> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (schedule::*)(QList<DateList*> );
            if (_q_method_type _q_method = &schedule::sendList; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (schedule::*)(schedule * );
            if (_q_method_type _q_method = &schedule::sendThis; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *schedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *schedule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8scheduleE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int schedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void schedule::sendList(QList<DateList*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void schedule::sendThis(schedule * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {
struct qt_meta_tag_ZN11workoutPlanE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11workoutPlanE = QtMocHelpers::stringData(
    "workoutPlan",
    "sendList",
    "",
    "QList<WorkoutDateList*>",
    "datelist",
    "showList",
    "deleteByDate",
    "date",
    "add",
    "DataPackage",
    "schedule*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto workoutPlan::qt_create_metaobjectdata<qt_meta_tag_ZN11workoutPlanE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'sendList'
        QtMocHelpers::SignalData<void(QList<WorkoutDateList*>)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'showList'
        QtMocHelpers::SlotData<void()>(5, 2, 3, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteByDate'
        QtMocHelpers::SlotData<void(QString)>(6, 2, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'add'
        QtMocHelpers::SlotData<void(DataPackage, schedule *)>(8, 2, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 }, { 0x80000000 | 10, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN11workoutPlanE_t>()
{
    return workoutPlan::qt_create_metaobjectdata<qt_meta_tag_ZN11workoutPlanE_t>();
}
static constexpr auto qt_meta_data_ZN11workoutPlanE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN11workoutPlanE_t>().data;
static constexpr const uint *qt_meta_data_ZN11workoutPlanE =
    qt_meta_data_ZN11workoutPlanE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN11workoutPlanE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   41,    2, 0x0a,    3 /* Public */,
       6,    1,   42,    2, 0x0a,    4 /* Public */,
       8,    2,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    2,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject workoutPlan::staticMetaObject = { {
    QMetaObject::SuperData::link<schedule::staticMetaObject>(),
    qt_meta_stringdata_ZN11workoutPlanE.offsetsAndSizes,
    qt_meta_data_ZN11workoutPlanE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11workoutPlanE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<workoutPlan, std::true_type>,
        // method 'sendList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<WorkoutDateList*>, std::false_type>,
        // method 'showList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteByDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>
    >,
    nullptr
} };

void workoutPlan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<workoutPlan *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendList((*reinterpret_cast< std::add_pointer_t<QList<WorkoutDateList*>>>(_a[1]))); break;
        case 1: _t->showList(); break;
        case 2: _t->deleteByDate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->add((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<WorkoutDateList*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (workoutPlan::*)(QList<WorkoutDateList*> );
            if (_q_method_type _q_method = &workoutPlan::sendList; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *workoutPlan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workoutPlan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11workoutPlanE.stringdata0))
        return static_cast<void*>(this);
    return schedule::qt_metacast(_clname);
}

int workoutPlan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = schedule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void workoutPlan::sendList(QList<WorkoutDateList*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN13exercisesListE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13exercisesListE = QtMocHelpers::stringData(
    "exercisesList",
    "sendList",
    "",
    "QList<ExercisesDateList*>",
    "datelist",
    "deleteByDate",
    "date",
    "showList",
    "add",
    "DataPackage",
    "schedule*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto exercisesList::qt_create_metaobjectdata<qt_meta_tag_ZN13exercisesListE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'sendList'
        QtMocHelpers::SignalData<void(QList<ExercisesDateList*>)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'deleteByDate'
        QtMocHelpers::SlotData<void(QString)>(5, 2, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'showList'
        QtMocHelpers::SlotData<void()>(7, 2, 5, QMC::AccessPublic, QMetaType::Void),
        // Slot 'add'
        QtMocHelpers::SlotData<void(DataPackage, schedule *)>(8, 2, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 }, { 0x80000000 | 10, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN13exercisesListE_t>()
{
    return exercisesList::qt_create_metaobjectdata<qt_meta_tag_ZN13exercisesListE_t>();
}
static constexpr auto qt_meta_data_ZN13exercisesListE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN13exercisesListE_t>().data;
static constexpr const uint *qt_meta_data_ZN13exercisesListE =
    qt_meta_data_ZN13exercisesListE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN13exercisesListE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x0a,    3 /* Public */,
       7,    0,   44,    2, 0x0a,    5 /* Public */,
       8,    2,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    2,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject exercisesList::staticMetaObject = { {
    QMetaObject::SuperData::link<schedule::staticMetaObject>(),
    qt_meta_stringdata_ZN13exercisesListE.offsetsAndSizes,
    qt_meta_data_ZN13exercisesListE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13exercisesListE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<exercisesList, std::true_type>,
        // method 'sendList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<ExercisesDateList*>, std::false_type>,
        // method 'deleteByDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>
    >,
    nullptr
} };

void exercisesList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<exercisesList *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendList((*reinterpret_cast< std::add_pointer_t<QList<ExercisesDateList*>>>(_a[1]))); break;
        case 1: _t->deleteByDate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->showList(); break;
        case 3: _t->add((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<ExercisesDateList*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (exercisesList::*)(QList<ExercisesDateList*> );
            if (_q_method_type _q_method = &exercisesList::sendList; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *exercisesList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exercisesList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13exercisesListE.stringdata0))
        return static_cast<void*>(this);
    return schedule::qt_metacast(_clname);
}

int exercisesList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = schedule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void exercisesList::sendList(QList<ExercisesDateList*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN7graphicE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7graphicE = QtMocHelpers::stringData(
    "graphic",
    "add",
    "",
    "DataPackage",
    "schedule*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto graphic::qt_create_metaobjectdata<qt_meta_tag_ZN7graphicE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'add'
        QtMocHelpers::SlotData<void(DataPackage, schedule *)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN7graphicE_t>()
{
    return graphic::qt_create_metaobjectdata<qt_meta_tag_ZN7graphicE_t>();
}
static constexpr auto qt_meta_data_ZN7graphicE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN7graphicE_t>().data;
static constexpr const uint *qt_meta_data_ZN7graphicE =
    qt_meta_data_ZN7graphicE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN7graphicE[] = {

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
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject graphic::staticMetaObject = { {
    QMetaObject::SuperData::link<schedule::staticMetaObject>(),
    qt_meta_stringdata_ZN7graphicE.offsetsAndSizes,
    qt_meta_data_ZN7graphicE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7graphicE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<graphic, std::true_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>
    >,
    nullptr
} };

void graphic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<graphic *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *graphic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graphic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7graphicE.stringdata0))
        return static_cast<void*>(this);
    return schedule::qt_metacast(_clname);
}

int graphic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = schedule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
