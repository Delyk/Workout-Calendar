/****************************************************************************
** Meta object code from reading C++ file 'topmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../topmenu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'topmenu.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7topMenuE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7topMenuE = QtMocHelpers::stringData(
    "topMenu"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

#ifdef QT_MOC_HAS_UINTDATA
template <> constexpr inline auto topMenu::qt_create_metaobjectdata<qt_meta_tag_ZN7topMenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_methods {
    };
    return QtMocHelpers::metaObjectData(QMC::MetaObjectFlag{}, qt_methods, qt_properties, qt_enums);
}
template <> constexpr inline auto qt_call_create_metaobjectdata<qt_meta_tag_ZN7topMenuE_t>()
{
    return topMenu::qt_create_metaobjectdata<qt_meta_tag_ZN7topMenuE_t>();
}
static constexpr auto qt_meta_data_ZN7topMenuE_array =
    qt_call_create_metaobjectdata<qt_meta_tag_ZN7topMenuE_t>().data;
static constexpr const uint *qt_meta_data_ZN7topMenuE =
    qt_meta_data_ZN7topMenuE_array.data();
#else  // !QT_MOC_HAS_UINTDATA
Q_CONSTINIT static const uint qt_meta_data_ZN7topMenuE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};
#endif // !QT_MOC_HAS_UINTDATA

Q_CONSTINIT const QMetaObject topMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN7topMenuE.offsetsAndSizes,
    qt_meta_data_ZN7topMenuE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7topMenuE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<topMenu, std::true_type>
    >,
    nullptr
} };

void topMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<topMenu *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *topMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *topMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7topMenuE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int topMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
