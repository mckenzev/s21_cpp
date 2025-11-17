/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN3s214ViewE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN3s214ViewE = QtMocHelpers::stringData(
    "s21::View",
    "interface",
    "",
    "a",
    "loadChecker",
    "on_loadModelFileButton_clicked",
    "loadMod",
    "filename",
    "moveRepeat",
    "on_changeBGColorButton_clicked",
    "on_checkBox_ln_clicked",
    "checked",
    "on_checkBox_pn_clicked",
    "on_pnSizeSpinBox_valueChanged",
    "arg1",
    "on_radio_sphere_clicked",
    "on_radio_cube_clicked",
    "on_checkBox_ln_2_clicked",
    "on_lnWidthSpinBox_valueChanged",
    "on_radioButton_4_clicked",
    "on_radioButton_5_clicked",
    "on_edgesColorButton_clicked",
    "on_verticesColorButton_clicked",
    "on_moveRightButton_clicked",
    "on_moveLeftButton_clicked",
    "on_moveDownButton_clicked",
    "on_moveUpButton_clicked",
    "on_moveBackwardButton_clicked",
    "on_moveForwardButton_clicked",
    "on_rotateDownButton_clicked",
    "on_rotateUpButton_clicked",
    "on_rotateLeftButton_clicked",
    "on_rotateRightButton_clicked",
    "on_rotateClockwiseButton_clicked",
    "on_rotateCounterclockwiseButton_clicked",
    "on_doubleSpinBox_valueChanged",
    "on_screencastButton_clicked",
    "on_screenshotButton_clicked",
    "makeRotate",
    "step",
    "s21::Axis",
    "axis",
    "makeMove",
    "GifRecord"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN3s214ViewE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  224,    2, 0x08,    1 /* Private */,
       4,    0,  227,    2, 0x08,    3 /* Private */,
       5,    0,  228,    2, 0x08,    4 /* Private */,
       6,    1,  229,    2, 0x08,    5 /* Private */,
       8,    0,  232,    2, 0x08,    7 /* Private */,
       9,    0,  233,    2, 0x08,    8 /* Private */,
      10,    1,  234,    2, 0x08,    9 /* Private */,
      12,    1,  237,    2, 0x08,   11 /* Private */,
      13,    1,  240,    2, 0x08,   13 /* Private */,
      15,    1,  243,    2, 0x08,   15 /* Private */,
      16,    1,  246,    2, 0x08,   17 /* Private */,
      17,    1,  249,    2, 0x08,   19 /* Private */,
      18,    1,  252,    2, 0x08,   21 /* Private */,
      19,    0,  255,    2, 0x08,   23 /* Private */,
      20,    0,  256,    2, 0x08,   24 /* Private */,
      21,    0,  257,    2, 0x08,   25 /* Private */,
      22,    0,  258,    2, 0x08,   26 /* Private */,
      23,    0,  259,    2, 0x08,   27 /* Private */,
      24,    0,  260,    2, 0x08,   28 /* Private */,
      25,    0,  261,    2, 0x08,   29 /* Private */,
      26,    0,  262,    2, 0x08,   30 /* Private */,
      27,    0,  263,    2, 0x08,   31 /* Private */,
      28,    0,  264,    2, 0x08,   32 /* Private */,
      29,    0,  265,    2, 0x08,   33 /* Private */,
      30,    0,  266,    2, 0x08,   34 /* Private */,
      31,    0,  267,    2, 0x08,   35 /* Private */,
      32,    0,  268,    2, 0x08,   36 /* Private */,
      33,    0,  269,    2, 0x08,   37 /* Private */,
      34,    0,  270,    2, 0x08,   38 /* Private */,
      35,    1,  271,    2, 0x08,   39 /* Private */,
      36,    0,  274,    2, 0x08,   41 /* Private */,
      37,    0,  275,    2, 0x08,   42 /* Private */,
      38,    2,  276,    2, 0x08,   43 /* Private */,
      42,    2,  281,    2, 0x08,   46 /* Private */,
      43,    0,  286,    2, 0x08,   49 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double,   14,
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
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 40,   39,   41,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 40,   39,   41,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject s21::View::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN3s214ViewE.offsetsAndSizes,
    qt_meta_data_ZN3s214ViewE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN3s214ViewE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<View, std::true_type>,
        // method 'interface'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadChecker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadModelFileButton_clicked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadMod'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'moveRepeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeBGColorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_ln_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_pn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pnSizeSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_radio_sphere_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radio_cube_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_ln_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_lnWidthSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_radioButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edgesColorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticesColorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveRightButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveLeftButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveDownButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveUpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveBackwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveForwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateDownButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateUpButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateLeftButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateRightButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateClockwiseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateCounterclockwiseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_doubleSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_screencastButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_screenshotButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeRotate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const s21::Axis &, std::false_type>,
        // method 'makeMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const s21::Axis &, std::false_type>,
        // method 'GifRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void s21::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<View *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->interface((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->loadChecker(); break;
        case 2: { bool _r = _t->on_loadModelFileButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->loadMod((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->moveRepeat(); break;
        case 5: _t->on_changeBGColorButton_clicked(); break;
        case 6: _t->on_checkBox_ln_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_checkBox_pn_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_pnSizeSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->on_radio_sphere_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_radio_cube_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_checkBox_ln_2_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_lnWidthSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->on_radioButton_4_clicked(); break;
        case 14: _t->on_radioButton_5_clicked(); break;
        case 15: _t->on_edgesColorButton_clicked(); break;
        case 16: _t->on_verticesColorButton_clicked(); break;
        case 17: _t->on_moveRightButton_clicked(); break;
        case 18: _t->on_moveLeftButton_clicked(); break;
        case 19: _t->on_moveDownButton_clicked(); break;
        case 20: _t->on_moveUpButton_clicked(); break;
        case 21: _t->on_moveBackwardButton_clicked(); break;
        case 22: _t->on_moveForwardButton_clicked(); break;
        case 23: _t->on_rotateDownButton_clicked(); break;
        case 24: _t->on_rotateUpButton_clicked(); break;
        case 25: _t->on_rotateLeftButton_clicked(); break;
        case 26: _t->on_rotateRightButton_clicked(); break;
        case 27: _t->on_rotateClockwiseButton_clicked(); break;
        case 28: _t->on_rotateCounterclockwiseButton_clicked(); break;
        case 29: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->on_screencastButton_clicked(); break;
        case 31: _t->on_screenshotButton_clicked(); break;
        case 32: _t->makeRotate((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<s21::Axis>>(_a[2]))); break;
        case 33: _t->makeMove((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<s21::Axis>>(_a[2]))); break;
        case 34: _t->GifRecord(); break;
        default: ;
        }
    }
}

const QMetaObject *s21::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN3s214ViewE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int s21::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
