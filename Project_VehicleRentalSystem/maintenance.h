#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <QWidget>
// Admin screen Header files



namespace Ui {
class Maintenance;
}

class Maintenance : public QWidget
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = nullptr);
    ~Maintenance();



private slots:
    void on_jobsMarkedCompletedButton_clicked();

    void on_updateVehicleStateButton_clicked();

    void on_makeRepairRequestButton_clicked();

    void on_Back_01_clicked();

    void on_Back_02_clicked();

    void on_Back_03_clicked();

private:
    Ui::Maintenance *ui;
};

#endif // MAINTENANCE_H
