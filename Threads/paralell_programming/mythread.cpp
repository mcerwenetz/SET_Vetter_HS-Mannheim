#include "mythread.h"
#include <QString>
#include <QDebug>

int faculty(int n)
{
    if(n > 1)
        return  n*faculty(n-1);
    else
        return 1;
}

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

MyThread::~MyThread()
{

}

void MyThread::run()
{
    int sumend=30;
    double res=0;
    for(int i=sumend; i >= 0; i--)
    {
        res+=(1/static_cast<double>(faculty(i)));
    }
    QString s = QString::number(res,'g',20);
    emit myResult( s );
    qDebug() << s;

}


