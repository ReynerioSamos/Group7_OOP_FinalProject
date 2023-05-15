#include "vehicle.h"

Vehicle::Vehicle(QObject *parent)
    : QObject{parent}
{
}

Vehicle::Vehicle(int vehicleid)
{
    vehicleID= vehicleid;
    totalMiles = 0;
    make = "";
    model= "";
    year = 0;
    description = "";
    num_of_passengers = 0;
    transmissionID=0;
    fuelTypeID=0;
    drivetrainID=0;
    transmission="";
    fuelType="";
    drivetrain="";
    availability = false;
    lastServiced = QDate::currentDate();

}

Vehicle::~Vehicle()
{

}

void Vehicle::setVehicleID(int vehicleid)
{ vehicleID = vehicleid; }

void Vehicle::setTotalMiles(int miles)
{ totalMiles=miles; }

void Vehicle::setMake(QString mak)
{ make =mak; }

void Vehicle::setModel(QString mdel)
{ model =mdel; }

void Vehicle::setYear(int x)
{ year = x; }

void Vehicle::setDesc(QString desc)
{ description = desc; }

void Vehicle::setnum_of_passengers(int passengers)
{ num_of_passengers = passengers; }

void Vehicle::setTransmissionID(int transid)
{ transmissionID= transid; }

void Vehicle::setTransmission(QString trans)
{transmission=trans; }

void Vehicle::setFuelTypeID(int fuelid)
{ fuelTypeID = fuelid; }

void Vehicle::setFuelType(QString fuel)
{ fuelType=fuel; }

void Vehicle::setDrivetrainID(int dtrainid)
{ drivetrainID=dtrainid; }

void Vehicle::setDrivetrain(QString dtrain)
{ drivetrain=dtrain; }

void Vehicle::setAvailability(bool status)
{ availability= status; }

void Vehicle::setLastServiced(QDate lastserv)
{ lastServiced=lastserv; }

int Vehicle::getVehicleID()
{ return vehicleID; }

int Vehicle::getTotalMiles()
{ return totalMiles; }

QString Vehicle::getMake()
{ return make; }

QString Vehicle::getModel()
{ return model; }

int Vehicle::getYear()
{ return year; }

QString Vehicle::getDescription()
{ return description; }

int Vehicle::getnum_of_passengers()
{ return num_of_passengers; }

int Vehicle::getTransmissionID()
{ return transmissionID; }

int Vehicle::getFuelTypeID()
{ return fuelTypeID; }

int Vehicle::getDrivetrainID()
{ return drivetrainID; }

QString Vehicle::getTransmission()
{ return transmission; }

QString Vehicle::getFuelType()
{ return fuelType; }

QString Vehicle::getDrivetrain()
{ return drivetrain; }

bool Vehicle::getAvailability()
{ return availability; }

QDate Vehicle::getLastServiced()
{ return lastServiced; }

