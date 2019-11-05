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
       QCOMPARE(p.id(), 0);
       QVERIFY (p.forename() == "unknown");
       QVERIFY (p.familyName() == "unknown");
    }

    ///
    /// \brief idTest
    ///
    void idTest()
    {
        Patient p;
        p.setId( 10 );
        QCOMPARE( p.id(), 10);

        p.setId(1000);
        QCOMPARE( p.id(), 1000);

    }

    void forenameTest(){
        Patient p;

        const QString s1 = "AbCdEfG";
        const QString s2 = "Peter";

        p.setForename(s1);
        QCOMPARE( p.forename(), s1);

        p.setForename(s2);
        QVERIFY(p.forename() != s1);
        QCOMPARE( p.forename(), s2);

    }

    void familyNameTest(){
        Patient p;

        const QString s1 = "Kaiser";
        const QString s2 = "Müller";

        p.setFamilyName(s1);
        QCOMPARE( p.familyName(), s1);

        p.setFamilyName(s2);
        QVERIFY(p.familyName() != s1);
        QCOMPARE( p.familyName(), s2);
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

        p.setDateOfBirth(today);
        QCOMPARE(p.dateOfBirth(), today);

        p.setDateOfBirth(tomorrow);
        QCOMPARE(p.dateOfBirth(), tomorrow);

        p.setDateOfBirth(yesterday);
        QCOMPARE(p.dateOfBirth(), yesterday);

        p.setDateOfBirth(validDate);
        QCOMPARE(p.dateOfBirth(), validDate);

        p.setDateOfBirth(lastValidDate);
        QCOMPARE(p.dateOfBirth(), lastValidDate);

        p.setDateOfBirth(theDayAfterTomorrow);
        QVERIFY(p.dateOfBirth() != theDayAfterTomorrow);

        p.setDateOfBirth(firstInValidDate);
        QVERIFY(p.dateOfBirth() != firstInValidDate);


    }
};

#endif // PATIENT_TEST_H
