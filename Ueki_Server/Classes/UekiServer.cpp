/* 
 * File:   FortuneServer.cpp
 * Author: denis
 * 
 * Created on March 7, 2013, 5:20 PM
 */

#include "UekiServer.h"
#include "UekiAccessServerThread.h"

UekiServer::UekiServer(QObject* parent) : QTcpServer(parent) {
}

void UekiServer::incomingConnection(int socketDescriptor)
 {
     UekiAccessServerThread *thread = new UekiAccessServerThread(socketDescriptor,this);
     connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
     thread->start();
 }

