#ifndef HEATERCONTROLTEST_H
#define HEATERCONTROLTEST_H

#include <qobject.h>
#include <qtest.h>
#include "heatercontrol.h"
#include "room.h"


class HeaterControlTest : public QObject{
    Q_OBJECT;

private slots:
    //defaults check
    void checkDefaults(){
        HeaterControl h;
        QVERIFY(h.totalPowerDemand() == 0);
    }

    //check if powerdemand works correct
    void totalpowCheck(){
        Room r1;
        r1.setVolume(10);
        r1.setTemperature(19);
        r1.setActive(true);
        Room r2;
        r2.setVolume(10);
        r2.setTemperature(19);
        r2.setActive(true);
        HeaterControl h;
        h.add(&r1);
        h.add(&r2);
        QVERIFY(qFuzzyCompare(h.totalPowerDemand(),(160*2)));
    }

    //Todo:room already in test

};

#endif // HEATERCONTROLTEST_H
