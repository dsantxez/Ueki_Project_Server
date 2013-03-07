/* 
 * File:   ServerMainForm.h
 * Author: denis
 *
 * Created on March 7, 2013, 5:17 PM
 */

#ifndef _SERVERMAINFORM_H
#define	_SERVERMAINFORM_H

#include "ui_ServerMainForm.h"
#include "UekiServer.h"

class ServerMainForm : public QDialog {
    Q_OBJECT
public:
    ServerMainForm();
    virtual ~ServerMainForm();
private:
    Ui::ServerMainForm widget;
    UekiServer server;
public slots:
    void startServices();
};

#endif	/* _SERVERMAINFORM_H */
