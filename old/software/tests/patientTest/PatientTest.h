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

        QCOMPARE( 10, 10 );
    }

    ///
    /// \brief idTest
    ///
    void idTest()
    {

    }

};

#endif // PATIENT_TEST_H
