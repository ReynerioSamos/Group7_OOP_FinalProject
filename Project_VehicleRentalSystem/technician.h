#ifndef TECHNICIAN_H
#define TECHNICIAN_H

#include "person.h"
#include <QObject>

class Technician : public Person
{
public:
    explicit Technician(QObject *parent = nullptr);
};

#endif // TECHNICIAN_H
