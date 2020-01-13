#ifndef NAME_H
#define NAME_H

#include <QObject>
#include <QDebug>

class Name : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    QString m_name;
public:
    Name(){};

    QString name() const{
        return m_name;
    }

signals:
    void nameChanged(QString name);

public slots:
    void setName(QString name){
        name=name.toLower();
        if(m_name!=name){
            m_name=name;
            emit nameChanged(name);
//            qDebug()<< "Name changed to" << name;
        }
    }

};

#endif // NAME_H
