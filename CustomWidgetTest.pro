#-------------------------------------------------
#
# Project created by QtCreator 2020-08-17T12:28:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CustomWidgetTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mycustomwidget.cpp

HEADERS  += mainwindow.h \
    mycustomwidget.h

FORMS    += mainwindow.ui \
    mycustomwidget.ui
