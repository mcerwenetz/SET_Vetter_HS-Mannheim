#copy the executable to the source folder
DLLDESTDIR = $$_PRO_FILE_PWD_

#Include QML modules here that will be tested
QML_TEST_MODULE = $$apps_dir/exampleqtapplication/qml

#remove main files from other projects
SOURCES ~= s/.*main.cpp/

#setup test variables
OTHER_FILES += $$files($$QML_TEST_MODULE/tst_*.qml)
DEFINES += QML_TEST_MODULE=\\\"$$QML_TEST_MODULE\\\"

#Include project files
INCLUDEPATH += $$PWD

SOURCES += \
        main.cpp

HEADERS += \

RESOURCES += \

#additional Qt modules
QT += quick qml

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH += $$qml_dir
QML_IMPORT_PATH += $$plugin_dir
QML_IMPORT_PATH += $$QML_TEST_MODULE

#use c++11 compiler flags
CONFIG += c++11 

#test lib flags
CONFIG += qmltestcase
