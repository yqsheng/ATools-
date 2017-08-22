/****************************************************************************
** Meta object code from reading C++ file 'ModelViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../ModelViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CModelViewer_t {
    QByteArrayData data[10];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CModelViewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CModelViewer_t qt_meta_stringdata_CModelViewer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CModelViewer"
QT_MOC_LITERAL(1, 13, 8), // "SetFrame"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "frame"
QT_MOC_LITERAL(4, 29, 11), // "ShowModel3D"
QT_MOC_LITERAL(5, 41, 4), // "show"
QT_MOC_LITERAL(6, 46, 12), // "SetModelRotX"
QT_MOC_LITERAL(7, 59, 5), // "value"
QT_MOC_LITERAL(8, 65, 12), // "SetModelRotY"
QT_MOC_LITERAL(9, 78, 12) // "SetModelRotZ"

    },
    "CModelViewer\0SetFrame\0\0frame\0ShowModel3D\0"
    "show\0SetModelRotX\0value\0SetModelRotY\0"
    "SetModelRotZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CModelViewer[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void CModelViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CModelViewer *_t = static_cast<CModelViewer *>(_o);
        switch (_id) {
        case 0: _t->SetFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ShowModel3D((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetModelRotX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SetModelRotY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetModelRotZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CModelViewer::staticMetaObject = {
    { &CD3DWidget::staticMetaObject, qt_meta_stringdata_CModelViewer.data,
      qt_meta_data_CModelViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CModelViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CModelViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CModelViewer.stringdata))
        return static_cast<void*>(const_cast< CModelViewer*>(this));
    return CD3DWidget::qt_metacast(_clname);
}

int CModelViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CD3DWidget::qt_metacall(_c, _id, _a);
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
