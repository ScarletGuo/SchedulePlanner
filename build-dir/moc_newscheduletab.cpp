/****************************************************************************
** Meta object code from reading C++ file 'newscheduletab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Documents/CS368/schedule/newscheduletab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newscheduletab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewScheduleTab_t {
    QByteArrayData data[10];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewScheduleTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewScheduleTab_t qt_meta_stringdata_NewScheduleTab = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NewScheduleTab"
QT_MOC_LITERAL(1, 15, 11), // "sendDetails"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "time"
QT_MOC_LITERAL(4, 33, 2), // "ID"
QT_MOC_LITERAL(5, 36, 4), // "room"
QT_MOC_LITERAL(6, 41, 5), // "model"
QT_MOC_LITERAL(7, 47, 4), // "info"
QT_MOC_LITERAL(8, 52, 7), // "weekday"
QT_MOC_LITERAL(9, 60, 8) // "addEntry"

    },
    "NewScheduleTab\0sendDetails\0\0time\0ID\0"
    "room\0model\0info\0weekday\0addEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewScheduleTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NewScheduleTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewScheduleTab *_t = static_cast<NewScheduleTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 1: _t->addEntry(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NewScheduleTab::*_t)(QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewScheduleTab::sendDetails)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NewScheduleTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NewScheduleTab.data,
      qt_meta_data_NewScheduleTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewScheduleTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewScheduleTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewScheduleTab.stringdata0))
        return static_cast<void*>(const_cast< NewScheduleTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int NewScheduleTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NewScheduleTab::sendDetails(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
