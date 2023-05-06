#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}
// Constructor that takes PersonID
Person::Person(int pid) : Person() 
{
    PersonID = pid;
    firstName = "";
    lastName = "";
    DoB = NULL;
    phoneNumber = "";
    email = "";

}

// Constructor that takes all person attributes
Person::Person(int pid, QString fname, QString lname, QDate dob, QString phonenum, QString email) : Person() {
    PersonID = pid;
    firstName = fname;
    lastName = lname;
    this->DoB = dob;
    QString formattedPhoneNumber = stringformatters::formatPhoneNumber(phonenum);
    this->phoneNumber = formattedPhoneNumber;
    QString formattedEmail = stringformatters::formatEmailAddress(email);
    this->email = formattedEmail;
}

Person::~Person()
{
    delete[] PersonID, firstName, lastName, DoB, phoneNumber, email;
}

// Setters
void Person::setPersonID(int persid) {
    PersonID = persid;
}

void Person::setFirstName(QString fname) {
    firstName = fname;
}

void Person::setLastName(QString lname) {
    lastName = lname;
}

void Person::setDoB(QDate dob) {
    DoB = dob;
}

void Person::setPhoneNum(QString phonenum) {
    QString formattedPhoneNumber = stringformatters::formatPhoneNumber(phonenum);
    this->phoneNumber = formattedPhoneNumber;
}

void Person::setEmail(QString email) {
    this->phoneNumber = formattedPhoneNumber;
    QString formattedEmail = stringformatters::formatEmailAddress(email);
}

// Getters
int Person::getPersonID() {
    return PersonID;
}

QString Person::getFirstName() {
    return firstName;
}

QString Person::getLastName() {
    return lastName;
}

QDate Person::getDoB() {
    return DoB;
}

QString Person::getPhoneNum() {
    return phoneNumber;
}

QString Person::getEmail(){
    return email;
}
