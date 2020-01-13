#include <QCoreApplication>
#include "counter.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Counter c,d;
    //connect the value changed of first counter to set counter of counter2
    QObject::connect(&c,&Counter::valueChanged,&d,&Counter::setValue);
    //this sets the counter of c to 12 triggering valueChanged() of c triggering setValue() slot of d with the same value
    c.setValue(12);
//    d.setValue(48);
    qDebug()<< c.value();
    qDebug() << d.value();
    return a.exec();
}
