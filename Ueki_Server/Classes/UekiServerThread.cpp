/* 
 * File:   FortuneThread.cpp
 * Author: denis
 * 
 * Created on March 7, 2013, 5:23 PM
 */

#include "UekiServerThread.h"
#include <QtNetwork>

UekiServerThread::UekiServerThread(int socketDescriptor, const QString &fortune, QObject *parent)
     : QThread(parent), socketDescriptor(socketDescriptor), text(fortune)
 {
 }

 void UekiServerThread::run()
 {
     QTcpSocket tcpSocket;
     if (!tcpSocket.setSocketDescriptor(socketDescriptor)) {
         emit error(tcpSocket.error());
         return;
     }

     QByteArray block;
     QDataStream out(&block, QIODevice::WriteOnly);
     out.setVersion(QDataStream::Qt_4_0);
     out << (quint16)0;
     out << text;
     out.device()->seek(0);
     out << (quint16)(block.size() - sizeof(quint16));

     tcpSocket.write(block);
     tcpSocket.disconnectFromHost();
     tcpSocket.waitForDisconnected();
 }
UekiServerThread::~UekiServerThread() {
}

