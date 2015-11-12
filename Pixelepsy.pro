#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T13:57:50
#
#-------------------------------------------------

QT       += core gui

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pixelepsy
TEMPLATE = app


SOURCES += main.cpp\
    gui/viewer.cpp \
    sprite/buffer.cpp \
    sprite/frame.cpp \
    sprite/sprite.cpp \
    gui/pixelepsy.cpp \
    gui/toolbox.cpp \
    tools/colorpicker.cpp \
    gui/canvas.cpp \
<<<<<<< HEAD
    gui/spriteview.cpp
=======
    sprite/spriteiterator.cpp \
    gui/spriteview.cpp \
    tools/pencil.cpp
>>>>>>> 3441241ab0cd94c3576fe8a8f5595c1c69c387dc

HEADERS  += \
    gui/viewer.h \
    sprite/buffer.h \
    sprite/frame.h \
    sprite/sprite.h \
    gui/pixelepsy.h \
    gui/toolbox.h \
    tools/tool.h \
    tools/colorpicker.h \
    gui/canvas.h \
<<<<<<< HEAD
    gui/spriteview.h
=======
    sprite/spriteiterator.h \
    gui/spriteview.h \
    tools/pencil.h
>>>>>>> 3441241ab0cd94c3576fe8a8f5595c1c69c387dc

FORMS    += pixelepsy.ui

debug:DESTDIR = debug/
debug:OBJECTS_DIR = debug/.obj
debug:MOC_DIR = debug/.moc
debug:RCC_DIR = debug/.rcc
debug:UI_DIR = debug/.ui
