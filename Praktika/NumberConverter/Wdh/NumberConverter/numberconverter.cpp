#include "numberconverter.h"

QString formatBin(QString toFormat){
    toFormat.remove("."); //Entferne punkte
    return toFormat;
}

QString NumberConverter::bin()
{
     QString ret = QString::number(m_value.toInt(nullptr,10),2); //Rechne m_value um in binär
     //Formatierung
     const int blocksize = 4;
     const char dot = '.';
     for(int i=ret.length(); i > 0; i-=blocksize)
     {
        if(i%blocksize && i != ret.length())
                ret.insert(i,dot);
        //Starte am Ende von ret und füge an jeder Stelle die durch Blocksize (in dem Fall 4) restlos teilbar ist einen Punkt ein
        //Beispiel: 1010 Blocksize 2
        //->1010 i=4 % 2 =0 also Punkt aber da der erste punkt, überspringen. i um 1 Blocksize verringern
        //10->10 i=2 % 2 =0 also Punkt einfügen. i um 2 erniedrigen
        //1010-> i=0; i < 0; Schleife abbrechen
     }
     return ret;
}
void NumberConverter::setBin(QString value)
{
    QString toSet=formatBin(value); //Funktion entfern Punkte
    QString new_m_value = QString::number(toSet.toInt(nullptr,2),10);
    //binding_loop_test
    if(m_value==new_m_value){
        return; // if m_value is already set no need for signals and refreshing fiasko
    }
    else {
        m_value=new_m_value;
        emit valueChanged();
    }
}

QString NumberConverter::hex()
{
    return( QString::number(m_value.toInt(nullptr,10),16)); //m_value in hexform
}
void NumberConverter::setHex(QString value)
{
    QString new_m_value = QString::number(value.toInt(nullptr,16),10);//eingegebene Zahl von hex in dez umkonvertieren
    if(m_value==new_m_value){
        return; // if m_value is already set no need for signals and refreshing fiasko
    }
    else {
        m_value=new_m_value;
        emit valueChanged();
    }
}

QString NumberConverter::oct()
{
    return( QString::number(m_value.toInt(nullptr,10),8));
}
void NumberConverter::setOct(QString value)
{
    QString new_m_value = QString::number(value.toInt(nullptr,8),10);//eingegebene Zahl von hex in dez umkonvertieren
    if(m_value==new_m_value){
        return; // if m_value is already set no need for signals and refreshing fiasko
    }
    else {
        m_value=new_m_value;
        emit valueChanged();
    }
}

QString NumberConverter::dec()
{
    return m_value;
}
void NumberConverter::setDec(QString value)
{
    if(m_value==value){
        return; // if m_value is already set no need for signals and refreshing fiasko
    }
    else {
        m_value=value;
        emit valueChanged();
    }
}
