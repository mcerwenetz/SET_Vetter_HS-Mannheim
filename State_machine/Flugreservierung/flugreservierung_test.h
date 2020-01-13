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
    //Funktionstest
    void konstruktorTest(){
        Flugreservierung a;
        QVERIFY(a.getState() == Flugreservierung::sOhneReservierung);
    }
    void einmalreservierenTest(){
        Flugreservierung a;
        a.reservieren();
        QVERIFY(a.getState() == Flugreservierung::sTeilweiseReserviert);
        QVERIFY(a.getreserviert() == 1);
    }
    void vollausbuchenTest(){
        Flugreservierung a;
        for(int i=0; i < 30; i++)
        {
            a.reservieren();
        }
//        qDebug() << a.getreserviert() << endl;
        QVERIFY(a.getState() == Flugreservierung::sAusgebucht);
    }
    void stornierenTest(){
        Flugreservierung a;
        a.reservieren();
        a.stornieren();
        QVERIFY(a.getState() == Flugreservierung::sOhneReservierung);
        QVERIFY(a.getreserviert() == 0);
    }

    void schliessenAusTeilweise(){
        Flugreservierung a;
        a.reservieren();
        a.schliessen();
        QVERIFY(a.getState() == Flugreservierung::sGeschlossen);
    }
    void schliessenAusAusgebucht(){
        Flugreservierung a;
        for(int i=0; i < 30; i++)
        {
            a.reservieren();
        }
        a.schliessen();
        QVERIFY(a.getState() == Flugreservierung::sGeschlossen);
    }
    //Systemtests. Dinge die nicht passieren sollen.
    void mehrSchliessenAlsOeffnen(){
        Flugreservierung a;
        a.reservieren();
        a.stornieren();
        a.stornieren();
    }
    void mehrReservierenAlsDaIst(){
        Flugreservierung a;
        for(int i=0; i < 31; i++)
        {
            a.reservieren();
        }
    }
    void ohneReservierungSchliessen(){
        Flugreservierung a;
        a.schliessen();
    }

};
#endif // FLUGRESERVIERUNG_TEST_H
