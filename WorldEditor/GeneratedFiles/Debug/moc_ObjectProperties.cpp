/****************************************************************************
** Meta object code from reading C++ file 'ObjectProperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../ObjectProperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CObjectPropertiesDialog_t {
    QByteArrayData data[14];
    char stringdata[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CObjectPropertiesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CObjectPropertiesDialog_t qt_meta_stringdata_CObjectPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CObjectPropertiesDialog"
QT_MOC_LITERAL(1, 24, 14), // "SaveProperties"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "result"
QT_MOC_LITERAL(4, 47, 8), // "SetSpawn"
QT_MOC_LITERAL(5, 56, 5), // "spawn"
QT_MOC_LITERAL(6, 62, 13), // "SetSpawnCount"
QT_MOC_LITERAL(7, 76, 5), // "count"
QT_MOC_LITERAL(8, 82, 17), // "SetMoverCharacter"
QT_MOC_LITERAL(9, 100, 3), // "key"
QT_MOC_LITERAL(10, 104, 7), // "AddJob_"
QT_MOC_LITERAL(11, 112, 9), // "RemoveJob"
QT_MOC_LITERAL(12, 122, 19), // "SetMoverPatrolIndex"
QT_MOC_LITERAL(13, 142, 5) // "index"

    },
    "CObjectPropertiesDialog\0SaveProperties\0"
    "\0result\0SetSpawn\0spawn\0SetSpawnCount\0"
    "count\0SetMoverCharacter\0key\0AddJob_\0"
    "RemoveJob\0SetMoverPatrolIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CObjectPropertiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void CObjectPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CObjectPropertiesDialog *_t = static_cast<CObjectPropertiesDialog *>(_o);
        switch (_id) {
        case 0: _t->SaveProperties((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetSpawn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetSpawnCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetMoverCharacter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->AddJob_(); break;
        case 5: _t->RemoveJob(); break;
        case 6: _t->SetMoverPatrolIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CObjectPropertiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CObjectPropertiesDialog.data,
      qt_meta_data_CObjectPropertiesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CObjectPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CObjectPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CObjectPropertiesDialog.stringdata))
        return static_cast<void*>(const_cast< CObjectPropertiesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CObjectPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
