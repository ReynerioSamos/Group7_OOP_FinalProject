#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "vehicle.h"
#include <QObject>

class Motorbike : public Vehicle
{
public:
    explicit Motorbike(QObject *parent = nullptr);

    //constructor

    //set functions
    void setBikeID(int bikeid);
    void setBikeTypeID(int biketypeid);
    void setBikeType (QString biketype);
    void setEngine (QString eng);
    void setMPG (int miles);
    void setHeight (int h);

    //get functions
    int getBikeID();
    int getBikeTypeID();
    QString getBikeType();
    QString getEngine();
    int getMPG();
    int getHeight();

private:
    int bikeID;
    int bikeTypeID;
    QString bikeType;
    QString engine;
    int mpg;
    int height;
};

#endif // MOTORBIKE_H
