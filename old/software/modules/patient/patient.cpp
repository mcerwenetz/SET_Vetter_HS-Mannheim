#include "patient.h"

Patient::Patient()
{

}
Patient::~Patient(){

}
int Patient::get_id()
{
    return this->id;
}

QString Patient::get_forename()
{
    return (this->forename);
}
QString Patient::get_lastname()
{
    return this->lastname;
}
void Patient::set_id(int n_id)
{
    this->id=n_id;
}
void Patient::set_forename(QString n_fname)
{
    this->forename=n_fname;
}
void Patient::set_lastname(QString n_lname)
{
    this->lastname=n_lname;
}
