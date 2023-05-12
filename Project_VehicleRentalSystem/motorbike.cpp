#include "motorbike.h"

Motorbike::Motorbike(QObject *parent)
    : Vehicle{parent}
{

    bikeID =0;
    bikeTypeID =0;
    bikeType = "";
    engine = "";
    mpg = 0;
    height=0;
}

Motorbike::Motorbike(int bikeid)
{
    bikeID =bikeid;
    bikeTypeID =0;
    bikeType = "";
    engine = "";
    mpg = 0;
    height=0;
}

void Motorbike::setBikeID(int bikeid)
{ bikeID= bikeid; }

void Motorbike::setBikeTypeID(int biketypeid)
{ bikeTypeID =biketypeid; }

void Motorbike::setBikeType(QString biketype)
{ bikeType=biketype; }

void Motorbike::setEngine(QString eng)
{ engine = eng; }

void Motorbike::setMPG(int miles)
{ mpg = miles; }

void Motorbike::setHeight(int h)
{ height= h; }

int Motorbike::getBikeID()
{ return bikeID; }

int Motorbike::getBikeTypeID()
{ return bikeTypeID; }

QString Motorbike::getBikeType()
{ return bikeType; }

QString Motorbike::getEngine()
{ return engine; }

int Motorbike::getMPG()
{ return mpg; }

int Motorbike::getHeight()
{ return height; }
