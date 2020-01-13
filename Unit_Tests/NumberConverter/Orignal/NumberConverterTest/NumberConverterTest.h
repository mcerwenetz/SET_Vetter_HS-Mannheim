#ifndef NUMBER_CONVERTER_TEST
#define NUMBER_CONVERTER_TEST

#include <qttest>
#include <qstring>
#include "numberconverter.h"

class NumberConverterTest : public QObject
{
    Q_OBJECT
void checkcorrect(NumberConverter& a)
{
    QCOMPARE(a.bin(),"1.1001");
    QCOMPARE(a.dez(),"25");
    QCOMPARE(a.oct(),"31");
    QCOMPARE(a.hex(),"19");
}

private slots:

    void bincorrectSetTest()
    {
        NumberConverter a;
        a.setBin("11001");
        checkcorrect(a);
    }
    void hexcorrectSetTest()
    {
        NumberConverter a;
        a.setHex("19");
        checkcorrect(a);

    }
    void octcorrectSetTest()
    {
        NumberConverter a;
        a.setOct("31");
        checkcorrect(a);

    }
    void dezcorrectSetTest()
    {
        NumberConverter a;
        a.setDez("25");
        checkcorrect(a);
    }

//    void binformatTest()
//    {
//        NumberConverter a;
//        a.setBin("1.1111");
//        QCOMPARE(a.bin(),"11111");
//    }

    void binformatTest2()
    {
        NumberConverter a;
        a.setBin("1.1111.1111");
        QCOMPARE(a.bin(), QString("1.1111.1111"));
    }

    
};

#endif // PATIENT_TEST_H
