QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    main.cpp \
    login.cpp \
    nachrichten.cpp \
    professor.cpp \
    register.cpp \
    student.cpp

HEADERS += \
    chat.h \
    login.h \
    nachrichten.h \
    professor.h \
    register.h \
    student.h

FORMS += \
    chat.ui \
    login.ui \
    nachrichten.ui \
    professor.ui \
    register.ui \
    student.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
