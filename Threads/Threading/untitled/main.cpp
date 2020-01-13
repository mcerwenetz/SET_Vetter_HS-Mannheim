#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "mythread.h"
#include <QtQml>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");

    MyThread a;
    engine->rootContext()->setContextProperty("myThread", &a);
    engine->load(QUrl("qrc:/main.qml"));

    a.start();
    return app.exec();
}
