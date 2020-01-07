#include "mythread.h"
#include <QDebug>

int MyThread::faculty(int limit){
    int ret=1;
    for(int i = 1; i <= limit; i++){
        ret*=i;
    }
    return ret;
}

MyThread::MyThread()
{

}

void MyThread::run()
{
    int limit =60;
    float result=0;
    for(int i=limit; i >=0; i--){
        result+=1/static_cast<float>(this->faculty(i));
    }
    qDebug() << result;
    emit myResult(result);
}

//float MyThread::run_temp()
//{
//    int limit =2;
//    float result=0;
//    for(int i=limit; i >=0; i--){
//        result+=1/static_cast<float>(this->faculty(i));
//    }
//    return result;
//}



