#include "manager.h"
#include "ui_manager.h"

// Manager screen header files
#include "manager.h"

Manager::Manager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);
    setCentralWidget(ui->ManagerMain);
    ui->ManagerMain->setCurrentIndex(0);
}

Manager::~Manager()
{
    delete ui;
}

/************************************************************* create customer section *********************************************************************/

void Manager::on_managerCreateCustomersButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(1);
}

void Manager::on_Back_1_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* update customer section *********************************************************************/

void Manager::on_managerUpdateCustomersButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(2);
}


void Manager::on_Back_2_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Delete customer section *********************************************************************/

void Manager::on_managerDeleteCustomersButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(3);
}

void Manager::on_Back_3_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Create Employees section *********************************************************************/

void Manager::on_managerCreateEmployeeButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(4);
}

void Manager::on_Back_4_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Update Employees section *********************************************************************/
void Manager::on_managerUpdateEmployeeButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(5);
}

void Manager::on_Back_5_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}


/************************************************************* Delete Employees section *********************************************************************/
void Manager::on_managerDeleteEmployeeButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(6);
}

void Manager::on_Back_6_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Create Technicians section *********************************************************************/
void Manager::on_managerCreateTechnicianButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(7);
}

void Manager::on_Back_7_clicked()
{
     ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Update Technicians section *********************************************************************/
void Manager::on_managerUpdateTechnicianButton_clicked()
{
      ui->ManagerMain->setCurrentIndex(8);
}

void Manager::on_Back_8_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Delete Technicians section *********************************************************************/

void Manager::on_managerDeleteTechnicianButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(9);
}

void Manager::on_Back_9_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}


/************************************************************* Add Vehicles section *********************************************************************/

void Manager::on_managerAddVehicleButton_clicked()
{
    ui->ManagerMain->setCurrentIndex(10);
}

void Manager::on_Back_10_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Edit Vehicles section *********************************************************************/
void Manager::on_managerEditVehicleButton_clicked()
{
      ui->ManagerMain->setCurrentIndex(11);
}

void Manager::on_Back_11_clicked()
{
    ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Delete Vehicles section *********************************************************************/
void Manager::on_managerDeleteVehicleButton_clicked()
{
ui->ManagerMain->setCurrentIndex(12);
}

void Manager::on_Back_12_clicked()
{
      ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* View Contract section *********************************************************************/

void Manager::on_managerViewContractButton_clicked()
{
      ui->ManagerMain->setCurrentIndex(13);
}

void Manager::on_Back_25_clicked()
{
      ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Approve Contract section *********************************************************************/

void Manager::on_managerApproveContractButton_clicked()
{
      ui->ManagerMain->setCurrentIndex(14);
}

void Manager::on_Back__clicked()
{
      ui->ManagerMain->setCurrentIndex(0);
}

/************************************************************* Delete Contract section *********************************************************************/

void Manager::on_managerDeleteContractButton_clicked()
{
   ui->ManagerMain->setCurrentIndex(15);
}

void Manager::on_DeleteContracts_Back_clicked()
{
   ui->ManagerMain->setCurrentIndex(0);
}


/************************************************************* Reports      section *********************************************************************/

void Manager::on_managerEmployeeReportButton_clicked()
{
      ui->ManagerMain->setCurrentIndex(16);
}

void Manager::on_Reports_Back_3_clicked()
{
     ui->ManagerMain->setCurrentIndex(0);
}


/************************************************************* Repair Request Approved section *********************************************************************/

void Manager::on_managerRequestApprovalButton_clicked()
{
  ui->ManagerMain->setCurrentIndex(17);
}


void Manager::on_RepairRequestApproved_Back_clicked()
{
  ui->ManagerMain->setCurrentIndex(0);
}


