#ifndef COMPONENTCREATORENGINE_H
#define COMPONENTCREATORENGINE_H
#include <QQmlApplicationEngine>
#include "filewatcher.h"


class ComponentCreatorEngine : public QQmlApplicationEngine
{
    Q_OBJECT

public:
    ComponentCreatorEngine(QObject *parent = nullptr);

     Q_INVOKABLE void clearCashe();

private:
    FileWatcher* m_fileWatcher;

Q_SIGNALS:
    void reloadUI();

};

#endif // COMPONENTCREATORENGINE_H
