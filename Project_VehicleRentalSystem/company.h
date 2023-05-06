#ifndef COMPANY_H
#define COMPANY_H

#include "customer.h"
#include <QObject>
#include <QString>
#include <QDate>

class Company : public Customer
{
public:
    explicit Company(QObject *parent = nullptr);

    //Contructors
    Company(int compid);
    ~Company();

    //set functions
    void  setCompanyID(int compid);
    void  setCompanyName(QString compname);
    void  setDateFounded(QDate datefound);

    //get functions
    int getCompanyID();
    QString getCompanyName();
    QDate getDateFounded();

private:
    int companyID;
    QString companyName;
    QDate dateFounded;

};

#endif // COMPANY_H
