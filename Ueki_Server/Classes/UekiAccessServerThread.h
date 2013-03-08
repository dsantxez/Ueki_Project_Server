/* 
 * File:   FortuneThread.h
 * Author: denis
 *
 * Created on March 7, 2013, 5:23 PM
 */

#ifndef FORTUNETHREAD_H
#define	FORTUNETHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QHash>

class UekiAccessServerThread : public QThread{
    Q_OBJECT
public:
    UekiAccessServerThread(int socketDescriptor, QObject *parent);

     void run();
     ~UekiAccessServerThread();

 signals:
     void error(QTcpSocket::SocketError socketError);

 private:
     int socketDescriptor;
     QHash<QString,QString> users;
 };

#endif	/* FORTUNETHREAD_H */

