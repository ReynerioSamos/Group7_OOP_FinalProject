#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include <QObject>

class Employee : public Person
{
public:
    explicit Employee(QObject *parent = nullptr);

    //Constructors
    Employee(int empit);
    Employee(int empid, int postid, QString pos, double sal, QDate dateemp);
    ~Employee();

    //set functions
    void setEmployeeID(int empid);
    void setPositionID(int postid);
    void setPosition(QString pos);
    void setSalary(double sal);
    void setDateEmployed(QDate dateemp);

    //get functions
    int getEmployeeID();
    int getPositionID();
    QString getPosition();
    double getSalary();
    QDate getDateEmployed();


private :
   int employeeID;
   int PositionID;
   QString Position;
   double salary;
   QDate DateEmployed;

};

#endif // EMPLOYEE_H
