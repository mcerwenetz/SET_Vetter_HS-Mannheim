#ifndef NAMETEST_H
#define NAMETEST_H

#include <QObject>
#include <QTest>
#include "name.h"

class NameTest : public QObject
{
    Q_OBJECT
public:
    explicit NameTest(QObject *parent = nullptr);

private slots:

    void testName(){
        Name a;
        QString sollwert="Rainer";
        connect(&a, &Name::nameChanged, [&](QString name){
            QCOMPARE(sollwert.toLower(),a.name());
            qDebug() << "signal" << name;
        });

        a.setName(sollwert);

    }


};

#endif // NAMETEST_H
