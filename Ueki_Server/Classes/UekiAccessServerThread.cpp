/* 
 * File:   FortuneThread.cpp
 * Author: denis
 * 
 * Created on March 7, 2013, 5:23 PM
 */

#include "UekiAccessServerThread.h"
#include <QtNetwork>

UekiAccessServerThread::UekiAccessServerThread(int socketDescriptor, QObject *parent)
     : QThread(parent), socketDescriptor(socketDescriptor)
 {
 }

 void UekiAccessServerThread::run()
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
     out.device()->seek(0);
     out << (quint16)(block.size() - sizeof(quint16));

     tcpSocket.write(block);
     tcpSocket.disconnectFromHost();
     tcpSocket.waitForDisconnected();
 }
UekiAccessServerThread::~UekiAccessServerThread() {
}

