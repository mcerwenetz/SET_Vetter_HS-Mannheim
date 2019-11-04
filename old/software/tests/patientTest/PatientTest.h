#ifndef PATIENT_TEST_H
#define PATIENT_TEST_H

#include <QtTest>
#include <QString>
#include "patient.h"

///
/// \brief The PatientTest class
///
class PatientTest : public QObject
{
    Q_OBJECT

private slots:

    ///
    /// \brief constructorTest
    ///
    void constructorTest()
    {

       Patient p;
       QCOMPARE(p.get_id(), 0);
       QVERIFY (p.get_forename() == "unknown");
       QVERIFY (p.get_lastname() == "unknown");
    }

    ///
    /// \brief idTest
    ///
    void idTest()
    {
        Patient p;
        p.set_id( 10 );
        QCOMPARE( p.get_id(), 10);

        p.set_id(1000);
        QCOMPARE( p.get_id(), 1000);

    }

};

#endif // PATIENT_TEST_H
