#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
#include <QObject>

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
    void setTorque (double torq);
    void setMaxLoad (int max);
    void setMPG(int miles);

    //get functions
    int getTruckID();
    int getTruckClassID();
    QString getTruckClass();
    bool getHitchAvailable();
    int getHitchTypeID();
    QString getHitchType();
    double getTorque();
    int getMaxLoad();
    int getMPG();

private:
    int truckID;
    int truckClassID;
    QString truckClass;
    bool hitchAvailable;
    int hitchTypeID;
    QString hitchType;
    double torque;
    int maxLoad;
    int mpg;

};

#endif // TRUCK_H
