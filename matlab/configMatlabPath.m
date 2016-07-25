topsrc_dir = $$PWD
apps_dir = $$PWD/apps
installers_dir = $$PWD/installers
libs_dir = $$PWD/libs
bundles_dir = $$PWD/bundles
modules_dir = $$PWD/modules
plugin_dir = $$PWD/plugin
qml_dir = $$PWD/qml
tests_dir = $$PWD/tests

QMAKEFEATURES += $$PWD/qmake
include($$PWD/qmake/buildsystem.prf)      #load feature file with buildsystem specific functions
