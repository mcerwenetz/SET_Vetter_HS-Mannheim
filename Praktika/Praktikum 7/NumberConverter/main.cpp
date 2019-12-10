#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "numberconverter.h"

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    //This registers a type, not an object
    //If you want to register an Object you need to add an instance to root context. Look at the skript.
    qmlRegisterType<NumberConverter>("com.example.numberconverter",1,0, "NumberConverter");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
