/****************************************************************************
** Meta object code from reading C++ file 'pageclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Qtproject/pageclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pageclient_t {
    QByteArrayData data[18];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pageclient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pageclient_t qt_meta_stringdata_pageclient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "pageclient"
QT_MOC_LITERAL(1, 11, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_pb_modifier_2_clicked"
QT_MOC_LITERAL(4, 61, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(5, 83, 22), // "handleMessageBoxResult"
QT_MOC_LITERAL(6, 106, 6), // "result"
QT_MOC_LITERAL(7, 113, 12), // "refreshTable"
QT_MOC_LITERAL(8, 126, 20), // "on_logoutpb4_clicked"
QT_MOC_LITERAL(9, 147, 21), // "on_logoutpb4_released"
QT_MOC_LITERAL(10, 169, 21), // "on_employe4pb_clicked"
QT_MOC_LITERAL(11, 191, 24), // "on_abonnement4pb_clicked"
QT_MOC_LITERAL(12, 216, 22), // "on_planning4pb_clicked"
QT_MOC_LITERAL(13, 239, 22), // "on_activite4pb_clicked"
QT_MOC_LITERAL(14, 262, 18), // "on_back4pb_clicked"
QT_MOC_LITERAL(15, 281, 19), // "on_back4pb_released"
QT_MOC_LITERAL(16, 301, 22), // "on_tab_clients_clicked"
QT_MOC_LITERAL(17, 324, 5) // "index"

    },
    "pageclient\0on_pb_supprimer_clicked\0\0"
    "on_pb_modifier_2_clicked\0on_pb_ajouter_clicked\0"
    "handleMessageBoxResult\0result\0"
    "refreshTable\0on_logoutpb4_clicked\0"
    "on_logoutpb4_released\0on_employe4pb_clicked\0"
    "on_abonnement4pb_clicked\0"
    "on_planning4pb_clicked\0on_activite4pb_clicked\0"
    "on_back4pb_clicked\0on_back4pb_released\0"
    "on_tab_clients_clicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pageclient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   17,

       0        // eod
};

void pageclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pageclient *_t = static_cast<pageclient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_supprimer_clicked(); break;
        case 1: _t->on_pb_modifier_2_clicked(); break;
        case 2: _t->on_pb_ajouter_clicked(); break;
        case 3: _t->handleMessageBoxResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->refreshTable(); break;
        case 5: _t->on_logoutpb4_clicked(); break;
        case 6: _t->on_logoutpb4_released(); break;
        case 7: _t->on_employe4pb_clicked(); break;
        case 8: _t->on_abonnement4pb_clicked(); break;
        case 9: _t->on_planning4pb_clicked(); break;
        case 10: _t->on_activite4pb_clicked(); break;
        case 11: _t->on_back4pb_clicked(); break;
        case 12: _t->on_back4pb_released(); break;
        case 13: _t->on_tab_clients_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pageclient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pageclient.data,
      qt_meta_data_pageclient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pageclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pageclient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pageclient.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pageclient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
