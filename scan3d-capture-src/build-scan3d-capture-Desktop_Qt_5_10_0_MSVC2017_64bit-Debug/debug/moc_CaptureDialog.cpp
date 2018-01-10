/****************************************************************************
** Meta object code from reading C++ file 'CaptureDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/CaptureDialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CaptureDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureDialog_t {
    QByteArrayData data[23];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureDialog_t qt_meta_stringdata_CaptureDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CaptureDialog"
QT_MOC_LITERAL(1, 14, 30), // "on_close_cancel_button_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "checked"
QT_MOC_LITERAL(4, 54, 20), // "_on_root_dir_changed"
QT_MOC_LITERAL(5, 75, 7), // "dirname"
QT_MOC_LITERAL(6, 83, 23), // "_on_new_projector_image"
QT_MOC_LITERAL(7, 107, 5), // "image"
QT_MOC_LITERAL(8, 113, 20), // "_on_new_camera_image"
QT_MOC_LITERAL(9, 134, 7), // "cv::Mat"
QT_MOC_LITERAL(10, 142, 21), // "_on_resolution_change"
QT_MOC_LITERAL(11, 164, 35), // "on_screen_combo_currentIndexC..."
QT_MOC_LITERAL(12, 200, 5), // "index"
QT_MOC_LITERAL(13, 206, 35), // "on_camera_combo_currentIndexC..."
QT_MOC_LITERAL(14, 242, 29), // "on_output_dir_line_textEdited"
QT_MOC_LITERAL(15, 272, 4), // "text"
QT_MOC_LITERAL(16, 277, 25), // "on_capture_button_clicked"
QT_MOC_LITERAL(17, 303, 28), // "on_output_dir_button_clicked"
QT_MOC_LITERAL(18, 332, 26), // "on_test_check_stateChanged"
QT_MOC_LITERAL(19, 359, 5), // "state"
QT_MOC_LITERAL(20, 365, 27), // "on_test_prev_button_clicked"
QT_MOC_LITERAL(21, 393, 27), // "on_test_next_button_clicked"
QT_MOC_LITERAL(22, 421, 9) // "auto_next"

    },
    "CaptureDialog\0on_close_cancel_button_clicked\0"
    "\0checked\0_on_root_dir_changed\0dirname\0"
    "_on_new_projector_image\0image\0"
    "_on_new_camera_image\0cv::Mat\0"
    "_on_resolution_change\0"
    "on_screen_combo_currentIndexChanged\0"
    "index\0on_camera_combo_currentIndexChanged\0"
    "on_output_dir_line_textEdited\0text\0"
    "on_capture_button_clicked\0"
    "on_output_dir_button_clicked\0"
    "on_test_check_stateChanged\0state\0"
    "on_test_prev_button_clicked\0"
    "on_test_next_button_clicked\0auto_next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a /* Public */,
       1,    0,  112,    2, 0x2a /* Public | MethodCloned */,
       4,    1,  113,    2, 0x0a /* Public */,
       6,    1,  116,    2, 0x0a /* Public */,
       8,    1,  119,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x0a /* Public */,
      11,    1,  123,    2, 0x0a /* Public */,
      13,    1,  126,    2, 0x0a /* Public */,
      14,    1,  129,    2, 0x0a /* Public */,
      16,    1,  132,    2, 0x0a /* Public */,
      16,    0,  135,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  136,    2, 0x0a /* Public */,
      17,    0,  139,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  140,    2, 0x0a /* Public */,
      20,    1,  143,    2, 0x0a /* Public */,
      20,    0,  146,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  147,    2, 0x0a /* Public */,
      21,    0,  150,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  151,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QPixmap,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CaptureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CaptureDialog *_t = static_cast<CaptureDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_cancel_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_close_cancel_button_clicked(); break;
        case 2: _t->_on_root_dir_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->_on_new_projector_image((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 4: _t->_on_new_camera_image((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 5: _t->_on_resolution_change(); break;
        case 6: _t->on_screen_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_camera_combo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_output_dir_line_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_capture_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_capture_button_clicked(); break;
        case 11: _t->on_output_dir_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_output_dir_button_clicked(); break;
        case 13: _t->on_test_check_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_test_prev_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_test_prev_button_clicked(); break;
        case 16: _t->on_test_next_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_test_next_button_clicked(); break;
        case 18: _t->auto_next(); break;
        default: ;
        }
    }
}

const QMetaObject CaptureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CaptureDialog.data,
      qt_meta_data_CaptureDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CaptureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CaptureDialog"))
        return static_cast< Ui::CaptureDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int CaptureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
