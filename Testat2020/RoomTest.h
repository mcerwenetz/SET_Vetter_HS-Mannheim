#ifndef ROOM_TEST
#define ROOM_TEST

#include <QtTest>
#include <QString>
#include <QDebug>
#include "room.h"

class RoomTest : public QObject
{
    Q_OBJECT


private slots:

    //Defaultwerte werden gecheckt
    void defaultTest(){
        Room a;
        QVERIFY(a.name() == "Unknown");
        QVERIFY(a.volume() == 0);
        QVERIFY(a.active()==false);
        QVERIFY(a.temperature() == 0);
        QVERIFY(a.targetTemperature() == 20);
        QVERIFY(a.powerdemand()==0);
    }

    //Min-max wird gecheckt
    void minmaxTest(){
        Room a;
        //max
        a.setVolume(5001);
        a.setTemperature(71);
        a.setTargetTemperature(71);
        QVERIFY(a.volume()==5000);
        QVERIFY(a.temperature()==70);
        QVERIFY(a.targetTemperature()==70);
        //min
        //temperature < 0 muss nicht abgefangen werden
        a.setVolume(-1);
        a.setTargetTemperature(-1);
        QVERIFY(a.volume()==0);
        QVERIFY(a.targetTemperature()==0);
    }

    //powerdemand mit richtigen werten checken
    void checkPowerdemand(){
        Room a;
        a.setActive(true);
        a.setVolume(10);
        a.setTemperature(19);
        QVERIFY(qFuzzyCompare(a.powerdemand(),160));
    }

    //nametest
    void nametest(){
        Room a;
        a.setName("Dasisteinzulangername");
        QCOMPARE(a.name(), QString("Dasisteinzulangernam"));
//        QVERIFY(a.name() == "Dasisteinzulangernam");
        a.setName("a");
        QCOMPARE(a.name(), QString("Unknown"));
        a.setName("raum");
        QCOMPARE(a.name(), QString("Raum"));
    }

    //signal test
    void testSignal(){
            Room a;
            connect(&a, &Room::powerChanged, [&](){
                qDebug() << "signal empfangen";
            });
            a.setActive(true);
            a.setTemperature(5);
            a.setVolume(1);
        }

};

#endif // PATIENT_TEST_H
