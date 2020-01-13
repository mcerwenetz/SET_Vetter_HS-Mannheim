#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QString>

class MyThread : public QThread
{

    Q_OBJECT


public:
    MyThread(QObject* parent = nullptr);
    ~MyThread();
    void run();

signals:
    void myResult( QString result );

};

#endif // MYTHREAD_H
