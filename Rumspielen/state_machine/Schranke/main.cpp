#include <QGuiApplication>
#include <QtTest>
#include "schranke.h"
#include "schranke_test.h"
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
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
    Schranke_Test schratest;
    QTest::qExec(&schratest, argc, argv);
    return 0;
}