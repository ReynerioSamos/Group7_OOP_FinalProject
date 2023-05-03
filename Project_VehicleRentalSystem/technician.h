#ifndef TECHNICIAN_H
#define TECHNICIAN_H

#include "person.h"
#include <QObject>

class Technician : public Person
{
public:
    explicit Technician(QObject *parent = nullptr);

    //constructors

    //set functions
    void setTechnicianID(int techid);
    void setTypeOfTechnician (QString techDesc);

    //get functions
    int getTechnicianID();
    QString getTypeOfTechnician();

private:
    int technicianID;
    QString TypeOfTechnician;
};

#endif // TECHNICIAN_H
