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

    //set functions
    void setVehicleID(int vehicleid);
    void setTotalMiles(int miles);
    void setMake(QString make);
    void setModel(QString model);
    void setYear (int x);
    void setDesc (QString desc);
    void setNumOfPassengers(in)

private:
    int vehicleID;
    int totalMiles;
    QString Make, Model;
    int year;
    //used to store additional info, like if car is push to start, or has manual windows
    QString description;
    int num_of_passengers;
    int transmissionID, fuelTypeID, drivetrainID;
    bool availability;
    QDate lastServiced;

signals:

};

#endif // VEHICLE_H
