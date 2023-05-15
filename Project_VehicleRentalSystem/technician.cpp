#include "technician.h"

Technician::Technician(QObject *parent)
    : Person{parent}
{
    technicianID = 0;
    TypeOfTechnician="";
}

Technician::~Technician()
{

}

Technician::Technician(int techid)
{
    technicianID = techid;
    TypeOfTechnician="";
}

void Technician::setTechnicianID(int techid)
{ technicianID=techid; }

void Technician::setTypeOfTechnician(QString techDesc)
{ TypeOfTechnician=techDesc; }

int Technician::getTechnicianID()
{ return technicianID; }

QString Technician::getTypeOfTechnician()
{ return TypeOfTechnician; }
