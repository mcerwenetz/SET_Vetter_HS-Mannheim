#include "mythread.h"
#include <QtCore>
#include <QDebug>

MyThread::MyThread()
{

}

void MyThread::run(){
    for(int i = 0; i < 10; i++){
        mut.lock();
        qDebug()<<this->name << "erhoeht";
        zaehler++;
        qDebug()<<zaehler;
        mut.unlock();
    }
}
