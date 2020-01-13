#ifndef NUMBERCONVERTER_H
#define NUMBERCONVERTER_H

#include <QObject>
#include <QString>

class NumberConverter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString hex READ hex WRITE setHex NOTIFY valueChanged)
    /*
    Hier immer valueChanged, da bei einer änderung der Variable kein Signal an die anderen
    Properties geht.
    */
    Q_PROPERTY(QString dec READ dec WRITE setDec NOTIFY valueChanged)
    Q_PROPERTY(QString oct READ oct WRITE setOct NOTIFY valueChanged)
    Q_PROPERTY(QString bin READ bin WRITE setBin NOTIFY valueChanged)

    //m_value ist nur eine Zahl und wird in dezimaler Form gespeichert.
    QString m_value;

public:
    NumberConverter(){
        m_value="0";
    }
    ~NumberConverter(){

    }

    QString bin();
    void setBin(QString value);

    QString hex();
    void setHex(QString value);

    QString oct();
    void setOct(QString value);

    QString dec();
    void setDec(QString value);
signals:
    void valueChanged();
};

#endif // NUMBERCONVERTER_H
