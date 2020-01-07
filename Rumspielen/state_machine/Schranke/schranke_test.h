#ifndef SCHRANKE_TEST_H
#define SCHRANKE_TEST_H
#include "schranke.h"
#include <QtTest/QTest>

class Schranke_Test : public QObject{
    Q_OBJECT

private slots:

    void createSchranke(){
        //Schranke soll beim starten geschlossen sein
        Schranke a;
        QVERIFY((a.getState() == Schranke::sGeschlossen));
    }
    void oeffneSchranke(){
        //Schranke sollte geschlossen gestartet werden und nach oeffnen geöffnet sein
        Schranke a;
        a.oeffnen();
        QVERIFY(a.getState() == Schranke::sOffen);
    }
    void errorTestOffen(){
        //Schranke sollte beim erneuten oeffnen immer noch geoeffnet sein.
        //Dieser Test testet nicht den failed State. Vielleicht als enum einführen?
        Schranke a;
        a.oeffnen();
        a.oeffnen();
        QVERIFY(a.getState() == Schranke::sOffen);
    }
    void schliesseSchranke(){
        //Geoeffnete Schranke soll nach dem schließen geschlossen sein. Dafür muss sie erst geöffnet werden.
        Schranke a;
        a.oeffnen();
        a.schliessen();
        QVERIFY(a.getState() == Schranke::sGeschlossen);
    }
    void errorTestSchliessen(){
        //Doppeltes schließen sollte den state nicht ändern. Error wird nicht überprüft.
        Schranke a;
        a.schliessen();
        QVERIFY(a.getState() == Schranke::sGeschlossen);
    }
};

#endif // SCHRANKE_TEST_H
