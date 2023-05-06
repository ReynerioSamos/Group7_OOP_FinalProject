#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
#include <QObject>
#include <QString>
#include <QDate>

class Truck : public Vehicle
{
public:
    explicit Truck(QObject *parent = nullptr);

    //constructors

    //set functions
    void setTruckID (int truckid);
    void setTruckClassID (int truckclassid);
    void setTruckClass (QString truckclass);
    void setHitchAvailable (bool status);
    void setHitchTypeID (int hitchtypeid);
    void setHitchType (QString hitchtype);
    void setTorque (int torq);
    void setMaxLoad (int max);
    void setMPG(int miles);

    //get functions
    int getTruckID();
    int getTruckClassID();
    QString getTruckClass();
    bool getHitchAvailable();
    int getHitchTypeID();
    QString getHitchType();
    int getTorque();
    int getMaxLoad();
    int getMPG();

private:
    int truckID;
    int truckClassID;
    QString truckClass;
    bool hitchAvailable;
    int hitchTypeID;
    QString hitchType;
    int torque;
    int maxLoad;
    int mpg;

};

#endif // TRUCK_H
