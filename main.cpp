#include <QApplication>
#include <QGuiApplication>
#include "componentcreatorengine.h"
#include <QQmlContext>
#include <QDebug>


int main(int argc, char *argv[])
{
    // установка переменной окружения
    qputenv("MAIN_QML","qrc:/Main.qml");

    QGuiApplication app(argc, argv);

    ComponentCreatorEngine engine;

    engine.addImportPath("C:/QT_LESSONS/7_01_20025/component_library");

    engine.rootContext()->setContextProperty("QmlEngine", &engine);

    const QUrl url(qgetenv("MAIN_QML"));

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
