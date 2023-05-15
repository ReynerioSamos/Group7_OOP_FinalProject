#ifndef CLERK_H
#define CLERK_H

#include <QMainWindow>

namespace Ui {
class Clerk;
}

class Clerk : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clerk(QWidget *parent = nullptr);
    ~Clerk();

private slots:
    void on_Create_Customers_Button_clicked();

    void on_CreateCustomer_Back_clicked();

    void on_Update_Customers_Button_clicked();

    void on_UpdateCustomer_Back_clicked();

    void on_DeleteCustomer_Back_clicked();

    void on_Delete_Customers_Button_clicked();

    void on_CreateRepair_Back_clicked();

    void on_Create_RepairRequests_Button_clicked();

    void on_Update_RepairRequests_Button_clicked();

    void on_UpdateRepair_Back_clicked();

    void on_Create_RentalRequests_Button_clicked();

    void on_Create_Rental_Request_Back_clicked();

    void on_Update_Rental_Request_Back_clicked();

    void on_Update_RentalRequests_Button_clicked();

    void on_Delete_RentalRequests_Button_clicked();

    void on_Delete_Rental_Request_Back_clicked();

    void on_Approve_Rental_Request_Back_clicked();

    void on_Approve_RentalRequests_Button_clicked();

    void on_Create_MaintenanceRequests_Button_clicked();

    void on_Create_Maintenance_Request_Back_clicked();

    void on_Create_Maintenance_Request_Back_2_clicked();

    void on_Update_MaintenanceRequests_Button_clicked();

    void on_Create_RepairRequests_Button_2_clicked();

    void on_Reports_Section_Button_clicked();

    void on_Reports_Back_clicked();

    void on_Report_Button_clicked();

    void on_ReportsButton_clicked();

    void on_Go_Reports_Button_clicked();

    void on_Create_Customer_Submit_2_clicked();

    void on_Create_Customer_Clear_clicked();

    void on_Update_Customer_Submit_clicked();

    void on_Update_Customer_Clear_clicked();

    void on_UpdateCustomer_RefreshTable_clicked();

    void on_DeleteCustomer_Delete_Button_clicked();

    void on_CreateRepairRequest_Submit_clicked();

    void on_UpdateRepairRequest_Submit_clicked();

    void on_CreateRentalRequest_Submit_clicked();

    void on_UpdateRentalRequest_tableView_Submit_clicked();

    void on_DeleteRentalRequest_Delete_clicked();

    void on_ApproveRentalRequest_Approve_clicked();

    void on_CreateMaintenanceRequest_Submit_clicked();

    void on_UpdateMaintenanceReq_Save_clicked();

private:
    Ui::Clerk *ui;
};

#endif // CLERK_H
