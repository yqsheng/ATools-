/****************************************************************************
** Meta object code from reading C++ file 'MainFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../MainFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CMainFrame_t {
    QByteArrayData data[25];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainFrame_t qt_meta_stringdata_CMainFrame = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CMainFrame"
QT_MOC_LITERAL(1, 11, 7), // "NewFile"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "CloseFile"
QT_MOC_LITERAL(4, 30, 11), // "SetLanguage"
QT_MOC_LITERAL(5, 42, 8), // "QAction*"
QT_MOC_LITERAL(6, 51, 6), // "action"
QT_MOC_LITERAL(7, 58, 16), // "SwitchFullscreen"
QT_MOC_LITERAL(8, 75, 10), // "fullscreen"
QT_MOC_LITERAL(9, 86, 8), // "OpenFile"
QT_MOC_LITERAL(10, 95, 12), // "SetEncrypted"
QT_MOC_LITERAL(11, 108, 9), // "encrypted"
QT_MOC_LITERAL(12, 118, 5), // "About"
QT_MOC_LITERAL(13, 124, 7), // "AboutQt"
QT_MOC_LITERAL(14, 132, 6), // "SetKey"
QT_MOC_LITERAL(15, 139, 12), // "ShowListMenu"
QT_MOC_LITERAL(16, 152, 2), // "pt"
QT_MOC_LITERAL(17, 155, 11), // "DeleteFiles"
QT_MOC_LITERAL(18, 167, 8), // "SaveFile"
QT_MOC_LITERAL(19, 176, 10), // "SaveFileAs"
QT_MOC_LITERAL(20, 187, 8), // "AddFiles"
QT_MOC_LITERAL(21, 196, 12), // "ExtractFiles"
QT_MOC_LITERAL(22, 209, 15), // "ClientExtractor"
QT_MOC_LITERAL(23, 225, 11), // "SetViewMode"
QT_MOC_LITERAL(24, 237, 11) // "SetSortMode"

    },
    "CMainFrame\0NewFile\0\0CloseFile\0SetLanguage\0"
    "QAction*\0action\0SwitchFullscreen\0"
    "fullscreen\0OpenFile\0SetEncrypted\0"
    "encrypted\0About\0AboutQt\0SetKey\0"
    "ShowListMenu\0pt\0DeleteFiles\0SaveFile\0"
    "SaveFileAs\0AddFiles\0ExtractFiles\0"
    "ClientExtractor\0SetViewMode\0SetSortMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    1,  106,    2, 0x0a /* Public */,
       7,    1,  109,    2, 0x0a /* Public */,
       9,    0,  112,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    1,  119,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    0,  123,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x0a /* Public */,
      23,    1,  128,    2, 0x0a /* Public */,
      24,    1,  131,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void CMainFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMainFrame *_t = static_cast<CMainFrame *>(_o);
        switch (_id) {
        case 0: _t->NewFile(); break;
        case 1: _t->CloseFile(); break;
        case 2: _t->SetLanguage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->SwitchFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->OpenFile(); break;
        case 5: _t->SetEncrypted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->About(); break;
        case 7: _t->AboutQt(); break;
        case 8: _t->SetKey(); break;
        case 9: _t->ShowListMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->DeleteFiles(); break;
        case 11: _t->SaveFile(); break;
        case 12: _t->SaveFileAs(); break;
        case 13: _t->AddFiles(); break;
        case 14: _t->ExtractFiles(); break;
        case 15: _t->ClientExtractor(); break;
        case 16: _t->SetViewMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 17: _t->SetSortMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CMainFrame::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CMainFrame.data,
      qt_meta_data_CMainFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CMainFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CMainFrame.stringdata))
        return static_cast<void*>(const_cast< CMainFrame*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CMainFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
