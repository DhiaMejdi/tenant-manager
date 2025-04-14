QT       += core gui sql
QT += printsupport
QT += charts
QT += core gui network  # Add 'network' here
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

SOURCES += \
    addadmindialog.cpp \
    connection.cpp \
    dialog.cpp \
    loca.cpp \
    logger.cpp \
    main.cpp \
    mainwindow.cpp \
    qrcodegen.cpp  # Corrected the missing comma
HEADERS += \
    addadmindialog.h \
    connection.h \
    dialog.h \
    loca.h \
    logger.h \
    mainwindow.h \
    qrcodegen.hpp  # Make sure qrcodegen.hpp is in the correct directory

FORMS += \
    addadmindialog.ui \
    dialog.ui \
    mainwindow.ui
