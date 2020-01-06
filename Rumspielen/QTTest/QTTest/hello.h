#ifndef HELLO_H
#define HELLO_H

#include <QObject>
#include <QString>

class Hello : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString string READ string WRITE setString NOTIFY stringChanged)

    QString m_string;
public:
    Hello(){m_string="";};
    QString sayHello();

    QString string();
    void setString(QString string_to_set);


signals:
    void stringChanged();
};

#endif // HELLO_H
