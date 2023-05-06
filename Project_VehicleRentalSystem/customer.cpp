#include "customer.h"
#include "stringformatters.h"

Customer::Customer(QObject *parent)
    : QObject{parent}
{

}

Customer::Customer()
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
    date_added = QDate currentDate();
}

Customer::Customer(int custid, QDate added)
{
    customerID = custid;
    phoneNumber = "";
    email = "";
    date_added = added;
}

Customer::Customer(int custid, QString phonenum, QString emailadd, QDate added)
{
    customerID = custid;
    QString formattedPhoneNumber = stringformatters::formatPhoneNumber(phonenum);
    this->phoneNumber = formattedPhoneNumber;
    QString formattedEmail = stringformatters::formatEmailAddress(emailadd);
    this->email = formattedEmail;
    date_added = added;
}

Customer::~Customer()
{
    // ensures that the data allocated is released upon destruction
    delete[] customerID, phoneNumber, email, date_added;
}

void Customer::setCustomerID(int custid)
{
    customerID = custid;
}

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

void Customer::setDate_added(QDate added)
{
    date_added = added;
}

int Customer::getCustomerID()
{
    return customerID;
}

QString Customer::getPhoneNumber()
{
    return phoneNumber;
}

QString Customer::getEmail()
{
    return email;
}

QDate Customer::getDate_added()
{
    return date_added;
}