#ifndef BUS_H
#define BUS_H

#include "vehicle.h"
#include <QObject>

class Bus : public Vehicle
{
public:
    explicit Bus(QObject *parent = nullptr);

    //constructors
    Bus(int busid);
    ~Bus();

    //set functions
    void setBusID(int busid);
    void setBathroom(bool status);
    void setAC(bool status);
    void setBusTypeID(int bustypeid);
    void setBusType(QString busType);
    void setMPG(int miles);
    void setlength(int l);
    void setwidth (int w);
    void setheight(int h);

    //get functions
    int getBusID();
    bool getBathroom();
    bool getAC();
    int getBusTypeID();
    QString getBusType();
    int getMPG();
    int getLength();
    int getWidth();
    int getHeight();

private:
    int busID;
    bool bathroom, AC;
    int busTypeID;
    QString busType;
    int mpg;
    //busses are usually defined using these, to tell where there juristictions lies
    int length, width, height;

};

#endif // BUS_H
