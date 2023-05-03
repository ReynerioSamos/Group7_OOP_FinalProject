#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <QObject>

class Car : public Vehicle
{
public:
    explicit Car(QObject *parent = nullptr);
};

#endif // CAR_H
