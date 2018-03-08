#include <QGuiApplication>
#include <QtQuick>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    QScopedPointer<QQuickView> window(new QQuickView);
    window->engine()->addImportPath(":/");
    
    window->setSource(QUrl("qrc:/Main.qml"));
    window->show();

    return app.exec();
}
