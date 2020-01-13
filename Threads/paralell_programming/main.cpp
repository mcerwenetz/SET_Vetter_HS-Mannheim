#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuick>
#include <QString>
#include "mythread.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");

    MyThread myThread;

    engine->rootContext()->setContextProperty("myThread", &myThread);
//    QObject::connect( &myThread, &MyThread::myresult, [&](QString result){qDebug() << result;});
    myThread.start();
    engine->load(QUrl("qrc:/main.qml"));


    return app.exec();
}
