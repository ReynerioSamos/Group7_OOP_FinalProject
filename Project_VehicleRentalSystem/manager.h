#ifndef MANAGER_H
#define MANAGER_H

#include <QMainWindow>

namespace Ui {
class Manager;
}

class Manager : public QMainWindow
{
    Q_OBJECT

public:
    explicit Manager(QWidget *parent = nullptr);
    ~Manager();

private slots:
    void on_managerCreateCustomersButton_clicked();

    void on_Back_1_clicked();

    void on_managerUpdateCustomersButton_clicked();

    void on_Back_2_clicked();

    void on_managerDeleteCustomersButton_clicked();

    void on_Back_3_clicked();

    void on_managerCreateEmployeeButton_clicked();

    void on_Back_4_clicked();

    void on_managerUpdateEmployeeButton_clicked();

    void on_Back_5_clicked();

    void on_Back_6_clicked();

    void on_managerDeleteEmployeeButton_clicked();

    void on_managerCreateTechnicianButton_clicked();

    void on_Back_7_clicked();

    void on_managerUpdateTechnicianButton_clicked();

    void on_Back_8_clicked();

    void on_managerDeleteTechnicianButton_clicked();

    void on_Back_9_clicked();

    void on_managerAddVehicleButton_clicked();

    void on_Back_10_clicked();

    void on_Back_11_clicked();

    void on_managerEditVehicleButton_clicked();

    void on_managerDeleteVehicleButton_clicked();

    void on_Back_12_clicked();

    void on_managerViewContractButton_clicked();

    void on_Back_25_clicked();

    void on_Back__clicked();

    void on_managerApproveContractButton_clicked();

    void on_managerDeleteContractButton_clicked();

    void on_DeleteContracts_Back_clicked();

    void on_managerEmployeeReportButton_clicked();

    void on_Reports_Back_3_clicked();

    void on_managerRequestApprovalButton_clicked();

    void on_RepairRequestApproved_Back_clicked();

private:
    Ui::Manager *ui;
};

#endif // MANAGER_H
