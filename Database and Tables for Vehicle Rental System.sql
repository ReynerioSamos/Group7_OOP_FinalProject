-- Database and tables creation for Group 7 Vehicle Rental System
-- Group Memebers
-- Reynerio Samos, Julius Shol, Martin Uyi, Kelvin Gordon

--reference tables
/*
TransmissionsTypes
FuelTypes
DrivetrainTypes
RoadTypes
TruckClasses
HitchTypes
BusTypes
BikeTypes
LicenseClasses
Positions
*/

--object class tables
/*
Customer<base>
    ID, phonenumber, email, date_added
Individual
    ID, customerID_FK, firstname, lastname, dateofbirth
Company
    ID, customerID_FK, name, datefounded


Person <base>
    ID, firstname, lastname, dateofbirth, phonenumber, email
Employee
    ID, personID_FK, positionID_FK, salary, dateemployed
Driver
    ID, personID_FK, licenseclassID_FK, licenseexp
Technician
    ID, personID_FK, TypeOfTechnician


Vehicle <base>
    ID, totalmiles, make, model, year, descr, numofpassengers, transmissionTypeID_FK, fueltypeID_FK, drivetraintypeID_FK, availability, lastserviced
Car
    ID, vehicleID_FK, mpg_or_kwh, roadtypeID_FK
Truck
    ID, vehicleID_FK, truckclassID_FK, hitchavailable, hitchtypeID_FK, torque, maxload, mpg
Bus
    ID, vehicleID_FK, bathroom, AC, bustypeID_FK, mpg, length, width, height
Motorbike
    ID, vehicleID-FK, biketypeID_FK, engine, mpg, height

*/

-- create database
CREATE DATABASE IF NOT EXISTS vehicle_rental_service_db;

-- reference tables

CREATE TABLE IF NOT EXISTS TransmissionTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT TransmissionTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS FuelTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT FuelTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS DrivetrainTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT DrivetrainTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS RoadTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT RoadTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS TruckClasses (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT TruckClassID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS HitchTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT HitchTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS BusTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT BusTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS BikeTypes (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT BikeTypeID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS LicenseClasses (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT LicenseClassID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS Positions (
    ID int NOT NULL auto_increment,
    Descr varchar(100) NOT NULL,

    CONSTRAINT PositionID_PK primary key(ID)
);

-- Object Tables

-- base class table
CREATE TABLE IF NOT EXISTS Customers (
    ID int NOT NULL auto_increment,
    phoneNumber varchar(15) NOT NULL,
    email varchar(100)NOT NULL,
    dateAdded date,

    CONSTRAINT CustomerID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS Individuals (
    ID int NOT NULL auto_increment,
    CustomerID int NOT NULL,
    firstName varchar(50) NOT NULL,
    lastName varchar(50) NOT NULL,
    DoB date,

    CONSTRAINT IndividualID_PK primary key(ID),
    CONSTRAINT CustomerID_FK foreign key(CustomerID) REFERENCES Customers(ID)
);

CREATE TABLE IF NOT EXISTS Companies (
    ID int NOT NULL auto_increment,
    CustomerID int NOT NULL,
    companyName varchar(100) NOT NULL,
    dateFounded date,

    CONSTRAINT CompanyID_PK primary key(ID),
    CONSTRAINT CustomerID_FK foreign key(CustomerID) REFERENCES Customers(ID)
);

-- base class table
CREATE TABLE IF NOT EXISTS Persons (
    ID int NOT NULL auto_increment,
    firstName varchar(50) NOT NULL,
    lastName varchar(50) NOT NULL,
    DoB date,
    phoneNumber varchar(15) NOT NULL,
    email varchar(100),

    CONSTRAINT PersonID_PK primary key(ID)
);

CREATE TABLE IF NOT EXISTS Employees (
    ID int NOT NULL auto_increment,
    PersonID int NOT NULL,
    PositionID int NOT NULL,
    salary numeric(8,2) NOT NULL,
    dateEmployed date,
    username varchar (51) NOT NULL,
    password varchar (32) NOT NULL,

    CONSTRAINT EmployeeID_PK primary key(ID),
    CONSTRAINT PersonID_FK foreign key(PersonID) REFERENCES Persons(ID),
    CONSTRAINT PositionID_FK foreign key(PositionID) REFERENCES Positions(ID)

);

CREATE TABLE IF NOT EXISTS Drivers (
    ID int NOT NULL auto_increment,
    PersonID int NOT NULL,
    LicenseClassID int NOT NULL,
    licenseExp date,

    CONSTRAINT DriverID_PK primary key(ID),
    CONSTRAINT PersonID_FK foreign key(PersonID) REFERENCES Persons(ID),
    CONSTRAINT LicenseClassID_FK foreign key(LicenseClassID) REFERENCES LicenseClasses(ID)

);

CREATE TABLE IF NOT EXISTS Technicians (
    ID int NOT NULL auto_increment,
    PersonID int NOT NULL,
    typeofTechnician varchar (100),

    CONSTRAINT TechnicianID_PK primary key(ID),
    CONSTRAINT PersonID_FK foreign key(PersonID) REFERENCES Persons(ID)

);

-- base class table
CREATE TABLE IF NOT EXISTS Vehicles (
    ID int NOT NULL auto_increment,
    totalMiles int(10) NOT NULL,
    make varchar(50) NOT NULL,
    model varchar(100) NOT NULL,
    -- had to name this yearmade instead of year because of the keyword year
    yearMade int(4) NOT NULL,
    descr varchar (100),
    numOfPassengers int(4),
    TransmissionTypeID int NOT NULL,
    FuelTypeID int NOT NULL,
    DrivetrainTypeID int NOT NULL,
    -- used as psudo-bool to set whether a vehicle is available or not 
    available tinyint(1),
    lastServiced date, 

    CONSTRAINT VehicleID_PK primary key(ID),
    CONSTRAINT TransmissionTypeID_FK foreign key(TransmissionTypeID) REFERENCES TransmissionsTypes(ID),
    CONSTRAINT FuelTypeID_FK foreign key(FuelTypeID) REFERENCES FuelTypes(ID),
    CONSTRAINT DrivetrainTypeID_FK foreign key(DrivetrainTypeID) REFERENCES DrivetrainTypes(ID)

);

CREATE TABLE IF NOT EXISTS Cars (
    ID int NOT NULL auto_increment,
    VehicleID int NOT NULL,
    mpg_or_kwh int(4) NOT NULL,
    RoadTypeID int NOT NULL,

    CONSTRAINT CarID_PK primary key(ID),
    CONSTRAINT VehicleID_FK foreign key(VehicleID) REFERENCES Vehicles(ID),
    CONSTRAINT RoadTypeID_FK foreign key(RoadTypeID) REFERENCES RoadTypes(ID)

);

CREATE TABLE IF NOT EXISTS Trucks (
    ID int NOT NULL auto_increment,
    VehicleID int NOT NULL,
    TruckClassID int NOT NULL,
    hitchAvailable tinyint(1),
    HitchTypeID int,
    -- measured in lbft (poundfeet)
    torque int(6) NOT NULL,
    maxLoad int(6) NOT NULL,
    mpg int(4) NOT NULL,

    CONSTRAINT TruckID_PK primary key(ID),
    CONSTRAINT VehicleID_FK foreign key(VehicleID) REFERENCES Vehicles(ID),
    CONSTRAINT TruckClassID_FK foreign key(TruckClassID) REFERENCES TruckClasses(ID),
    CONSTRAINT HitchTypeID_FK foreign key(HitchTypeID) REFERENCES HitchTypes(ID)

);

CREATE TABLE IF NOT EXISTS Busses (
    ID int NOT NULL auto_increment,
    VehicleID int NOT NULL,
    bathroom tinyint(1) NOT NULL,
    AC tinyint(1) NOT NULL,
    BusTypeID int NOT NULL,
    mpg int (4) NOT NULL,
    busLength int(3) NOT NULL,
    busWidth int (3) NOT NULL,
    busHeight int(3) NOT NULL,

    CONSTRAINT BusID_PK primary key(ID),
    CONSTRAINT VehicleID_FK foreign key(VehicleID) REFERENCES Vehicles(ID),
    CONSTRAINT BusTypeID_FK foreign key(BusTypeID) REFERENCES BusTypes(ID)

);

CREATE TABLE IF NOT EXISTS Motorbikes (
    ID int NOT NULL auto_increment,
    VehicleID int NOT NULL,
    engine varchar(100) NOT NULL,
    mpg int(4) NOT NULL,
    bikeHeigth int(3) NOT NULL,

    CONSTRAINT MotorbikeID_PK primary key(ID),
    CONSTRAINT VehicleID_FK foreign key(VehicleID) REFERENCES Vehicles(ID)

);

-- Tables use to process records and transaction like rental requests, driver requests, repair requests, maintenance request, etc.


