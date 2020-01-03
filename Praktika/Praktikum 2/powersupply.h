#ifndef POWERSUPPLY_H
#define POWERSUPPLY_H

#include <QObject>

class PowerSupply : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int voltage READ voltage WRITE setVoltage NOTIFY voltageChanged)
    Q_PROPERTY(int current READ current WRITE setCurrent NOTIFY currentChanged)
    Q_PROPERTY(int power READ power WRITE setPower NOTIFY powerChanged)
    Q_PROPERTY(int powerlimit READ powerlimit WRITE setPowerlimit NOTIFY powerlimitChanged)

    int m_voltage;
    int m_current;
    int m_power;
    int m_maxpower=0;

public:
    explicit PowerSupply(QObject *parent = nullptr);

    int voltage() const
    {
        return m_voltage;
    }
    int current() const
    {
        return m_current;
    }
    int power() const
    {
        return m_power;
    }
    int powerlimit() const
    {
        return m_maxpower;
    }


signals:
    void powerChanged();
    void voltageChanged(int voltage);
    void currentChanged(int current);
    void powerlimitChanged();


public slots:
    void setVoltage(int volt);
    void setCurrent(int curr);
    void setPower(int pwr);
    void setPowerlimit(int maxpwr);


};

#endif // POWERSUPPLY_H
