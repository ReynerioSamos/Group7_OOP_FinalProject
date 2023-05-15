#include "vehiclerentalrequest.h"
#include <QString>

VehicleRentalRequest::VehicleRentalRequest()
{
    VehicleRequestID = 0;
    CustomerID = 0;
    VehicleID = 0;
    EmployeeID = 0;
    driverRequest = false;
    DriverRequestID = 0;
    daysRentPeriod = 0;
    dailyRate = 0;
    totalCost = 0;
    paymentStatus = false;
    approvalStatus = false;

}

// Getters
int VehicleRentalRequest::getVehicleRequestID(){
return VehicleRequestID;
}

int VehicleRentalRequest::getCustomerID() {
return CustomerID;
}

QString VehicleRentalRequest::getCustomerType()  {
return CustomerType;
}

int VehicleRentalRequest::getVehicleID()  {
return VehicleID;
}

QString VehicleRentalRequest::getVehicleType()  {
return VehicleType;
}

int VehicleRentalRequest::getEmployeeID()  {
return EmployeeID;
}

QDate VehicleRentalRequest::getDateRequested()  {
return dateRequested;
}

bool VehicleRentalRequest::getDriverRequest()  {
return driverRequest;
}

int VehicleRentalRequest::getDriverRequestID()  {
return DriverRequestID;
}

int VehicleRentalRequest::getDaysRentPeriod()  {
return daysRentPeriod;
}

double VehicleRentalRequest::getDailyRate()  {
return dailyRate;
}

double VehicleRentalRequest::getTotalCost()  {
return totalCost;
}

bool VehicleRentalRequest::getPaymentStatus()  {
return paymentStatus;
}

QDate VehicleRentalRequest::getDateStart()  {
return dateStart;
}

QDate VehicleRentalRequest::getDateEnd()  {
return dateEnd;
}

bool VehicleRentalRequest::getApprovalStatus()  {
return approvalStatus;
}

// Setters
void VehicleRentalRequest::setVehicleRequestID(int vehicleRequestID) {
this->VehicleRequestID = vehicleRequestID;
}

void VehicleRentalRequest::setCustomerID(int customerID) {
this->CustomerID = customerID;
}

void VehicleRentalRequest::setCustomerType( QString customerType) {
this->CustomerType = customerType;
}

void VehicleRentalRequest::setVehicleID(int vehicleID) {
this->VehicleID = vehicleID;
}

void VehicleRentalRequest::setVehicleType( QString vehicleType) {
this->VehicleType = vehicleType;
}

void VehicleRentalRequest::setEmployeeID(int employeeID) {
this->EmployeeID = employeeID;
}

void VehicleRentalRequest::setDateRequested(QDate dateRequested) {
this->dateRequested = dateRequested;
}

void VehicleRentalRequest::setDriverRequest(bool driverRequest) {
this->driverRequest = driverRequest;
}

void VehicleRentalRequest::setDriverRequestID(int driverRequestID) {
this->DriverRequestID = driverRequestID;
}

void VehicleRentalRequest::setDaysRentPeriod(int daysRentPeriod) {
this->daysRentPeriod = daysRentPeriod;
}

void VehicleRentalRequest::setDailyRate(double dailyRate) {
this->dailyRate = dailyRate;
}

void VehicleRentalRequest::setTotalCost(double totalCost) {
this->totalCost = totalCost;
}

void VehicleRentalRequest::setPaymentStatus(bool paymentStatus) {
this->paymentStatus = paymentStatus;
}

void VehicleRentalRequest::setDateStart(const QDate dateStart) {
this->dateStart = dateStart;
}

void VehicleRentalRequest::setDateEnd(const QDate dateEnd) {
this->dateEnd = dateEnd;
}

void VehicleRentalRequest::setApprovalStatus(bool approvalStatus) {
this->approvalStatus = approvalStatus;
}

