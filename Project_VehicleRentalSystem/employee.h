#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include <QObject>

class Employee : public Person
{
public:
    explicit Employee(QObject *parent = nullptr);

    //Constructors

    //set functions
    void setEmployeeID(int empid);
    void setPositionID(int postn);
    void setPosition(QString pos);
    void setSalary(double sal);
    void setDateEmployed(QDate datemp);

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
