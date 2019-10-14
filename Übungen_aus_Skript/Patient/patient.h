#include <QObject>
#include <QString>
#include <QtDebug>

class Patient : public QObject
{
    Q_OBJECT
    //Jeder change auf eine Property bekommt ein signal
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

    QString m_name;

public:
    Patient(QObject* parent = NULL)
        :QObject(parent){}

    QString name()
    {
        return m_name;
    }

    void setName(QString name)
    {
        if(name==m_name)
            return;
        m_name = name;
        //signal muss gesetzt werden
        emit nameChanged();
        qDebug() << "name changed" ;
    }
//signals müssen trotzdem am Ende noch explizit beschrieben werden
signals:
    void nameChanged();
};
