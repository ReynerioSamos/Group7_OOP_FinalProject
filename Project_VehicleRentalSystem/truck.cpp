#include "truck.h"

Truck::Truck(QObject *parent)
    : Vehicle{parent}
{
    truckID= 0;
    truckClassID =0;
    truckClass= "";
    hitchAvailable = false;
    hitchTypeID = 0;
    hitchType= "";
    torque=0;
    maxLoad = 0;
    mpg = 0;

}

Truck::Truck(int truckid)
{
    truckID= truckid;
    truckClassID =0;
    truckClass= "";
    hitchAvailable = false;
    hitchTypeID = 0;
    hitchType= "";
    torque=0;
    maxLoad = 0;
    mpg = 0;
}

void Truck::setTruckID(int truckid)
{ truckID=truckid; }

void Truck::setTruckClassID(int truckclassid)
{ truckClassID =truckclassid; }

void Truck::setTruckClass(QString truckclass)
{ truckClass = truckclass; }

void Truck::setHitchAvailable(bool status)
{ hitchAvailable = status; }

void Truck::setHitchTypeID(int hitchtypeid)
{ hitchTypeID=hitchtypeid; }

void Truck::setHitchType(QString hitchtype)
{ hitchType=hitchtype; }

void Truck::setTorque(int torq)
{ torque = torq; }

void Truck::setMaxLoad(int max)
{ maxLoad=max; }

void Truck::setMPG(int miles)
{ mpg = miles; }

int Truck::getTruckID()
{ return truckID; }

int Truck::getTruckClassID()
{ return truckClassID; }

QString Truck::getTruckClass()
{ return truckClass; }

bool Truck::getHitchAvailable()
{ return hitchAvailable; }

int Truck::getHitchTypeID()
{ return hitchTypeID; }

QString Truck::getHitchType()
{ return hitchType; }

int Truck::getTorque()
{ return torque; }

int Truck::getMaxLoad()
{ return maxLoad; }

int Truck::getMPG()
{ return mpg; }
