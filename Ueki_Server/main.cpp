/*
 * File:   main.cpp
 * Author: denis
 *
 * Created on August 9, 2012, 2:19 PM
 */

#include <QtGui/QApplication>

#include "ServerMainForm.h"



int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    //Start Running Server
    ServerMainForm serverForm;
    serverForm.show();

    return app.exec();
}
