/*
 * File:   ServerMainForm.cpp
 * Author: denis
 *
 * Created on 17 de agosto de 2012, 13:54
 */

#include "ServerMainForm.h"
#include <QHostAddress>
#include <QNetworkInterface>
#include <QString>

ServerMainForm::ServerMainForm() {
    widget.setupUi(this);
    if(!conServer.listen())
    {
        QMessageBox::critical(this,tr("Ueki Battle Server"),tr("Unable to start the server: %1").arg(conServer.errorString()));
        close();
        return;
    }
    
    QString ipAddress;
     QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
     // use the first non-localhost IPv4 address
     for (int i = 0; i < ipAddressesList.size(); ++i) {
         if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
             ipAddressesList.at(i).toIPv4Address()) {
             ipAddress = ipAddressesList.at(i).toString();
             break;
         }
     }
     // if we did not find one, use IPv4 localhost
     if (ipAddress.isEmpty())
         ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
     widget.label->setText(tr("The server is running on\n\nIP: %1\nport: %2\n\n"
                             "Accepting Connections from Ueki Battle Clients now.")
                          .arg(ipAddress).arg(conServer.serverPort()));
    
}

ServerMainForm::~ServerMainForm() {
}
