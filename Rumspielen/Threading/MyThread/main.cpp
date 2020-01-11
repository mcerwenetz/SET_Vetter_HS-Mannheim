#include <QCoreApplication>
#include "mythread.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread thr1;
    thr1.name="thr1";
    MyThread thr2;
    thr2.name="thr2";
    thr1.start();
    thr2.start();

    return a.exec();

}
