#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "customer.h"
#include <QObject>

class individual : public Customer
{
public:
    explicit individual(QObject *parent = nullptr);
};

#endif // INDIVIDUAL_H
