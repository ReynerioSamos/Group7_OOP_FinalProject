#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "vehicle.h"
#include <QObject>

class Motorbike : public Vehicle
{
public:
    explicit Motorbike(QObject *parent = nullptr);
};

#endif // MOTORBIKE_H
