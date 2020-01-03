#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "powersupply.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    PowerSupply* power = new PowerSupply;

//    qmlRegisterType<PowerSupply>("powersupply", 1, 0, "powersupply");
    QScopedPointer<QQmlApplicationEngine> engine (new QQmlApplicationEngine);
    engine->addImportPath(":/");
    engine->rootContext()->setContextProperty("powersupply", power);
    engine->load(QUrl("qrc:/main.qml"));
    return app.exec();
}
