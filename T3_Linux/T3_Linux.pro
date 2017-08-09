#-------------------------------------------------
#
# Project created by QtCreator 2017-08-04T16:06:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = T3_Linux
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
        main_desktop.cpp \
    settings.cpp \
    about.cpp \
    preview.cpp \
    adas.cpp \
    reverseline.cpp \
    timesetting.cpp \
    setfirst.cpp \
    dashboard.cpp \
    myspeed.cpp \
    moviedesk.cpp \
    videowidget.cpp \
    picturewidget.cpp \
    editwidget.cpp \
    rear_camera_setting.cpp \
    front_camera_setting.cpp \
    mylabel.cpp \
    rear_adas_setting.cpp \
    front_adas_setting.cpp

HEADERS += \
        main_desktop.h \
    settings.h \
    about.h \
    preview.h \
    adas.h \
    reverseline.h \
    timesetting.h \
    setfirst.h \
    dashboard.h \
    myspeed.h \
    moviedesk.h \
    videowidget.h \
    picturewidget.h \
    editwidget.h \
    rear_camera_setting.h \
    front_camera_setting.h \
    mylabel.h \
    rear_adas_setting.h \
    front_adas_setting.h

FORMS += \
        main_desktop.ui \
    settings.ui \
    about.ui \
    preview.ui \
    adas.ui \
    reverseline.ui \
    timesetting.ui \
    setfirst.ui \
    dashboard.ui \
    moviedesk.ui \
    videowidget.ui \
    picturewidget.ui \
    editwidget.ui \
    rear_camera_setting.ui \
    front_camera_setting.ui \
    rear_adas_setting.ui \
    front_adas_setting.ui

RESOURCES += \
    image.qrc


