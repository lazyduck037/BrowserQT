#-------------------------------------------------
#
# Project created by QtCreator 2018-11-13T17:56:25
#
#-------------------------------------------------

QT       += core gui webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BrowserQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Tabs/ITabs.cpp \
    Menus/IMenu.cpp \
    Menus/MenuInit.cpp \
    Tabs/TabsInit.cpp \
    Browser/IBrowser.cpp \
    Browser/BrowserInit.cpp \
    Navigator/INavigator.cpp

HEADERS += \
        mainwindow.h \
    Tabs/ITabs.h \
    Menus/IMenu.h \
    Menus/MenuInit.h \
    Tabs/TabsInit.h \
    Browser/IBrowser.h \
    Browser/BrowserInit.h \
    Navigator/INavigator.h

FORMS += \
        mainwindow.ui
