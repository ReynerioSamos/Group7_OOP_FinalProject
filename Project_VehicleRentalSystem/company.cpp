#include "company.h"

Company::Company(QObject *parent)
    : Customer{parent}
{
    companyID =     NULL;
    CompanyName =   NULL;
    dateFounded=    NULL;

}

Company::Company(int compid)
{
    companyID =     compid;
}

Company::Company(int compid, QString compname)
{
    companyID =     compid;
    companyName =   compname;
}

Company::Company(int compid, QString compname, QDate datefound)
{
    companyID =     compid;
    companyName =   compname;
    dateFounded =   datefound;
}

Company::~Company()
{
    delete[] companyID, companyName, dateFounded;
}

void Company::setCompanyID(int compid)
{
    companyID = compid;
}

void Company::setCompanyName(QString compname)
{
    companyName = compname;
}

void Company::setDateFounded(QDate datefound)
{
    dateFounded = datefound;
}

int Company::getCompanyID()
{
    return companyID;
}

QString Company::getCompanyName()
{
    return companyName;
}

QDate Company::getDateFounded()
{
    return dateFounded;
}
