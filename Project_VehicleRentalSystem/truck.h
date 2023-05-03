#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
#include <QObject>

class Truck : public Vehicle
{
public:
    explicit Truck(QObject *parent = nullptr);
};

#endif // TRUCK_H
