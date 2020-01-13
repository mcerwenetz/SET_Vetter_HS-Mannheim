#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "model.h"
#include "model_test.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    model* statemachine = new model;

//    qmlRegisterType<PowerSupply>("powersupply", 1, 0, "powersupply");
    QScopedPointer<QQmlApplicationEngine> engine (new QQmlApplicationEngine);
    engine->addImportPath(":/");
    engine->rootContext()->setContextProperty("statemachine", statemachine);
    engine->load(QUrl("qrc:/main.qml"));

    ModelTest modtest;
    QTest::qExec(&modtest, argc, argv);

    return app.exec();
}
