#ifndef REPAIRREQUEST_H
#define REPAIRREQUEST_H

#include <QString>
#include <QDate>

class RepairRequest
{
public:
    RepairRequest();

private:
    int RepairRequestID;
    int VehicleID;
    QString VehicleType;
    int TechnicianID;
    int EmployeeID;
    QDate dateRequested;
    double repairFee;
    bool approvalStatus;
    int ManagerID;
    QDate approvalDate;
    QString notes;

};

#endif // REPAIRREQUEST_H
