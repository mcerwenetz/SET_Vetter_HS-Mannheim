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

    void forenameTest(){
        Patient p;

        const QString s1 = "AbCdEfG";
        const QString s2 = "Peter";

        p.set_forename(s1);
        QCOMPARE( p.get_forename(), s1);

        p.set_forename(s2);
        QVERIFY(p.get_forename() != s1);
        QCOMPARE( p.get_forename(), s2);

    }

    void familyNameTest(){
        Patient p;

        const QString s1 = "Kaiser";
        const QString s2 = "Müller";

        p.set_lastname(s1);
        QCOMPARE( p.get_lastname(), s1);

        p.set_lastname(s2);
        QVERIFY(p.get_lastname() != s1);
        QCOMPARE( p.get_lastname(), s2);
    }
};

#endif // PATIENT_TEST_H
