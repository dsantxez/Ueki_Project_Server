# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Ueki_Server
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui network sql
SOURCES += Classes/UekiServerConnectionHandler.cpp Resources/ServerMainForm.cpp main.cpp
HEADERS += Classes/UekiServerConnectionHandler.h Resources/ServerMainForm.h
FORMS += Resources/ServerMainForm.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = ./Resources
RCC_DIR = ./Resources
UI_DIR = ./Resources
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += Classes 
LIBS += 
