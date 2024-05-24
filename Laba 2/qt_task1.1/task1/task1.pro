QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change.cpp \
    dateinfo.cpp \
    deletewindow.cpp \
    fioinfo.cpp \
    list.cpp \
    main.cpp \
    mainwindow.cpp \
    numberchenget.cpp \
    otdelinfo.cpp \
    pushbackelement.cpp

HEADERS += \
    change.h \
    dateinfo.h \
    deletewindow.h \
    fioinfo.h \
    list.h \
    mainwindow.h \
    numberchenget.h \
    otdelinfo.h \
    pushbackelement.h

FORMS += \
    change.ui \
    dateinfo.ui \
    deletewindow.ui \
    fioinfo.ui \
    mainwindow.ui \
    numberchenget.ui \
    otdelinfo.ui \
    pushbackelement.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
