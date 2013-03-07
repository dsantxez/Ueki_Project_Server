/* 
 * File:   FortuneServer.h
 * Author: denis
 *
 * Created on March 7, 2013, 5:20 PM
 */

#ifndef FORTUNESERVER_H
#define	FORTUNESERVER_H

#include <QStringList>
#include <QTcpServer>

class UekiServer : public QTcpServer {
    Q_OBJECT
public:
     UekiServer(QObject *parent = 0);

 protected:
     void incomingConnection(int socketDescriptor);

 private:
     QStringList fortunes;
 };

#endif	/* FORTUNESERVER_H */

