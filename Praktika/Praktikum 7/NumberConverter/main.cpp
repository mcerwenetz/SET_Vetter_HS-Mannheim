#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "numberconverter.h"

int main(int argc, char *argv[])
{
    NumberConverter nbr;
    nbr.setBin("10");
    nbr.bin();
    nbr.dez();
    nbr.hex();
    nbr.oct();

//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    return app.exec();
}
