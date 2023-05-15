#include "car.h"

Car::Car(QObject *parent)
    : Vehicle{parent}
{

}

Car::Car(int carid)
{
    carID = carid;

    mpg_or_KwH = 0;

    roadType = " ";
}

Car::~Car(){

}

void Car::setCarID(int carid)
{ carID = carid; }

void Car::setMPGorKWH(int range)
{ mpg_or_KwH = range; }

void Car::setRoatType(QString type)
{ roadType =type; }

int Car::getCarID()
{ return carID; }

int Car::getMPGorKWH()
{ return mpg_or_KwH; }

QString Car::getRoadType()
{ return roadType; }
