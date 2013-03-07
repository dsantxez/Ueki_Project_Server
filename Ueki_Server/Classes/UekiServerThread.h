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

class UekiServerThread : public QThread{
    Q_OBJECT
public:
    UekiServerThread(int socketDescriptor, const QString &fortune, QObject *parent);

     void run();
     ~UekiServerThread();

 signals:
     void error(QTcpSocket::SocketError socketError);

 private:
     int socketDescriptor;
     QString text;
 };

#endif	/* FORTUNETHREAD_H */

