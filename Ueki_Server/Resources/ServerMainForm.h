/* 
 * File:   ServerMainForm.h
 * Author: denis
 *
 * Created on 17 de agosto de 2012, 13:54
 */

#ifndef _SERVERMAINFORM_H
#define	_SERVERMAINFORM_H

#include "ui_ServerMainForm.h"
#include "UekiServerConnectionHandler.h"
#include <QMessageBox>

class ServerMainForm : public QDialog {
    Q_OBJECT
public:
    ServerMainForm();
    virtual ~ServerMainForm();
private:
    Ui::ServerMainForm widget;
    UekiServerConnectionHandler conServer;
};

#endif	/* _SERVERMAINFORM_H */
