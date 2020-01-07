#include <iostream>
#include <QtTest>
#include "flugreservierung.h"
#include "flugreservierung_test.h"

using namespace std;

int main(int argc, char** argv)
{
    FlugReservierungTest a;
    QTest::qExec(&a, argc,argv);
}
