#include "employee.h"

Employee::Employee(QObject *parent)
    : Person{parent}
{
    employeeID = NULL;
    PositionID = NULL;
    Position =  "";
    salary = NULL;
    DateEmployed = NULL;
}

Employee::Employee(int empid)
{
    employeeID = empid;
    PositionID = NULL;
    Position =  "";
    salary = NULL;
    DateEmployed = NULL;
}

Employee::Employee(int empid, int postid, QString pos, double sal, QDate dateemp)
{
    employeeID = empid;
    PositionID = postid;
    Position = pos;
    salary = sal;
    DateEmployed = dateemp;
}


void Employee::setEmployeeID(int empid) {
    employeeID = empid;
}

void Employee::setPositionID(int postid) {
    PositionID = postid;
}

void Employee::setPosition(QString pos) {
    Position = pos;
}

void Employee::setSalary(double sal) {
    salary = sal;
}

void Employee::setDateEmployed(QDate dateemp) {
    DateEmployed = dateemp;
}

int Employee::getEmployeeID() {
    return employeeID;
}

int Employee::getPositionID() {
    return PositionID;
}

QString Employee::getPosition() {
    return Position;
}

double Employee::getSalary() {
    return salary;
}

QDate Employee::getDateEmployed() {
    return DateEmployed;
}