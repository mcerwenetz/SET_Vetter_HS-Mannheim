#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
//    explicit Counter(QObject *parent = nullptr);
    Counter(){m_value=0;}
    int value() const {return m_value;}

private:
    int m_value;

public slots:
    void setValue(int value);
signals:
    void valueChanged(int newValue);

};

#endif // COUNTER_H
