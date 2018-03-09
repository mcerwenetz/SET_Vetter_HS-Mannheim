#copy the executable to the source folder
DLLDESTDIR = $$_PRO_FILE_PWD_

#Include QML modules here that will be tested
QML_TEST_MODULE = $$apps_dir/exampleqtapplication/qml

#remove main files from other projects
SOURCES ~= s/.*main.cpp/

#setup test variables
OTHER_FILES += $$files($$PWD/tst_*.qml)
QML_TEST_FILES = $$files($$QML_TEST_MODULE/*.qml)

#setup qml copy 'compiler'
qml_module_cp.CONFIG = no_link
qml_module_cp.output = $$PWD/${QMAKE_FILE_BASE}.qml
qml_module_cp.commands = $(COPY) ${QMAKE_FILE_NAME} ${QMAKE_FILE_OUT}
qml_module_cp.input = QML_TEST_FILES
QMAKE_EXTRA_COMPILERS += qml_module_cp

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
