#include "powersupply.h"
#include <QDebug>

PowerSupply::PowerSupply(QObject *parent) : QObject(parent)
{

}

void PowerSupply::setVoltage(int volt)
{
//    if(qFuzzyCompare(m_voltage, volt))
//    {
//        return;
//    }
    m_voltage=volt;
    int powerdownscaled = (((m_voltage/1000)*(m_current)/1000));
    setPower(powerdownscaled);
    emit voltageChanged(m_voltage);
}

void PowerSupply::setCurrent(int curr)
{
//    if(qFuzzyCompare(m_current, curr))
//    {
//        return;
//    }
    m_current=curr;
    int powerdownscaled = (((m_voltage/1000)*(m_current)/1000));
    setPower(powerdownscaled);
    emit currentChanged(m_current);
}

void PowerSupply::setPower(int pwr)
{
    m_power=pwr;
    emit powerChanged();
}
