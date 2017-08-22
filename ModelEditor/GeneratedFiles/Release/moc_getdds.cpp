/****************************************************************************
** Meta object code from reading C++ file 'getdds.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../getdds.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getdds.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_getdds_t {
    QByteArrayData data[7];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_getdds_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_getdds_t qt_meta_stringdata_getdds = {
    {
QT_MOC_LITERAL(0, 0, 6), // "getdds"
QT_MOC_LITERAL(1, 7, 11), // "get_rely_on"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "get_resource_path"
QT_MOC_LITERAL(4, 38, 15), // "get_client_path"
QT_MOC_LITERAL(5, 54, 14), // "list_model_fuc"
QT_MOC_LITERAL(6, 69, 16) // "save_all_rely_on"

    },
    "getdds\0get_rely_on\0\0get_resource_path\0"
    "get_client_path\0list_model_fuc\0"
    "save_all_rely_on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_getdds[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void getdds::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        getdds *_t = static_cast<getdds *>(_o);
        switch (_id) {
        case 0: _t->get_rely_on(); break;
        case 1: _t->get_resource_path(); break;
        case 2: _t->get_client_path(); break;
        case 3: _t->list_model_fuc(); break;
        case 4: _t->save_all_rely_on(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject getdds::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_getdds.data,
      qt_meta_data_getdds,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *getdds::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *getdds::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_getdds.stringdata))
        return static_cast<void*>(const_cast< getdds*>(this));
    return QDialog::qt_metacast(_clname);
}

int getdds::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
