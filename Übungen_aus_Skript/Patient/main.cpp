#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "patient.h"

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    Patient* p1 = new Patient;
    p1->setName("Müller");
    qmlRegisterType<Patient>("patient", 1,0,"Patient");
    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");
    engine->rootContext()->setContextProperty("patient1",p1);
    engine->load("qrc:/main.qml");

    return app.exec();

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
