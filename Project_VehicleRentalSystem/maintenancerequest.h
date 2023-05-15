#ifndef MAINTENANCEREQUEST_H
#define MAINTENANCEREQUEST_H

#include <QString>
#include <QDate>

class MaintenanceRequest
{
public:
    MaintenanceRequest();

private:
    int MaintenanceRequestID;
    int VehicleID;
    QString VehicleType;
    int EmployeeID;
    QDate dateRequested;
    bool approvalStatus;
    int MaintenanceID;
    QDate approvalDate;
    QString notes;
};

#endif // MAINTENANCEREQUEST_H
