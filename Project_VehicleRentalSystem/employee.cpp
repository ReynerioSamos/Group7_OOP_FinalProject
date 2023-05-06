#include "employee.h"

Employee::Employee(QObject *parent)
    : Person{parent}
{
    employeeID = 0;
    PositionID = 0;
    Position =  "";
    salary = 0;
    DateEmployed = QDate::currentDate();
}

Employee::Employee(int empid)
{
    employeeID = empid;
    PositionID = 0;
    Position =  "";
    salary = 0;
    DateEmployed = QDate::currentDate();
}

void Employee::setEmployeeID(int empid) {employeeID = empid; }

void Employee::setPositionID(int postid) {PositionID = postid; }

void Employee::setPosition(QString pos) { Position = pos; }

void Employee::setSalary(double sal) { salary = sal; }

void Employee::setDateEmployed(QDate dateemp) { DateEmployed = dateemp; }

int Employee::getEmployeeID() { return employeeID; }

int Employee::getPositionID() { return PositionID; }

QString Employee::getPosition() { return Position; }

double Employee::getSalary() { return salary; }

QDate Employee::getDateEmployed() { return DateEmployed; }
