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
    QString localval = QString::number(toSet.toInt(nullptr,2),10);
    //Check if m_value already is value in textfield
    //If we would not check  we'd encounter a Binding loop
    if(m_value == localval)
        return;
    else{
        m_value=localval;
        emit valueChanged();
    }
}

QString NumberConverter::hex()
{
    return( QString::number(m_value.toInt(nullptr,10),16));
}

void NumberConverter::setHex(QString value)
{
    QString localval = QString::number(value.toInt(nullptr,16),10);
    if(m_value == localval)
        return;
    else{
        m_value = localval;
        emit valueChanged();
    }
}

QString NumberConverter::dez()
{
    return m_value;
}

void NumberConverter::setDez(QString value)
{
    if(m_value == value)
        return;
    else
        m_value = value;
    emit valueChanged();
}

void NumberConverter::setOct(QString value)
{
    QString localval = QString::number(value.toInt(nullptr,8),10);
    if(m_value == localval)
        return;
    else
        m_value = localval;
    emit valueChanged();
}

QString NumberConverter::oct()
{
    return( QString::number(m_value.toInt(nullptr,10),8));
}




