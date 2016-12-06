/****************************************************************************
** Meta object code from reading C++ file 'schedulewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Documents/CS368/schedule/schedulewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schedulewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScheduleWidget_t {
    QByteArrayData data[15];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScheduleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScheduleWidget_t qt_meta_stringdata_ScheduleWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScheduleWidget"
QT_MOC_LITERAL(1, 15, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 48, 8), // "selected"
QT_MOC_LITERAL(5, 57, 18), // "showAddEntryDialog"
QT_MOC_LITERAL(6, 76, 8), // "addEntry"
QT_MOC_LITERAL(7, 85, 4), // "time"
QT_MOC_LITERAL(8, 90, 2), // "ID"
QT_MOC_LITERAL(9, 93, 4), // "room"
QT_MOC_LITERAL(10, 98, 5), // "model"
QT_MOC_LITERAL(11, 104, 4), // "info"
QT_MOC_LITERAL(12, 109, 7), // "weekday"
QT_MOC_LITERAL(13, 117, 9), // "editEntry"
QT_MOC_LITERAL(14, 127, 11) // "removeEntry"

    },
    "ScheduleWidget\0selectionChanged\0\0"
    "QItemSelection\0selected\0showAddEntryDialog\0"
    "addEntry\0time\0ID\0room\0model\0info\0"
    "weekday\0editEntry\0removeEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScheduleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    6,   43,    2, 0x0a /* Public */,
      13,    0,   56,    2, 0x0a /* Public */,
      14,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScheduleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScheduleWidget *_t = static_cast<ScheduleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 1: _t->showAddEntryDialog(); break;
        case 2: _t->addEntry((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 3: _t->editEntry(); break;
        case 4: _t->removeEntry(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScheduleWidget::*_t)(const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScheduleWidget::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ScheduleWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_ScheduleWidget.data,
      qt_meta_data_ScheduleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScheduleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScheduleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScheduleWidget.stringdata0))
        return static_cast<void*>(const_cast< ScheduleWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int ScheduleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ScheduleWidget::selectionChanged(const QItemSelection & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
