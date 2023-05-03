#ifndef BUS_H
#define BUS_H

#include "vehicle.h"
#include <QObject>

class Bus : public Vehicle
{
public:
    explicit Bus(QObject *parent = nullptr);
};

#endif // BUS_H
