#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <QDialog>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDebug>

#include "customer.h"
#include "company.h"
#include "individual.h"

#include "vehicle.h"
#include "bus.h"
#include "car.h"
#include "truck.h"
#include "motorbike.h"

#include "person.h"
#include "driver.h"
#include "employee.h"
#include "technician.h"


class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);

    ~Database();

    bool openDatabase();
    void closeDatabase();

    // Insert Queries used to add into database
    bool insertCustomer(Customer& cust);
    bool insertCompany (Company& comp, int custID);
    bool insertIndividual (individual& indiv, int custID);

    bool insertPerson (Person& pers);
    bool insertEmployee (Employee& emp, int persID, QString user, QString pass);
    bool insertDriver (Driver& drvr, int persID);
    bool insertTechnician (Technician& tech, int persID );

    bool insertVehicle (Vehicle& vehicleobj);
    bool insertCar (Car& carobj, int vehicleID);
    bool insertTruck (Truck& truckobj, int vehicleID);
    bool insertBus (Bus& busobj, int vehicleID);
    bool insertMotorbike (Motorbike& bike, int vehicleID);

    // Update Queries used to update existing elements in database
    bool updateCustomer (Customer& cust);
    bool updateCompany (Company& comp);
    bool updateIndividual (individual& indiv);

    bool updatePerson (Person& pers);
    bool updateEmployee (Employee& emp);
    bool updateDriver (Driver& drvr);
    bool updateTechnician (Technician& tech );

    bool updateVehicle (Vehicle& vehicleobj);
    bool updateCar (Car& carobj);
    bool updateTruck (Truck& truckobj);
    bool updateBus (Bus& busobj);
    bool updateMotorbike (Motorbike& bike);

    // Delete queries used to remove existing elements in database
    // better to just pass the ID as it only uses the ID to make the deletion, no sense in passing and keeping an object
    bool deleteCustomer (int custID);
    bool deleteCompany (int compID);
    bool deleteIndividual (int indivID);

    bool deletePerson (int persID);
    bool deleteEmployee (int empID);
    bool deleteDriver (int drvrID);
    bool deleteTechnician (int techID);

    bool deleteVehicle (int vehicleID);
    bool deleteCar (int carID);
    bool deleteTruck (int truckID);
    bool deleteBus (int busobjID);
    bool deleteMotorbike (int bikeID);

private:
    QSqlDatabase db;

signals:

};

#endif // DATABASE_H
