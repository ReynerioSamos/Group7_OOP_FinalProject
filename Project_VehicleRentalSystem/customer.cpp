#include "customer.h"

Customer::Customer(QObject *parent)
    : QObject{parent}
{
    Customer ID =   NULL;
    phoneNumber =   NULL;
    email =         NULL;
    date_added =    NULL;
}

Customer::Customer()
{
    Customer ID =   0;
    phoneNumber =   "";
    email =         "";
    // sets the default date as when the object was created based on system date
    date_added =    QDate::currentDate();
}

Customer::Customer(int custid)
{
    CustomerID =    custid;
    phoneNumber =   "";
    email =         "";
    date_added = QDate currentDate();
}

Customer::Customer(int custid, QDate added)
{
    CustomerID = custid;
    phoneNumber = "";
    email = "";
    date_added = added;
}

Customer::Customer(int custid, QString phonenum, QString emailadd, QDate added)
{
    CustomerID = custid;
    phoneNumber = phonenum;
    email = emailadd;
    date_added = added;
}

Customer::~Customer()
{

}

void Customer::setCustomerID(int custid)
{
    CustomerID = custid;
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
    return CustomerID;
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