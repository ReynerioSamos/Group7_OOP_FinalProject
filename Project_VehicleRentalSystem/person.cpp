#include "person.h"
#include <QDate>

Person::Person(QObject *parent)
    : QObject{parent}
{

}

Person::Person(int pid) : Person() 
{
    PersonID = pid;
    firstName = "";
    lastName = "";
    DoB = QDate::currentDate();
    phoneNumber = "";
    email = "";
}

Person::~Person() {

}

void Person::setPersonID(int persid) { PersonID = persid; }

void Person::setFirstName(QString fname) { firstName = fname; }

void Person::setLastName(QString lname) { lastName = lname; }

void Person::setDoB(QDate dob) { DoB = dob; }

void Person::setPhoneNum(QString phonenum)
{
    QString formattedPhoneNumber = stringformatters::formatPhoneNumber(phonenum);
    this->phoneNumber = formattedPhoneNumber;
}

void Person::setEmail(QString email)
{
    QString formattedEmail = stringformatters::formatEmailAddress(email);
    this->email = formattedEmail;
}

int Person::getPersonID() { return PersonID; }

QString Person::getFirstName() {return firstName;}

QString Person::getLastName() {return lastName;}

QDate Person::getDoB() {return DoB;}

QString Person::getPhoneNum() {return phoneNumber;}

QString Person::getEmail(){return email;}
