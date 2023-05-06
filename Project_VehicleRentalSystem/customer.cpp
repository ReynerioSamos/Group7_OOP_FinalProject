#include "customer.h"
#include "stringformatters.h"

#include <QDate>
#include <QString>

Customer::Customer(QObject *parent)
    : QObject{parent}
{
    customerID =   0;
    phoneNumber =   "";
    email =         "";
    // sets the default date as when the object was created based on system date
    date_added =    QDate::currentDate();
}

Customer::Customer(int custid)
{
    customerID =    custid;
    phoneNumber =   "";
    email =         "";
    date_added = QDate::currentDate();
}

Customer::~Customer() {}

void Customer::setCustomerID(int custid) {customerID = custid;}

void Customer::setPhoneNumber(QString phonenum)
{
    QString formattedPhoneNumber = stringformatters::formatPhoneNumber(phonenum);
    this->phoneNumber = formattedPhoneNumber;
}

void Customer::setEmail(QString emailadd)
{
   QString formattedEmail = stringformatters::formatEmailAddress(emailadd);
    this->email = formattedEmail;
}

void Customer::setDate_added(QDate added) { date_added = added; }

int Customer::getCustomerID() { return customerID; }

QString Customer::getCustomerPhoneNumber() { return phoneNumber; }

QString Customer::getEmail() { return email; }

QDate Customer::getDate_added() { return date_added; }
