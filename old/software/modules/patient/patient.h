#ifndef PATIENT_H
#define PATIENT_H
#endif

#include <QtCore/QString>

class Patient{
    int id;
    QString forename;
    QString lastname;

public:
    Patient();
    ~Patient();
    int get_id();
    QString get_forename();
    QString get_lastname();
    void set_id(int n_id);
    void set_forename(QString n_fname);
    void set_lastname(QString n_lname);
};
