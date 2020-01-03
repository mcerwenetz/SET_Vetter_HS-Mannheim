#copy the executable to the source folder
DLLDESTDIR = $$_PRO_FILE_PWD_

#Include modules here that will be tested
include($$PWD\..\NumberConverter\numberconverter.pri)

#Include project files
INCLUDEPATH += $$PWD

SOURCES +=  main.cpp

HEADERS +=  NumberConverterTest.h

RESOURCES += 

OTHER_FILES += 

#additional Qt modules
# QT += 

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH += $$qml_dir
QML_IMPORT_PATH += $$plugin_dir

#use c++11 compiler flags
CONFIG += c++11 

#test lib flags
CONFIG += qmltestcase buildsystem
QT += testlib

