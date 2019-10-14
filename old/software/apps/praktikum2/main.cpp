#include <QGuiApplication>
#include <QtQuick>

// Main-Funktion
int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
	int a = 0;

    QScopedPointer<QQuickView> window(new QQuickView);
    window->engine()->addImportPath(":/");
    
    window->setSource(QUrl("qrc:/Main.qml"));
    window->show();

    return app.exec();
}
