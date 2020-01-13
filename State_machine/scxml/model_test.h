#ifndef MODEL_TEST_H
#define MODEL_TEST_H

#include "model.h"
#include <QDebug>
#include <QtTest>

class ModelTest : public QObject
{
    Q_OBJECT

private slots:

    void checkIfonByDefault()
    {
        model a;
        a.submitEvent("ausschalten");
//        QStringList list{"an"};
//        foreach(QString b, list){
//        }
        qDebug() << a.activeStateNames().size();
    }
//    void checkIfon()
//    {
//        model a;
//        QStringList list{"aus"};
//        a.submitEvent("ausschalten");
//        QVERIFY(list == a.activeStateNames());
//    }
//    void checkIfoff()
//    {
//        model a;
//        QStringList list{"an"};
//        a.submitEvent("ausschalten");
//        a.submitEvent("anschalten");
//        QVERIFY(list == a.activeStateNames());
//    }
};

#endif // MODEL_TEST_H
