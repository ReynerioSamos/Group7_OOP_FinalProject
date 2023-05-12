#include "bus.h"

Bus::Bus(QObject *parent)
    : Vehicle{parent}
{
    busID = 0;
    bathroom = false;
    AC = false;
    busTypeID = 0;
    busType= "";
    mpg = 0;
    length =0;
    width =0;
    height= 0;
}

Bus::Bus (int busid)
{
    busID = busid;
    bathroom = false;
    AC = false;
    busTypeID = 0;
    busType= "";
    mpg = 0;
    length =0;
    width =0;
    height= 0;

}

void Bus::setBusID(int busid)
{ busID = busid; }

void Bus::setBathroom(bool status)
{ bathroom = status; }

void Bus::setAC(bool status)
{ AC = status; }

void Bus::setBusTypeID(int bustypeid)
{ busTypeID = bustypeid; }

void Bus::setBusType(QString bustype)
{ busType = bustype; }

void Bus::setMPG(int miles)
{ mpg = miles; }

void Bus::setlength(int l)
{ length=l; }

void Bus::setwidth(int w)
{ width = w; }

void Bus::setheight(int h)
{ height = h;}

int Bus::getBusID()
{ return busID; }

bool Bus::getBathroom()
{ return bathroom; }

bool Bus::getAC()
{ return AC; }

int Bus::getBusTypeID()
{ return busTypeID; }

QString Bus::getBusType()
{ return busType; }

int Bus::getMPG()
{ return mpg; }

int Bus::getLength()
{ return length; }

int Bus::getWidth()
{ return width; }

int Bus::getHeight()
{ return height; }


