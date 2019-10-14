#include <QGuiApplication>
#include <QtQuick>
//#include <QSensorReading>

// Test
// Test2
//Test3
int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");
    
    engine->load(QUrl("qrc:/Main.qml"));

    return app.exec();
}
