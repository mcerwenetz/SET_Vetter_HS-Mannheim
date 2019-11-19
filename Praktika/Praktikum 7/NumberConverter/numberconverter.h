#ifndef NUMBERCONVERTER_H
#define NUMBERCONVERTER_H

#include <QObject>
#include <QString>

class NumberConverter : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString bin READ bin WRITE setBin NOTIFY binChanged)
    Q_PROPERTY(QString hex READ hex WRITE setHex NOTIFY hexChanged)
    Q_PROPERTY(QString oct READ oct WRITE setOct NOTIFY octChanged)
    Q_PROPERTY(QString dez READ dez WRITE setDez NOTIFY dezChanged)

    QString m_value;

public:
    NumberConverter()
    {
        m_value="0";
    }
    ~NumberConverter()
    {

    }

    QString bin();
    void setBin(QString value);

    QString hex();
    void setHex(QString value);

    QString dez();
    void setDez(QString value);

    QString oct();
    void setOct(QString value);


signals:
    void binChanged();
    void hexChanged();
    void dezChanged();
    void octChanged();


};


#endif // NUMBERCONVERTER_H
