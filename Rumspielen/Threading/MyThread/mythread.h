#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QtCore>

class MyThread: public QThread
{
public:
    MyThread();
    void run() override;
    QString name;
};

static int zaehler;
static QMutex mut;


#endif // MYTHREAD_H
