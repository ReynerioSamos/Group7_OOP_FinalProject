#ifndef VEHICLERENTALREQUEST_H
#define VEHICLERENTALREQUEST_H

#include <QString>
#include <QDate>


class VehicleRentalRequest
{
public:
    VehicleRentalRequest();

    double CalculateCost(int rentPeriod, double dayrate);

    // Getters
        int getVehicleRequestID();
        int getCustomerID();
        QString getCustomerType();
        int getVehicleID();
        QString getVehicleType();
        int getEmployeeID();
        QDate getDateRequested();
        bool getDriverRequest();
        int getDriverRequestID();
        int getDaysRentPeriod();
        double getDailyRate();
        double getTotalCost();
        bool getPaymentStatus();
        QDate getDateStart();
        QDate getDateEnd();
        bool getApprovalStatus();

     // Setters
        void setVehicleRequestID(int vehicleRequestID);
        void setCustomerID(int customerID);
        void setCustomerType(QString customerType);
        void setVehicleID(int vehicleID);
        void setVehicleType(QString vehicleType);
        void setEmployeeID(int employeeID);
        void setDateRequested( QDate dateRequested);
        void setDriverRequest(bool driverRequest);
        void setDriverRequestID(int driverRequestID);
        void setDaysRentPeriod(int daysRentPeriod);
        void setDailyRate(double dailyRate);
        void setTotalCost(double totalCost);
        void setPaymentStatus(bool paymentStatus);
        void setDateStart(QDate dateStart);
        void setDateEnd(QDate dateEnd);
        void setApprovalStatus(bool approvalStatus);

private:
    int VehicleRequestID;
    int CustomerID;
    QString CustomerType;
    int VehicleID;
    QString VehicleType;
    int EmployeeID;
    QDate dateRequested;
    bool driverRequest;
    int DriverRequestID;
    int daysRentPeriod;
    double dailyRate;
    double totalCost;
    bool paymentStatus;
    QDate dateStart, dateEnd;
    bool approvalStatus;


};

#endif // VEHICLERENTALREQUEST_H
