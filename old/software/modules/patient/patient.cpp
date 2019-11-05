#include "patient.h"

Patient::Patient(){
    m_id=0;
    m_forename="unknown";
    m_familyName="unknown";
}
Patient::~Patient(){

}
int Patient::id() const
{
    return this->m_id;
}

QString Patient::forename() const
{
    return (this->m_forename);
}
QString Patient::familyName() const
{
    return this->m_familyName;
}
void Patient::setId(int n_id)
{
    this->m_id=n_id;
}
void Patient::setForename(QString n_fname)
{
    this->m_forename=n_fname;
}
void Patient::setFamilyName(QString n_lname)
{
    this->m_familyName=n_lname;
}

QDate Patient::dateOfBirth(){
    return m_dateOfBirth;
}

void Patient::setDateOfBirth(QDate dateOfBirth)
{
    if(dateOfBirth <= QDate::currentDate().addYears(-150).addDays(-1) || dateOfBirth >= QDate::currentDate().addDays(2) )
    {
        return;
    }
    m_dateOfBirth=dateOfBirth;
}
