#ifndef PATIENT_H
#define PATIENT_H
#endif

#include <QtCore>

class Patient{
    int id;
    QString forename;
    QString lastname;
    QDate birthday;

public:
    Patient();
    ~Patient();
    int get_id();
    QString get_forename();
    QString get_lastname();
    QDate get_birthday();
    void set_id(int n_id);
    void set_forename(QString n_fname);
    void set_lastname(QString n_lname);
    void set_birthday(QDate n_bday);
};
