#ifndef COMPANY_H
#define COMPANY_H

#include "customer.h"
#include "stringformatters.h"
#include <QObject>

class Company : public Customer
{
public:
    explicit Company(QObject *parent = nullptr);

    //Contructors
    Company(int compid);
    Company(int compid, QString compname);
    Company(int compid, QString compname, QDate datefound);
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
