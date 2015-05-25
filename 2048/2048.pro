#-------------------------------------------------
#
# Project created by QtCreator 2015-05-24T00:50:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewindow.cpp \
    blank.cpp

HEADERS  += mainwindow.h \
    gamewindow.h \
    blank.h

FORMS    += mainwindow.ui \
    gamewindow.ui

RESOURCES += \
    pic.qrc
