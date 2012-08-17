/* 
 * File:   UekiServerConnectionHandler.cpp
 * Author: denis
 * 
 * Created on 17 de agosto de 2012, 14:00
 */

#include "UekiServerConnectionHandler.h"

UekiServerConnectionHandler::UekiServerConnectionHandler(QObject* parent) : QTcpServer(parent){
    
}

void UekiServerConnectionHandler::incomingConnection(int socketDescriptor)
{
    
}

UekiServerConnectionHandler::~UekiServerConnectionHandler() {
}

