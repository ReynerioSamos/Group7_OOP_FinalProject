#include "clerk.h"
#include "ui_clerk.h"

Clerk::Clerk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clerk)
{
    ui->setupUi(this);
    setCentralWidget(ui->ClerkMain);
    ui->ClerkMain->setCurrentIndex(0);
    // The background for Clerk Screen.
    QPixmap DashboardImg("C:/Users/15sho/Documents/OOP_Project/Session1/Vehicle_Rental_Sytem/img/Back1.jpg");
    ui->CLerkImg->setPixmap(DashboardImg);
    //connect(ui->bttoncenep, SIGNAL(clicked()), this, SLOT(Affichefencenep()));
    connect(ui->Go_Reports_Button,SIGNAL(  clicked() ),this,SLOT (on_Go_Reports_Button_clicked()));

}

Clerk::~Clerk()
{
    delete ui;
}

/************************************************************* create customer section *********************************************************************/
void Clerk::on_Create_Customers_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(1);
}

void Clerk::on_CreateCustomer_Back_clicked()                // Moving from create customer screen back to Dashboard
{
    ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* update customer section *********************************************************************/
void Clerk::on_Update_Customers_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(2);
}


void Clerk::on_UpdateCustomer_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}
/************************************************************* Delete customer section *********************************************************************/

void Clerk::on_Delete_Customers_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(3);
}

void Clerk::on_DeleteCustomer_Back_clicked()
{
     ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Create Repair Requests section *********************************************************************/


void Clerk::on_Create_RepairRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(4);
}


void Clerk::on_CreateRepair_Back_clicked()
{
      ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Create Repair Requests section *********************************************************************/

void Clerk::on_Update_RepairRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(5);
}


void Clerk::on_UpdateRepair_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Create Rental Requests section *********************************************************************/

void Clerk::on_Create_RentalRequests_Button_clicked()
{
 ui->ClerkMain->setCurrentIndex(6);
}

void Clerk::on_Create_Rental_Request_Back_clicked()
{
     ui->ClerkMain->setCurrentIndex(0);
}


/************************************************************* Update Rental Requests section *********************************************************************/
void Clerk::on_Update_RentalRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(7);
}

void Clerk::on_Update_Rental_Request_Back_clicked()
{
 ui->ClerkMain->setCurrentIndex(0);
}


/************************************************************* Delete Rental Requests section *********************************************************************/

void Clerk::on_Delete_RentalRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(8);
}

void Clerk::on_Delete_Rental_Request_Back_clicked()
{
     ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Approve Rental Requests section *********************************************************************/
void Clerk::on_Approve_RentalRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(9);
}

void Clerk::on_Approve_Rental_Request_Back_clicked()
{
         ui->ClerkMain->setCurrentIndex(0);
}


/************************************************************* Approve Rental Requests section *********************************************************************/

void Clerk::on_Create_MaintenanceRequests_Button_clicked()
{
         ui->ClerkMain->setCurrentIndex(10);
}


void Clerk::on_Create_Maintenance_Request_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Approve Rental Requests section *********************************************************************/

void Clerk::on_Update_MaintenanceRequests_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(11);
}


void Clerk::on_Create_Maintenance_Request_Back_2_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}

/************************************************************* Reports   section *********************************************************************/
void Clerk::on_Report_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(12);
}

void Clerk::on_Reports_Section_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(12);
}

void Clerk::on_Reports_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}





void Clerk::on_Go_Reports_Button_clicked()
{
         ui->ClerkMain->setCurrentIndex(12);
}

