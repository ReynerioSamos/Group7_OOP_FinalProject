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


#include "stringformatters.h"



class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);

    ~Database();

    bool openDatabase();
    void closeDatabase();

    // Insert Queries used to add into database
    bool insertCustomer(const Customer& cust);
    bool insertCompany (const Company& comp);
    bool insertIndividual (const individual& indiv);

    bool insertPerson (const Person& pers);
    bool insertEmployee (const Employee& emp);
    bool insertDriver (const Driver& drvr);
    bool insertTechnician (const Technician& tech );

    bool insertVehicle (const Vehicle& vehicleobj);
    bool insertCar (const Car& carobj);
    bool insertTruck (const Truck& truckobj);
    bool insertBus (const Bus& busobj);
    bool insertMotorbike (const Motorbike& bike);

    // Update Queries used to update existing elements in database

    // Delete queries used to remove existing elements in database



signals:

};

#endif // DATABASE_H
