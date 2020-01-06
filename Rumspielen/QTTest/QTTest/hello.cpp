#include "hello.h"

QString Hello::string()
{
    return m_string;
}

void Hello::setString(QString string_to_set)
{
    if(m_string == string_to_set){
        return;
    }else {
        m_string=string_to_set;
        emit stringChanged();
    }
}
