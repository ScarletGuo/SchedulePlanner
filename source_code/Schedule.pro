#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T21:36:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Schedule
TEMPLATE = app


SOURCES   = adddialog.cpp \
            main.cpp \
            mainwindow.cpp \
            tablemodel.cpp \
    schedulewidget.cpp \
    newscheduletab.cpp
HEADERS   = adddialog.h \
            mainwindow.h \
            tablemodel.h \
    schedulewidget.h \
    newscheduletab.h

FORMS    += mainwindow.ui
