#include "numberconverter.h"

QString NumberConverter::bin()
{
    return( QString::number(m_value.toInt(nullptr,10),2));
}

void NumberConverter::setBin(QString value)
{
   //Todo: Implement gettig rid of format from ui
   m_value = QString::number(value.toInt(nullptr,2),10);
   emit binChanged();
}

QString NumberConverter::hex()
{
    return( QString::number(m_value.toInt(nullptr,10),16));
}

void NumberConverter::setHex(QString value)
{
   m_value = QString::number(value.toInt(nullptr,16),10);
   emit hexChanged();
}

QString NumberConverter::dez()
{
    return m_value;
}

void NumberConverter::setDez(QString value)
{
   m_value=value;
   emit hexChanged();
}

void NumberConverter::setOct(QString value)
{
   m_value = QString::number(value.toInt(nullptr,8),10);
   emit octChanged();
}

QString NumberConverter::oct()
{
    return( QString::number(m_value.toInt(nullptr,10),8));
}

//void NumberConverter::update(int value)
//{
//    QString bin = QString::number(value,2);
//    bin=formatBin(bin);

//    QString hex = QString::number(value,16);
//    QString oct =QString::number(value,8);
//    QString dez = QString::number(value,10);

//    if(bin!=m_bin || hex!=m_hex || oct!=m_hex || dez!=m_dez)
//    {
//        m_bin=bin;
//        emit binChanged();
//    }


//}

