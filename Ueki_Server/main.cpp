/*
 * File:   main.cpp
 * Author: denis
 *
 * Created on August 9, 2012, 2:19 PM
 */

#include <QtGui/QApplication>

#include "Classes/UserHandler.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    //Start the fight rings
    
    //Create&Start Handling Users
    UserHandler *userHandler = new UserHandler();
    userHandler->start();

    // create and show your widgets here

    return app.exec();
}
