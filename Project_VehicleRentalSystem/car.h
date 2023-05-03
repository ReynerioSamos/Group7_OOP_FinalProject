#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <QObject>

class Car : public Vehicle
{
public:
    explicit Car(QObject *parent = nullptr);

    //constructos

    //set functions
    void setCarID (int carid);
    void setMPGorKWH (int range);
    void setRoatType (QString type);
    //get functions
    int getCarID();
    int getMPGorKWH();
    QString getRoadType();

private:
    int carID;
    // defines how much miles per gallons it gets or killowatt hour (range for electric)got
    int mpg_or_KwH;
    // defines if it's a road car, offroad car, snow car, etc
    QString roadType;

};

#endif // CAR_H
