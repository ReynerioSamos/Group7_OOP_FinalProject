#include "clerk.h"
#include "qdatetime.h"
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

// Creating a new Customer
void Clerk::on_Create_Customer_Submit_2_clicked()           // When Create Customer button is clicked
{
    // We capture all the value from the line edits.
    QString phoneNumber = ui->Create_Customer_PhoneNum->text();
    QString email = ui->Create_Customer_Email->text();
    QString dateAdded = ui->Create_Customer_DateAdded->text();

    // Then call the required function with the correct arugument

}

void Clerk::on_Create_Customer_Clear_clicked()              // Just clears all the line edits when making a new Customer.
{
    ui->Create_Customer_PhoneNum->clear();
    ui->Create_Customer_Email->clear();
    ui->Create_Customer_DateAdded->clear();
}



/************************************************************* update customer section *********************************************************************/
void Clerk::on_Update_Customers_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(2);
}


void Clerk::on_UpdateCustomer_Back_clicked()                    // Navigates back to the Dashboard
{
    ui->ClerkMain->setCurrentIndex(0);
}


void Clerk::on_Update_Customer_Submit_clicked()                     // Updates a new customer that was already in the system:
{
    // We capture all the value from the line edits.
    QString phoneNumber = ui->Update_Customer_PhoneNum->text();
    QString email = ui->Update_Customer_Email->text();
    QString dateAdded = ui->Update_Customer_DateAdded->text();

    // Then call the required function with the correct arugument

}

void Clerk::on_Update_Customer_Clear_clicked()              // Just clears all the line edits when making a new Customer.
{
    ui->Update_Customer_PhoneNum->clear();
    ui->Update_Customer_Email->clear();
    ui->Update_Customer_DateAdded->clear();
}


void Clerk::on_UpdateCustomer_RefreshTable_clicked()          // Refreshes the table view in the update customer section (UpdateUser_tableView)
{
    // Should refresh the table view (ui->UpdateUser_tableView) values:

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



void Clerk::on_DeleteCustomer_Delete_Button_clicked()           // Function to delete a Customer
{
     // Get the ID of the Customer to be deleted
     QString ID = ui->Delete_Customer_UserID->text();

     // call the appropriate function with the ID argument.


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


void Clerk::on_CreateRepairRequest_Submit_clicked()                         // Making a repair Request
{
      QString VehicleID = ui->CreateRepairRequest_VehicleID_ComboBox->currentText();            //combo box
      QString VehicleType = ui->CreateRepairRequest_VehicleType->text();
      QString EmpID = ui->CreateRepairRequest_EmployeeID->text();
      QString TechnicianID = ui->CreateRepairRequest_TechnicianID_ComboBox->currentText();      //combo box
      QDate DateRequested = ui->CreateRepairRequest_DateRequested->date();
      QString RepairFee = ui->CreateRepairRequest_RepairFee->text();
      QString ApprovalStatus = ui->CreateRepairRequest_ApprovalStatus->currentText();           //combo box
      QString ManagerID = ui->CreateRepairRequest_ManagerID->currentText();
      QDate ApprovalDate = ui->CreateRepairRequest_ApprovalDate->date();
      QString Notes = ui->CreateRepairRequest_Notes->text();


      // call the appropriate function
}



/************************************************************* update Repair Requests section *********************************************************************/

void Clerk::on_Update_RepairRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(5);
}


void Clerk::on_UpdateRepair_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}



void Clerk::on_UpdateRepairRequest_Submit_clicked()
{
    QString VehicleID = ui->UpdateRepairRequest_VehicleID_ComboBox->currentText();            //combo box
    QString VehicleType = ui->UpdateRepairRequest_VehicleType->text();
    QString EmpID = ui->UpdateRepairRequest_EmployeeID->text();
    QString TechnicianID = ui->UpdateRepairRequest_TechnicianID_ComboBox->currentText();      //combo box
    QDate DateRequested = ui->UpdateRepairRequest_DateRequested->date();
    QString RepairFee = ui->UpdateRepairRequest_RepairFee->text();
    QString ApprovalStatus = ui->UpdateRepairRequest_ApprovalStatus->currentText();           //combo box
    QString ManagerID = ui->UpdateRepairRequest_ManagerID->currentText();
    QDate ApprovalDate = ui->UpdateRepairRequest_ApprovalDate->date();
    QString Notes = ui->UpdateRepairRequest_Notes->text();

    // Call the function to update the repair request


    // Then refresh the table view (ui->UpdateRepairRequest_TableView)
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

// Creating Rental Request

void Clerk::on_CreateRentalRequest_Submit_clicked()
{
     int CustomerID = ui->CreateRentalRequest_CustomerID->text().toInt();
     int CustomerType = ui->CreateRentalRequest_CustomerType->text().toInt();
     int VehicleID = ui->CreateRentalRequest_VehicleID->text().toInt();
     QString VehicleType = ui->CreateRepairRequest_VehicleType->text();
     int EmpID = ui->CreateRentalRequest_EmpID->text().toInt();
     QDate DateRequested = ui->CreateRentalRequest_DateRequested->date();
     QString DriverRequested = ui->CreateRentalRequest_DriverRequested->currentText();
     int DeiverRequestedID = ui->CreateRentalRequest_DriverRequestID->text().toInt();
     int DaysRentPeriod = ui->CreateRentalRequest_DaysRentPeriod->text().toInt();
     float DailyRate = ui->CreateRentalRequest_DailyRate->text().toFloat();
     float TotalCost = ui->CreateRentalRequest_TotalCost->text().toFloat();
     QString PaymentStatus = ui->CreateRentalRequest_PaymentStatus->currentText();
     QDate DateStart = ui->CreateRentalRequest_DateStart->date();
     QDate DateEnd = ui->CreateRentalRequest_DateEnd->date();
     QString ApprovalStatus = ui->CreateRepairRequest_ApprovalStatus->currentText();

     // Call the appropriate function:


}


/************************************************************* Update Rental Requests section *********************************************************************/
void Clerk::on_Update_RentalRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(7);

     // Should insert the report function in the table view of this section
     // ui-> UpdateRentalRequest_tableView
}

void Clerk::on_Update_Rental_Request_Back_clicked()
{
 ui->ClerkMain->setCurrentIndex(0);
}

void Clerk::on_UpdateRentalRequest_tableView_Submit_clicked()
{
    // capture all the edits made
 int CustomerID = ui->UpdateRentalRequest_CustomerID->text().toInt();
 int CustomerType = ui->UpdateRentalRequest_CustomerType->text().toInt();
 int VehicleID = ui->UpdateRentalRequest_VehicleID->text().toInt();
 QString VehicleType = ui->UpdateRepairRequest_VehicleType->text();
 int EmpID = ui->UpdateRentalRequest_EmpID->text().toInt();
 QDate DateRequested = ui->UpdateRentalRequest_DateRequested->date();
 QString DriverRequested = ui->UpdateRentalRequest_DriverRequested->currentText();
 int DeiverRequestedID = ui->UpdateRentalRequest_DriverRequestID->text().toInt();
 int DaysRentPeriod = ui->UpdateRentalRequest_DaysRentPeriod->text().toInt();
 float DailyRate = ui->UpdateRentalRequest_DailyRate->text().toFloat();
 float TotalCost = ui->UpdateRentalRequest_TotalCost->text().toFloat();
 QString PaymentStatus = ui->UpdateRentalRequest_PaymentStatus->currentText();
 QDate DateStart = ui->UpdateRentalRequest_DateStart->date();
 QDate DateEnd = ui->UpdateRentalRequest_DateEnd->date();
 QString ApprovalStatus = ui->UpdateRepairRequest_ApprovalStatus->currentText();

    // Call the appropriatefunction

    // Also Refresh the table view in this Screen ( ui-> UpdateRentalRequest_tableView )

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

void Clerk::on_DeleteRentalRequest_Delete_clicked()
{
    //
     QString ID = ui->DeleteRentalRequest_ID->text();

     // Call the function to delete the Request with Request_ID = ID

     //Also refresh the Table view on this screen
     //     ui->DeleteRentalRequest_tableView
}

/************************************************************* Approve Rental Requests section *********************************************************************/
// Moving the the Approve Rental Requests screen
void Clerk::on_Approve_RentalRequests_Button_clicked()
{
     ui->ClerkMain->setCurrentIndex(9);

     // Should display the request in the table view which is in this screen
         // ui->ApproveRentalRequests_tableView
}

// Moving back to Dashboard
void Clerk::on_Approve_Rental_Request_Back_clicked()
{
         ui->ClerkMain->setCurrentIndex(0);
}


// Approve the rental request
void Clerk::on_ApproveRentalRequest_Approve_clicked()
{
    // Capture the id of the request to be approved
         int RequestId = ui->ApproveRentalRequest_ID->text().toInt();   // can convert to int b

         // call the approprite function


         // Refresh the table view in this section
         // ui->ApproveRentalRequests_tableView
}


/************************************************************* Create Maintenance Requests section *********************************************************************/
// Moving from Dashboard to MaintenanceRequest screen
void Clerk::on_Create_MaintenanceRequests_Button_clicked()
{
         ui->ClerkMain->setCurrentIndex(10);
}

// Moving back to dashboard
void Clerk::on_Create_Maintenance_Request_Back_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}

// Creating the MaintenanceRequest
void Clerk::on_CreateMaintenanceRequest_Submit_clicked()
{
    int VehicleID = ui->CreateMaintenanceRequest_VehicleID->text().toInt();
    QString VehicleType = ui->CreateRentalRequest_VehicleType->text();
    int EmpID = ui->CreateMaintenanceRequest_EmpID->text().toInt();
    QDate DateRequested = ui->CreateMaintenanceRequest_DateRequested->date();
    QString ApprovalStatus = ui->CreateRentalRequest_ApprovalStatus->currentText();     // still a string in a combo box,
    int MaintenanceID = ui->CreateMaintenanceRequest_MaintenanceID->text().toInt();
    QDate approvalDate = ui->CreateRepairRequest_ApprovalDate->date();
    QString Notes = ui->CreateMaintenanceRequest_Notes->text();

    // Call the appropriate function:

}


/************************************************************* Update Maintenance Requests section *********************************************************************/

void Clerk::on_Update_MaintenanceRequests_Button_clicked()
{
    ui->ClerkMain->setCurrentIndex(11);

    // Also, populate the   " ui->UpdateMaintenanceReq_tableView " table view here.
}

// Moving back to dashboard
void Clerk::on_Create_Maintenance_Request_Back_2_clicked()
{
    ui->ClerkMain->setCurrentIndex(0);
}

// Updating the maintenance request
void Clerk::on_UpdateMaintenanceReq_Save_clicked()
{
 //   UpdateMaintenanceReq_tableView

    int VehicleID = ui->UpdateMaintenanceRequest_VehicleID->text().toInt();
    QString VehicleType = ui->UpdateRentalRequest_VehicleType->text();
    int EmpID = ui->UpdateMaintenanceRequest_EmpID->text().toInt();
    QDate DateRequested = ui->UpdateMaintenanceRequest_DateRequested->date();
    QString ApprovalStatus = ui->UpdateRentalRequest_ApprovalStatus->currentText();     // still a string in a combo box,
    int MaintenanceID = ui->UpdateMaintenanceRequest_MaintenanceID->text().toInt();
    QDate approvalDate = ui->UpdateRepairRequest_ApprovalDate->date();
    QString Notes = ui->UpdateMaintenanceRequest_Notes->text();

    // Call the appropriate function:

    // Also refresh the " ui->UpdateMaintenanceReq_tableView " table view here. to show the user the changes made.
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







