#ifndef COMPANY_H
#define COMPANY_H

#include "customer.h"
#include <QObject>

class Company : public Customer
{
public:
    explicit Company(QObject *parent = nullptr);

    //Contructors


    //set functions
    void  setCompanyID(int comp);
    void  setCompanyName(QString compname);
    void  setDateFounded(QDate datefound);

    //get functions
    int getCompanyID();
    QString getCompanyName();
    QDate getDateFounded();

private:
    int companyID;
    QString CompanyName;
    QDate dateFounded;

};

#endif // COMPANY_H
