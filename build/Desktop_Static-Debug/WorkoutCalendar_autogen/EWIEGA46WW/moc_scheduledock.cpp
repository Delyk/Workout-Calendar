/****************************************************************************
** Meta object code from reading C++ file 'scheduledock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scheduledock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scheduledock.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8DirectorE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8DirectorE = QtMocHelpers::stringData(
    "Director",
    "save",
    "",
    "changeCentral",
    "QWidget*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto Director::qt_create_metaobjectdata<qt_meta_tag_ZN8DirectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(1, 2, 1, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeCentral'
        QtMocHelpers::SlotData<void(QWidget *)>(3, 2, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN8DirectorE_t>()
{
    return Director::qt_create_metaobjectdata<qt_meta_tag_ZN8DirectorE_t>();
}
static constexpr auto qt_meta_data_ZN8DirectorE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN8DirectorE_t>().data;
static constexpr const uint *qt_meta_data_ZN8DirectorE =
    qt_meta_data_ZN8DirectorE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN8DirectorE[] = {

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
       3,    1,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject Director::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8DirectorE.offsetsAndSizes,
    qt_meta_data_ZN8DirectorE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8DirectorE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Director, std::true_type>,
        // method 'save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeCentral'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void Director::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Director *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->changeCentral((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Director::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Director::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8DirectorE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Director::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12scheduleDockE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12scheduleDockE = QtMocHelpers::stringData(
    "scheduleDock",
    "returnNewDate",
    "",
    "DataPackage",
    "schedule*",
    "buildAddSignal",
    "data",
    "updateList",
    "QList<ExercisesDateList*>",
    "datelist",
    "QList<WorkoutDateList*>",
    "QList<DateList*>",
    "changeCurrent",
    "s"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto scheduleDock::qt_create_metaobjectdata<qt_meta_tag_ZN12scheduleDockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'returnNewDate'
        QtMocHelpers::SignalData<void(DataPackage, schedule *)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 },
        }}),
        // Slot 'buildAddSignal'
        QtMocHelpers::SlotData<void(DataPackage)>(5, 2, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 6 },
        }}),
        // Slot 'updateList'
        QtMocHelpers::SlotData<void(QList<ExercisesDateList*>)>(7, 2, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'updateList'
        QtMocHelpers::SlotData<void(QList<WorkoutDateList*>)>(7, 2, 8, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 9 },
        }}),
        // Slot 'updateList'
        QtMocHelpers::SlotData<void(QList<DateList*>)>(7, 2, 10, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 9 },
        }}),
        // Slot 'changeCurrent'
        QtMocHelpers::SlotData<void(schedule *)>(12, 2, 12, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 13 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN12scheduleDockE_t>()
{
    return scheduleDock::qt_create_metaobjectdata<qt_meta_tag_ZN12scheduleDockE_t>();
}
static constexpr auto qt_meta_data_ZN12scheduleDockE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN12scheduleDockE_t>().data;
static constexpr const uint *qt_meta_data_ZN12scheduleDockE =
    qt_meta_data_ZN12scheduleDockE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN12scheduleDockE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   55,    2, 0x0a,    4 /* Public */,
       7,    1,   58,    2, 0x0a,    6 /* Public */,
       7,    1,   61,    2, 0x0a,    8 /* Public */,
       7,    1,   64,    2, 0x0a,   10 /* Public */,
      12,    1,   67,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void, 0x80000000 | 4,   13,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject scheduleDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN12scheduleDockE.offsetsAndSizes,
    qt_meta_data_ZN12scheduleDockE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12scheduleDockE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<scheduleDock, std::true_type>,
        // method 'returnNewDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>,
        // method 'buildAddSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>,
        // method 'updateList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<ExercisesDateList*>, std::false_type>,
        // method 'updateList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<WorkoutDateList*>, std::false_type>,
        // method 'updateList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<DateList*>, std::false_type>,
        // method 'changeCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<schedule *, std::false_type>
    >,
    nullptr
} };

void scheduleDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<scheduleDock *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->returnNewDate((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[2]))); break;
        case 1: _t->buildAddSignal((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1]))); break;
        case 2: _t->updateList((*reinterpret_cast< std::add_pointer_t<QList<ExercisesDateList*>>>(_a[1]))); break;
        case 3: _t->updateList((*reinterpret_cast< std::add_pointer_t<QList<WorkoutDateList*>>>(_a[1]))); break;
        case 4: _t->updateList((*reinterpret_cast< std::add_pointer_t<QList<DateList*>>>(_a[1]))); break;
        case 5: _t->changeCurrent((*reinterpret_cast< std::add_pointer_t<schedule*>>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<ExercisesDateList*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<WorkoutDateList*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<DateList*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< schedule* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (scheduleDock::*)(DataPackage , schedule * );
            if (_q_method_type _q_method = &scheduleDock::returnNewDate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *scheduleDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scheduleDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12scheduleDockE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int scheduleDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void scheduleDock::returnNewDate(DataPackage _t1, schedule * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN10BaseDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10BaseDialogE = QtMocHelpers::stringData(
    "BaseDialog",
    "data",
    "",
    "DataPackage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto BaseDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10BaseDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Signal 'data'
        QtMocHelpers::SignalData<void(DataPackage)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN10BaseDialogE_t>()
{
    return BaseDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10BaseDialogE_t>();
}
static constexpr auto qt_meta_data_ZN10BaseDialogE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN10BaseDialogE_t>().data;
static constexpr const uint *qt_meta_data_ZN10BaseDialogE =
    qt_meta_data_ZN10BaseDialogE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN10BaseDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject BaseDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN10BaseDialogE.offsetsAndSizes,
    qt_meta_data_ZN10BaseDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10BaseDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BaseDialog, std::true_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataPackage, std::false_type>
    >,
    nullptr
} };

void BaseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BaseDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< std::add_pointer_t<DataPackage>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (BaseDialog::*)(DataPackage );
            if (_q_method_type _q_method = &BaseDialog::data; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *BaseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10BaseDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BaseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BaseDialog::data(DataPackage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN10DateDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10DateDialogE = QtMocHelpers::stringData(
    "DateDialog",
    "done",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto DateDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10DateDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'done'
        QtMocHelpers::SlotData<void(int)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN10DateDialogE_t>()
{
    return DateDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10DateDialogE_t>();
}
static constexpr auto qt_meta_data_ZN10DateDialogE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN10DateDialogE_t>().data;
static constexpr const uint *qt_meta_data_ZN10DateDialogE =
    qt_meta_data_ZN10DateDialogE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN10DateDialogE[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject DateDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN10DateDialogE.offsetsAndSizes,
    qt_meta_data_ZN10DateDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10DateDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateDialog, std::true_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void DateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DateDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10DateDialogE.stringdata0))
        return static_cast<void*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int DateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN13WorkoutDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13WorkoutDialogE = QtMocHelpers::stringData(
    "WorkoutDialog",
    "done",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto WorkoutDialog::qt_create_metaobjectdata<qt_meta_tag_ZN13WorkoutDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
        // Slot 'done'
        QtMocHelpers::SlotData<void(int)>(1, 2, 1, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN13WorkoutDialogE_t>()
{
    return WorkoutDialog::qt_create_metaobjectdata<qt_meta_tag_ZN13WorkoutDialogE_t>();
}
static constexpr auto qt_meta_data_ZN13WorkoutDialogE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN13WorkoutDialogE_t>().data;
static constexpr const uint *qt_meta_data_ZN13WorkoutDialogE =
    qt_meta_data_ZN13WorkoutDialogE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN13WorkoutDialogE[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject WorkoutDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN13WorkoutDialogE.offsetsAndSizes,
    qt_meta_data_ZN13WorkoutDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13WorkoutDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WorkoutDialog, std::true_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void WorkoutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkoutDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WorkoutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkoutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13WorkoutDialogE.stringdata0))
        return static_cast<void*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int WorkoutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
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
