#ifndef DRIVER_H
#define DRIVER_H

#include "person.h"
#include <QObject>

class Driver : public Person
{
public:
    explicit Driver(QObject *parent = nullptr);
};

#endif // DRIVER_H
