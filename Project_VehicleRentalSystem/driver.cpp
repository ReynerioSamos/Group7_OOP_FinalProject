#include "driver.h"

Driver::Driver(QObject *parent)
    : Person{parent}
{
     driverID=0;
     licenseClassID=0;
     licenseClass="";
     licenseExp= QDate::currentDate();
     notes="";
}

Driver::Driver(int driverid)
{
    driverID=driverid;
    licenseClassID=0;
    licenseClass="";
    licenseExp= QDate::currentDate();
    notes="";
}

Driver::~Driver() {

}

void Driver::setDriverID(int driverid)
{ driverID = driverid; }

void Driver::setLicenseClassID(int licnscid)
{ licenseClassID=licnscid; }

void Driver::setLicenseClass(QString licnscl)
{ licenseClass= licnscl; }

void Driver::setLicenseExp(QDate licnsexp)
{ licenseExp=licnsexp; }

void Driver::setNotes(QString nots)
{ notes= nots; }

int Driver::getDriverID()
{ return driverID; }

int Driver::getlLicenseClassID()
{ return licenseClassID; }

QString Driver::getLicenseClass()
{ return licenseClass; }

QDate Driver::getLicenseExp()
{ return licenseExp; }

QString Driver::getNotes()
{ return notes; }
