/* 
 * File:   UserHandler.h
 * Author: denis
 *
 * Created on August 9, 2012, 2:29 PM
 */

#ifndef USERHANDLER_H
#define	USERHANDLER_H

#include <QTcpServer>
#include <QThread>

class UserHandler: public QThread {
    Q_OBJECT
public:
    UserHandler();
    virtual ~UserHandler();
private:

};

#endif	/* USERHANDLER_H */

