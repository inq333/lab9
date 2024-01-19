QT -= gui

CONFIG += console
CONFIG -= app_bundle

TARGET = app
TEMPLATE = app

SOURCES += main.cpp

INCLUDEPATH += C:\Users\0-22\Documents\GitHub\lab9\objects
CONFIG(debug, debug|release) {
    LIBS += -LC:/Users/0-22/GitHub/Documents/build-lab9-5_15_10_MinGW_static-Debug/objects/debug -lobjects
}

CONFIG(release, debug|release) {
    LIBS += -LC:/Users/0-22/GitHub/Documents/build-lab9-5_15_10_MinGW_static-Debug/objects/release -lobjects
}
