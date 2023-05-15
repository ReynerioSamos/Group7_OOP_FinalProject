#ifndef DRIVERREQUEST_H
#define DRIVERREQUEST_H

#include <QString>
#include <QDate>


class DriverRequest
{
public:
    DriverRequest();

private:
    int DriverRequestID;
    int DriverID;
    int EmployeeID;
    QDate dateRequested;
    QDate dateStart, dateEnd;
    double driversFee;
    QString notes;
};

#endif // DRIVERREQUEST_H
