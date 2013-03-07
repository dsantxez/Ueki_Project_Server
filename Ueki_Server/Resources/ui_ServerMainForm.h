/********************************************************************************
** Form generated from reading UI file 'ServerMainForm.ui'
**
** Created: Thu Mar 7 17:36:42 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMAINFORM_H
#define UI_SERVERMAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ServerMainForm
{
public:
    QLabel *label;
    QPushButton *startButton;
    QPushButton *quitButton;

    void setupUi(QDialog *ServerMainForm)
    {
        if (ServerMainForm->objectName().isEmpty())
            ServerMainForm->setObjectName(QString::fromUtf8("ServerMainForm"));
        ServerMainForm->resize(400, 300);
        label = new QLabel(ServerMainForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 381, 141));
        label->setLineWidth(0);
        startButton = new QPushButton(ServerMainForm);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(160, 270, 91, 24));
        quitButton = new QPushButton(ServerMainForm);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(290, 270, 91, 24));

        retranslateUi(ServerMainForm);
        QObject::connect(quitButton, SIGNAL(clicked()), ServerMainForm, SLOT(close()));

        QMetaObject::connectSlotsByName(ServerMainForm);
    } // setupUi

    void retranslateUi(QDialog *ServerMainForm)
    {
        ServerMainForm->setWindowTitle(QApplication::translate("ServerMainForm", "ServerMainForm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ServerMainForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("ServerMainForm", "Start", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ServerMainForm", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ServerMainForm: public Ui_ServerMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMAINFORM_H
