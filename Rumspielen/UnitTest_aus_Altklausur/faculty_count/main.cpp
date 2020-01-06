#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtTest>
#include "faculty_count.h"
#include "faculty_count_test.h"

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
    Faculty_Count_Test FacTest;
    QTest::qExec(&FacTest, argc, argv);
    return 0;

}
