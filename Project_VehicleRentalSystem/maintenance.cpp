#include "maintenance.h"
#include "ui_maintenance.h"

Maintenance::Maintenance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Maintenance)
{
    ui->setupUi(this);

    ui->MainW->setCurrentIndex(0);
}

Maintenance::~Maintenance()
{
    delete ui;
}

void Maintenance::on_jobsMarkedCompletedButton_clicked()
{
    ui->MainW->setCurrentIndex(1);
}


void Maintenance::on_updateVehicleStateButton_clicked()
{
    ui->MainW->setCurrentIndex(2);
}


void Maintenance::on_makeRepairRequestButton_clicked()
{
    ui->MainW->setCurrentIndex(3);
}


void Maintenance::on_Back_01_clicked()
{
      ui->MainW->setCurrentIndex(0);
}


void Maintenance::on_Back_02_clicked()
{
      ui->MainW->setCurrentIndex(0);
}


void Maintenance::on_Back_03_clicked()
{
      ui->MainW->setCurrentIndex(0);
}

