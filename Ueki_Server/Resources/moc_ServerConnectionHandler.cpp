/****************************************************************************
** Meta object code from reading C++ file 'ServerConnectionHandler.h'
**
** Created: Thu Mar 7 17:15:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Classes/ServerConnectionHandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerConnectionHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerConnectionHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   24,   24,   24, 0x0a,
      74,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ServerConnectionHandler[] = {
    "ServerConnectionHandler\0\0status\0"
    "serverStarted(QString)\0acceptConnection()\0"
    "startRead()\0"
};

void ServerConnectionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServerConnectionHandler *_t = static_cast<ServerConnectionHandler *>(_o);
        switch (_id) {
        case 0: _t->serverStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->acceptConnection(); break;
        case 2: _t->startRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ServerConnectionHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ServerConnectionHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServerConnectionHandler,
      qt_meta_data_ServerConnectionHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServerConnectionHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServerConnectionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServerConnectionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerConnectionHandler))
        return static_cast<void*>(const_cast< ServerConnectionHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int ServerConnectionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ServerConnectionHandler::serverStarted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
