QT       += core gui sql
QT += printsupport
QT += charts
QT += core gui network  # Add 'network' here
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

SOURCES += \
    connection.cpp \
    dialog.cpp \
    loca.cpp \
    main.cpp \
    mainwindow.cpp \
    qrcodegen.cpp  # Corrected the missing comma

HEADERS += \
    connection.h \
    dialog.h \
    loca.h \
    mainwindow.h \
    qrcodegen.hpp  # Make sure qrcodegen.hpp is in the correct directory

FORMS += \
    dialog.ui \
    mainwindow.ui
