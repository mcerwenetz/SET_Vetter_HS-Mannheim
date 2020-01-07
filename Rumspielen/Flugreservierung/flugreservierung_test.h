#ifndef FLUGRESERVIERUNG_TEST_H
#define FLUGRESERVIERUNG_TEST_H

#include <QtTest>
#include "flugreservierung.h"

class FlugReservierungTest:public QObject{
    Q_OBJECT;

public:
    FlugReservierungTest(){

    }
    ~FlugReservierungTest(){

    }

private slots:
    void konstruktorTest(){
        Flugreservierung a;
        QVERIFY(a.getState() == Flugreservierung::sOhneReservierung);
    }

};
#endif // FLUGRESERVIERUNG_TEST_H
