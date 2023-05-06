#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "customer.h"
#include <QObject>

class individual : public Customer
{
public:
    explicit individual(QObject *parent = nullptr);

    //Constructors
    individual(int indid);
    individual(int indid, QString fname, QString lname);
    individual(int indid, QString fname, QString lname, QDate birthd);
    ~individual();

    //set functions
    void setIndividualID(int indID);
    void setFirstname(QString fname);
    void setLastName(QString lname);
    void setDob(QDate dob);

    //get functions
    int getIndividualID();
    QString getFirstName();
    QString getLastName();
    QDate getDob();


private:
    int individual_ID;
    QString firstName, lastName;
    QDate dob;

};

#endif // INDIVIDUAL_H
