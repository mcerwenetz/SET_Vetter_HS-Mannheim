#ifndef NUMBER_CONVERTER_TEST
#define NUMBER_CONVERTER_TEST

#include <qttest>
#include <qstring>
#include "hello.h"

class NumberConverterTest : public QObject
{
    Q_OBJECT


private slots:

    void helloTest(){
        Hello a;
        QString stringtoset = "Hallo";
        a.setString(stringtoset);
        QCOMPARE(a.string(), stringtoset);

    }

//    void binformatTest()
//    {
//        NumberConverter a;
//        a.setBin("1.1111");
//        QCOMPARE(a.bin(),"11111");
//    }

//    void binformatTest2()
//    {
//        NumberConverter a;
//        a.setBin("1.1111.1111");
//        QCOMPARE(a.bin(), QString("1.1111.1111"));
//    }

    
};

#endif // PATIENT_TEST_H
