#ifndef VEHICLE_H
#define VEHICLE_H

#include <QObject>
#include <QString>
#include <QDate>

class Vehicle : public QObject
{
    Q_OBJECT
public:
    explicit Vehicle(QObject *parent = nullptr);

    //Constructor
    Vehicle(int vehicleid);
    ~Vehicle();

    //set functions
    void setVehicleID(int vehicleid);
    void setTotalMiles(int miles);
    void setMake(QString make);
    void setModel(QString model);
    void setYear (int x);
    void setDesc (QString desc);
    void setnum_of_passengers(int passengers);
    void setTransmissionID(int transid);
    void setTransmission (QString trans);
    void setFuelTypeID(int fuelid);
    void setFuelType(QString fuel);
    void setDrivetrainID(int dtrainid);
    void setDrivetrain(QString dtrainid);
    void setAvailability(bool status);
    void setLastServiced(QDate lastserv);

    //get Functions
    int getVehicleID();
    int getTotalMiles();
    QString getMake();
    QString getModel();
    int getYear();
    QString getDescription();
    int getnum_of_passengers();
    int getTransmissionID();
    int getFuelTypeID();
    int getDrivetrainID();
    QString getTransmission();
    QString getFuelType();
    QString getDrivetrain();
    bool getAvailability();
    QDate getLastServiced();

private:
    int vehicleID;
    int totalMiles;
    QString make, model;
    int year;
    //used to store additional info, like if car is push to start, or has manual windows
    QString description;
    int num_of_passengers;
    int transmissionID, fuelTypeID, drivetrainID;
    QString transmission, fuelType, drivetrain;
    bool availability;
    QDate lastServiced;

signals:

};

#endif // VEHICLE_H
