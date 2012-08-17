/* 
 * File:   UekiServerConnectionHandler.h
 * Author: denis
 *
 * Created on 17 de agosto de 2012, 14:00
 */

#ifndef UEKISERVERCONNECTIONHANDLER_H
#define	UEKISERVERCONNECTIONHANDLER_H

#include <QTcpServer>

class UekiServerConnectionHandler : public QTcpServer {
    Q_OBJECT
public:
    UekiServerConnectionHandler(QObject *parent = 0);
    virtual ~UekiServerConnectionHandler();
protected:
    void incomingConnection(int socketDescriptor);
private:
    //list of handlres

};

#endif	/* UEKISERVERCONNECTIONHANDLER_H */

