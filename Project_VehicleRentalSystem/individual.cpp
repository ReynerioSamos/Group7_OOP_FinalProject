#include "individual.h"

individual::individual(QObject *parent)
    : Customer{parent}
{
    individual_ID = 0;
    firstName = "";
    lastName = "";
    dob = QDate();
}

individual::individual(int indid)
{
    individual_ID = indid;
}

individual::individual(int indid, QString fname, QString lname)
{
    individual_ID = indid;
    firstName = fname;
    lastName = lname;
}

individual::individual(int indid, QString fname, QString lname, QDate birthd)
{
    individual_ID = indid;
    firstName = fname;
    lastName = lname;
    dob = birthd;
}
individual::~individual()
{
    delete[] individual_ID, firstName, lastname;
}

void individual::setIndividualID(int indID)
{
    individual_ID = indID;
}

void individual::setFirstname(QString fname)
{
    firstName = fname;
}

void individual::setLastName(QString lname)
{
    lastName = lname;
}

void individual::setDob(QDate dob)
{
    this->dob = dob;
}

int individual::getIndividualID()
{
    return individual_ID;
}

QString individual::getFirstName()
{
    return firstName;
}

QString individual::getLastName()
{
    return lastName;
}

QDate individual::getDob()
{
    return dob;
}
