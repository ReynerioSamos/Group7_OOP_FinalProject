#include "customer.h"

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
    phoneNumber = phonenum;
    email = emailadd;
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
    phoneNumber = phonenum;
}

void Customer::setEmail(QString emailadd)
{
    email = emailadd;
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