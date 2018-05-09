#copy the executable to the source folder
DLLDESTDIR = $$_PRO_FILE_PWD_

#Include modules here that will be tested

APP_DIR = $$apps_dir/praktikum1
SOURCES += $$files($$APP_DIR/*.cpp)
HEADERS += $$files($$APP_DIR/*.h)
INCLUDEPATH += $$APP_DIR

#remove main files from other projects
SOURCES ~= s/.*main.cpp/

#Include project files
INCLUDEPATH += $$PWD

SOURCES += main.cpp

HEADERS += praktikum1test.h

RESOURCES += 

OTHER_FILES += 

#additional Qt modules
QT += quick qml

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH += $$qml_dir
QML_IMPORT_PATH += $$plugin_dir

#use c++11 compiler flags
CONFIG += c++11 

#test lib flags
CONFIG += qmltestcase
QT += testlib
