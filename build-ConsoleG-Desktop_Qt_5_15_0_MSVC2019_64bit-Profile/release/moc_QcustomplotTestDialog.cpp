/****************************************************************************
** Meta object code from reading C++ file 'QcustomplotTestDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ConsoleG/QcustomplotTestDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QcustomplotTestDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QcustomplotTestDialog_t {
    QByteArrayData data[10];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QcustomplotTestDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QcustomplotTestDialog_t qt_meta_stringdata_QcustomplotTestDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QcustomplotTestDialog"
QT_MOC_LITERAL(1, 22, 18), // "on_pbBasic_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "on_pbDecaySine_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_pbSincScatter_clicked"
QT_MOC_LITERAL(5, 90, 25), // "on_pbScatterStyle_clicked"
QT_MOC_LITERAL(6, 116, 23), // "on_pbStyledPlot_clicked"
QT_MOC_LITERAL(7, 140, 21), // "on_pbColormap_clicked"
QT_MOC_LITERAL(8, 162, 26), // "on_pbScatterPixmap_clicked"
QT_MOC_LITERAL(9, 189, 27) // "on_pbTrialQcpImshow_clicked"

    },
    "QcustomplotTestDialog\0on_pbBasic_clicked\0"
    "\0on_pbDecaySine_clicked\0"
    "on_pbSincScatter_clicked\0"
    "on_pbScatterStyle_clicked\0"
    "on_pbStyledPlot_clicked\0on_pbColormap_clicked\0"
    "on_pbScatterPixmap_clicked\0"
    "on_pbTrialQcpImshow_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QcustomplotTestDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QcustomplotTestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QcustomplotTestDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbBasic_clicked(); break;
        case 1: _t->on_pbDecaySine_clicked(); break;
        case 2: _t->on_pbSincScatter_clicked(); break;
        case 3: _t->on_pbScatterStyle_clicked(); break;
        case 4: _t->on_pbStyledPlot_clicked(); break;
        case 5: _t->on_pbColormap_clicked(); break;
        case 6: _t->on_pbScatterPixmap_clicked(); break;
        case 7: _t->on_pbTrialQcpImshow_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QcustomplotTestDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QcustomplotTestDialog.data,
    qt_meta_data_QcustomplotTestDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QcustomplotTestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QcustomplotTestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QcustomplotTestDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QcustomplotTestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
