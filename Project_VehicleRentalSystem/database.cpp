#include "database.h"
#include <QtSql>

Database::Database(QObject *parent)
    : QObject{parent}
{
   db = QSqlDatabase::addDatabase("QMYSQL");
   db.setHostName ("127.0.0.1");
   db.setUserName ("root");
   db.setPassword ("");
   db.setDatabaseName ("vehicle_rental_service_db");

   if(db.open())
       qDebug() <<"Successful Connection to db.";
   else if (!db.open())
       qDebug() <<"Failed to connect to database.";

}

Database::~Database()
{
    closeDatabase();
}

bool Database::openDatabase()
{
    if (!db.open()){
        qDebug() << "Failed to connect to database: " << db.lastError().text();
        return false;
    }

    qDebug() << "Connected to database";
    return true;

}

void Database::closeDatabase()
{
    db.close();
    qDebug() << "Disconnected from database";
}

//begining of customer related insert queries
bool Database::insertCustomer(Customer& cust){

    QSqlQuery query(db);

    query.prepare("INSERT INTO customers (phoneNumber, email, dateAdded) "
                  "VALUES (:phoneNumber, :email, :dateAdded);");

    query.bindValue(":phoneNumber", cust.getCustomerPhoneNumber());
    query.bindValue(":email", cust.getEmail());
    query.bindValue(":dateAdded", cust.getDate_added());


    if(!query.exec()){
        qDebug() << "Failed to insert Customer: " << query.lastError().text();
        return false;
    }

    qDebug() << "Customer inserted successfully";
    return true;
}

bool Database::insertCompany(Company& comp, int custID){

    QSqlQuery query(db);

    query.prepare("INSERT INTO companies (CustomerID, companyName, dateFounded) "
                  "VALUES (:CustomerID, :companyName, :dateFounded);");

    query.bindValue(":CustomerID", custID);
    query.bindValue(":companyName", comp.getCompanyName());
    query.bindValue(":dateFounded", comp.getDateFounded());


    if(!query.exec()){
        qDebug() << "Failed to insert Company: " << query.lastError().text();
        return false;
    }

    qDebug() << "Company inserted successfully";
    return true;

}

bool Database::insertIndividual(individual& indiv, int custID)
{

    QSqlQuery query(db);

    query.prepare("INSERT INTO individuals (CustomerID, firstName, lastName, DoB) "
                  "VALUES (:CustomerID, :firstName, :lastName, :DoB);");

    query.bindValue(":CustomerID", custID);
    query.bindValue(":firstName", indiv.getFirstName());
    query.bindValue(":lastName", indiv.getLastName());
    query.bindValue(":DoB", indiv.getDob());


    if(!query.exec()){
        qDebug() << "Failed to insert Individual: " << query.lastError().text();
        return false;
    }

    qDebug() << "Individual inserted successfully";
    return true;

}

// begining of person related insert queries
bool Database::insertPerson (Person& pers)
{
    QSqlQuery query(db);

    query.prepare("INSERT INTO persons (firstName, lastName, DoB, phoneNumber, email) "
                  "VALUES (:firstName, :lastName, :DoB, :phoneNumber, :email);");

    query.bindValue(":firstName", pers.getFirstName());
    query.bindValue(":lastName", pers.getLastName());
    query.bindValue(":DoB", pers.getDoB());
    query.bindValue(":phoneNumber", pers.getPhoneNum());
    query.bindValue(":email", pers.getEmail());


    if(!query.exec()){
        qDebug() << "Failed to insert Person: " << query.lastError().text();
        return false;
    }

    qDebug() << "Person inserted successfully";
    return true;
}

bool Database::insertEmployee (Employee& emp, int persID, QString user, QString pass)
{
    QSqlQuery query(db);

    query.prepare("INSERT INTO employees (PersonID, PositionID, salary, dateEmployed, username, password) "
                  "VALUES (:PersonID, :PositionID, :salary, :dateEmployed, :username, :password);");

    query.bindValue(":PersonID", persID);
    query.bindValue(":PositionID", emp.getPositionID());
    query.bindValue(":salary", emp.getSalary());
    query.bindValue(":dateEmployed", emp.getDateEmployed());
    query.bindValue("username", user);
    query.bindValue(":password", pass);

    if(!query.exec()){
        qDebug() << "Failed to insert Employee: " << query.lastError().text();
        return false;
    }

    qDebug() << "Employee inserted successfully";
    return true;
}

// begining of vehicle-related queries
bool Database::insertVehicle (Vehicle& vehicleobj)
{
    QSqlQuery query(db);

    query.prepare("INSERT INTO vehicles (totalMiles, make, model, yearMade, descr, numOfPassengers, TransmissionTypeID, FuelTypeID, DriveTypeID, available, lastServiced) "
                  "VALUES (:totalMiles, :make, :model, :yearMade, :descr, :numOfPassengers, :TransmissionTypeID, :FuelTypeID, :DrivetrainTypeID, :available, :lastServiced);");

    query.bindValue(":totalMiles", vehicleobj.getTotalMiles());
    query.bindValue(":make", vehicleobj.getMake());
    query.bindValue(":model", vehicleobj.getModel());
    query.bindValue(":yearMade", vehicleobj.getModel());
    query.bindValue(":descr", vehicleobj.getDescription());
    query.bindValue(":numOfPassengers", vehicleobj.getnum_of_passengers());
    query.bindValue(":TransmissionTypeID", vehicleobj.getTransmissionID());
    query.bindValue(":FuelTypeID", vehicleobj.getFuelTypeID());
    query.bindValue(":DrivetrainTypeID", vehicleobj.getDrivetrainID());
    query.bindValue(":available", vehicleobj.getAvailability());
    query.bindValue(":lastServiced", vehicleobj.getLastServiced());


    if(!query.exec()){
        qDebug() << "Failed to insert Vehicle: " << query.lastError().text();
        return false;
    }

    qDebug() << "Vehicle inserted successfully";
    return true;
}

bool Database::insertCar(Car& carobj, int vehicleID)
{
    QSqlQuery query(db);

    query.prepare("INSERT INTO cars (VehicleID, mpg_or_kwh, RoadTypeID) "
                  "VALUES (:VehicleID, :mpg_or_kwh, :RoadTypeID);");

    query.bindValue(":VehicleID", vehicleID);
    query.bindValue(":mpg_or_kwh", carobj.getMPGorKWH());
    query.bindValue(":RoadTypeID", carobj.getRoadType());

    if(!query.exec()){
        qDebug() << "Failed to insert Car: " << query.lastError().text();
        return false;
    }

    qDebug() << "Car inserted successfully";
    return true;
 }


//begining of record related table insert queries (think requests)

