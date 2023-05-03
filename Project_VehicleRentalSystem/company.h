#ifndef COMPANY_H
#define COMPANY_H

#include "customer.h"
#include <QObject>

class Company : public Customer
{
public:
    explicit Company(QObject *parent = nullptr);
};

#endif // COMPANY_H
