#include <QtTest>
#include <QCoreApplication>

#include "helloTest.h"
// #include "DataBaseTest.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    NumberConverterTest a;
//    DataBaseTest dataBaseTest;

    QTest::qExec(&a, argc, argv);
    // QTest::qExec(&dataBaseTest, argc, argv);

    return 0;
}
