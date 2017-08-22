/****************************************************************************
** Meta object code from reading C++ file 'NewWorld.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../NewWorld.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewWorld.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CTextureWidget_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTextureWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTextureWidget_t qt_meta_stringdata_CTextureWidget = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CTextureWidget"

    },
    "CTextureWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTextureWidget[] = {

 // content:
       7,       // revision
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

void CTextureWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CTextureWidget::staticMetaObject = {
    { &CD3DWidget::staticMetaObject, qt_meta_stringdata_CTextureWidget.data,
      qt_meta_data_CTextureWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CTextureWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTextureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CTextureWidget.stringdata))
        return static_cast<void*>(const_cast< CTextureWidget*>(this));
    return CD3DWidget::qt_metacast(_clname);
}

int CTextureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CD3DWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CDialogNewWorld_t {
    QByteArrayData data[5];
    char stringdata[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDialogNewWorld_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDialogNewWorld_t qt_meta_stringdata_CDialogNewWorld = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CDialogNewWorld"
QT_MOC_LITERAL(1, 16, 13), // "SelectTexture"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "texture"
QT_MOC_LITERAL(4, 39, 10) // "OpenBitmap"

    },
    "CDialogNewWorld\0SelectTexture\0\0texture\0"
    "OpenBitmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDialogNewWorld[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void CDialogNewWorld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDialogNewWorld *_t = static_cast<CDialogNewWorld *>(_o);
        switch (_id) {
        case 0: _t->SelectTexture((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OpenBitmap(); break;
        default: ;
        }
    }
}

const QMetaObject CDialogNewWorld::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDialogNewWorld.data,
      qt_meta_data_CDialogNewWorld,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDialogNewWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDialogNewWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDialogNewWorld.stringdata))
        return static_cast<void*>(const_cast< CDialogNewWorld*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDialogNewWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
