/*
 * File:   ServerMainForm.cpp
 * Author: denis
 *
 * Created on March 7, 2013, 5:17 PM
 */

#include "ServerMainForm.h"
#include <QMessageBox>
#include <QNetworkInterface>

ServerMainForm::ServerMainForm() {
    widget.setupUi(this);
    connect(widget.startButton,SIGNAL(clicked()),this,SLOT(startServices()));
}

void ServerMainForm::startServices()
{
    if (!server.listen()) {
         QMessageBox::critical(this, tr("Threaded Ueki Server"),
                               tr("Unable to start the server: %1.")
                               .arg(server.errorString()));
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
                             "Run the Ueki Client  now.")
                          .arg(ipAddress).arg(server.serverPort()));
}

ServerMainForm::~ServerMainForm() {
}
