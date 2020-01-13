#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>
#include <QMutex>
#include <QDebug>

class MyThread:public QThread
{
    Q_OBJECT

public:
    MyThread();
    void run();
//    float run_temp();
    int faculty(int limit);

signals:
    void myResult(float result);
};

#endif // MYTHREAD_H
