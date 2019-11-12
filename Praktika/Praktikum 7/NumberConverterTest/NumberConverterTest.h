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
    QCOMPARE(a.bin(),"1010");
    QCOMPARE(a.dez(),"10");
    QCOMPARE(a.oct(),"12");
    QCOMPARE(a.hex(),"a");
}

private slots:

    void bincorrectSetTest()
    {
        NumberConverter a;
        a.setBin("1010");
        checkcorrect(a);
    }
    void hexcorrectSetTest()
    {
        NumberConverter a;
        a.setHex("a");
        checkcorrect(a);

    }
    void octcorrectSetTest()
    {
        NumberConverter a;
        a.setOct("12");
        checkcorrect(a);

    }
    void dezcorrectSetTest()
    {
        NumberConverter a;
        a.setDez("10");
        checkcorrect(a);
    }

    
};

#endif // PATIENT_TEST_H
