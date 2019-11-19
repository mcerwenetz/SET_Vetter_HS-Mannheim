#include "numberconverter.h"

QString formatBinIn(QString toFormat){
    toFormat.remove(".");
    return toFormat;
}

QString formatbin(QString toFormat){
    toFormat.remove(".");
    return toFormat;
}

QString NumberConverter::bin()
{
    QString ret = QString::number(m_value.toInt(nullptr,10),2);
    const int blocksize = 4;
    const char dot = '.';
    for(int i=ret.length(); i > 0; i-=blocksize)
    {
        if(i%blocksize && i != ret.length())
            ret.insert(i,dot);
    }
    return ret;
}

void NumberConverter::setBin(QString value)
{
    QString toSet=formatBinIn(value);
    m_value = QString::number(toSet.toInt(nullptr,2),10);
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




