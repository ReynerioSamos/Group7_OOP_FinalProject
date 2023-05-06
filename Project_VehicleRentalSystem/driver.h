#ifndef DRIVER_H
#define DRIVER_H

#include "person.h"
#include <QObject>
#include <QString>
#include <QDate>

class Driver : public Person
{
public:
    explicit Driver(QObject *parent = nullptr);

    //Constructors

    //set functions
    void setDriverID(int driverid);
    void setLicenseClassID(int licnscid);
    void setLicenseClass(QString licnscl);
    void setLicenseExp(QDate licnsexp);
    void setNotes(QString notes);

    //get functions
    int getDriverID();
    int getlLicenseClassID();
    QString getLicenseClass();
    QDate getLicenseExp();
    QString getNotes();


private:
    int driverID;
    int licenseClassID;
    QString licenseClass;
    QDate licenseExp;
    // would be used to note what specific type of vehicle they usually drive,
    // such as a boxtruck vs a freight truck;
    QString notes;


};

#endif // DRIVER_H
