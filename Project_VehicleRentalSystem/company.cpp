#include "company.h"

Company::Company(QObject *parent)
    : Customer{parent}
{
}

Company::Company(int compid)
{
    companyID =     compid;
    companyName = "";
    dateFounded = QDate::currentDate();
}

Company::~Company()
{

}

void Company::setCompanyID(int compid)
{ companyID = compid; }

void Company::setCompanyName(QString compname)
{ companyName = compname; }

void Company::setDateFounded(QDate datefound)
{ dateFounded = datefound; }

int Company::getCompanyID()
{ return companyID; }

QString Company::getCompanyName()
{ return companyName; }

QDate Company::getDateFounded()
{ return dateFounded; }
