/* 
 * File:   FortuneServer.cpp
 * Author: denis
 * 
 * Created on March 7, 2013, 5:20 PM
 */

#include "UekiServer.h"
#include "UekiServerThread.h"

UekiServer::UekiServer(QObject* parent) : QTcpServer(parent) {
}

void UekiServer::incomingConnection(int socketDescriptor)
 {
     QString fortune = fortunes.at(qrand() % fortunes.size());
     UekiServerThread *thread = new UekiServerThread(socketDescriptor, fortune, this);
     connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
     thread->start();
 }

