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

    void dateOfBirthTest()
    {
        Patient p;

        const QDate today = QDate::currentDate();
        const QDate tomorrow = today.addDays(1);
        const QDate theDayAfterTomorrow = tomorrow.addDays(1);
        const QDate yesterday = today.addDays(-1);

        const QDate validDate = today.addYears(-3).addMonths(-3).addDays(-3);
        const QDate lastValidDate = today.addYears(-150);
        const QDate firstInValidDate = today.addYears(-150).addDays(-1);

        p.set_birthday(today);
        QCOMPARE(p.get_birthday(), today);

        p.set_birthday(tomorrow);
        QCOMPARE(p.get_birthday(), tomorrow);

        p.set_birthday(yesterday);
        QCOMPARE(p.get_birthday(), yesterday);

        p.set_birthday(validDate);
        QCOMPARE(p.get_birthday(), validDate);

        p.set_birthday(lastValidDate);
        QCOMPARE(p.get_birthday(), lastValidDate);

        p.set_birthday(theDayAfterTomorrow);
        QVERIFY(p.get_birthday() != theDayAfterTomorrow);

        p.set_birthday(firstInValidDate);
        QVERIFY(p.get_birthday() != firstInValidDate);


    }
};

#endif // PATIENT_TEST_H
