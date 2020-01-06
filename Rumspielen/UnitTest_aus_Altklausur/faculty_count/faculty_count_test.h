#ifndef FACULTY_COUNT_TEST_H
#define FACULTY_COUNT_TEST_H

#include "faculty_count.h"
#include <QDebug>
#include <QtTest>

class Faculty_Count_Test : public QObject
{
    Q_OBJECT

private slots:

    void factest(){
    Faculty_Count a;
    QVERIFY(a.get_fac(8) ==40320);
    }

};

#endif // FACULTY_COUNT_TEST_H
