#ifndef PATIENT_H
#define PATIENT_H
#endif

#include <QtCore>

class Patient:public QObject{

    Q_OBJECT

    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString forename READ forename WRITE setForename NOTIFY forenameChanged)
    Q_PROPERTY(QString familyName READ familyName WRITE setFamilyName NOTIFY familyNameChanged)
    Q_PROPERTY(QDate dateOfBirth READ dateOfBirth  WRITE setDateOfBirth  NOTIFY dateOfBirthChanged)

    int m_id;
    QString m_forename;
    QString m_familyName;
    QDate m_dateOfBirth;

public:
    Patient();
    ~Patient();

    int id() const;
    void setId(int n_id);

    QString forename() const;
    void setForename(QString forename);

    QString familyName() const;
    void setFamilyName(QString familyName);

    QDate dateOfBirth();
    void setDateOfBirth(QDate dateOfBirth);

signals:
    void idChanged();
    void forenameChanged();
    void familyNameChanged();
    void dateOfBirthChanged();
};
