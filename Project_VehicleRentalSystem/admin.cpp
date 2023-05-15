#include "admin.h"
#include "ui_admin.h"
#include <QDialog>

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    setCentralWidget(ui->AdminMain);
    // The background for adming screen.
    QPixmap DashboardImg("C:/Users/15sho/Documents/OOP_Project/Session1/Vehicle_Rental_Sytem/img/Back1.jpg");
    ui->adminImg->setPixmap(DashboardImg);
    QPixmap Img("C:/Users/15sho/Documents/OOP_Project/Session1/Vehicle_Rental_Sytem/img/Back.jpg");
    //ui->Img2->setPixmap(Img);
    ui->AdminMain->setCurrentIndex(0);
}

Admin::~Admin()
{
    delete ui;
}

/**********************************************************     Create Reports  section ***************************************************************************/
void Admin::on_CreateReports_Button_clicked()               // Moving from dashBoard to create reports section
{
    ui->AdminMain->setCurrentIndex(1);
}

void Admin::on_Create_Reports_Back_clicked()                // Moving from Create reports section back to the dashboard
{
    ui->AdminMain->setCurrentIndex(0);
}


/**********************************************************       Edit Report section       ***********************************************************************/
void Admin::on_EditReports_Button_clicked()                 // Moving from dashBoard to edit reports section
{
    ui->AdminMain->setCurrentIndex(2);
}

void Admin::on_Edit_Reports_Back_clicked()                  // Moving from edit reports section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}


/**********************************************************         Create Table section        *******************************************************************/

void Admin::on_CreateTables_Button_clicked()                // Moving from dashBoard to Create tables section
{
    ui->AdminMain->setCurrentIndex(3);
}


void Admin::on_Create_Tables_Back_clicked()                 // Moving from create tables section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}


/**********************************************************         Edit Table section        *******************************************************************/

void Admin::on_EditTables_Button_clicked()                  // Moving from dashBoard to edit Table section
{
    ui->AdminMain->setCurrentIndex(4);
}

void Admin::on_Edit_Tables_Back_clicked()                   // Moving from Edit tables section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}


/**********************************************************         View Table section        *******************************************************************/

void Admin::on_ViewTables_Button_clicked()                  // Moving from dashBoard to view tables section
{
    ui->AdminMain->setCurrentIndex(5);
}


void Admin::on_View_Tables_Back__clicked()                  // Moving from View tables section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}


/**********************************************************         Delete Table section        *******************************************************************/

void Admin::on_DeleteTables_Button_clicked()                // Moving from dashBoard to Delete Tables section
{
    ui->AdminMain->setCurrentIndex(6);
}


void Admin::on_Delete_Tables_Back__clicked()                  // Moving from Delete tables section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}



/**********************************************************         Create User section        *******************************************************************/

void Admin::on_CreateUser_Button_clicked()                   // Moving from dashBoard to Create User section
{
    ui->AdminMain->setCurrentIndex(7);
}


void Admin::on_Create_User_Back_clicked()                   // Moving from Create User section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}

/**********************************************************         Edit User section        *******************************************************************/

void Admin::on_EditUser_Button_clicked()                      // Moving from dashBoard to edit User section
{
    ui->AdminMain->setCurrentIndex(8);
}


void Admin::on_Edit_User_Back_clicked()                     // Moving from Edit User section back to the dashboard.
{
    ui->AdminMain->setCurrentIndex(0);
}

/**********************************************************         Delete User section        *******************************************************************/

void Admin::on_DeleteUser_Button_clicked()                     // Moving from dashBoard to Delete User section
{
    ui->AdminMain->setCurrentIndex(9);
}


void Admin::on_Delete_User_Back_clicked()                   // Moving from Delete User section back to the dashboard
{
    ui->AdminMain->setCurrentIndex(0);
}

void Admin::on_Logout_clicked()
{

}


void Admin::on_saveButton_clicked()
{
    //My code from adding a user in assignment 2

    /*    database db;


       QString firstName = ui->firstNameLineEdit->text();
       QString lastName = ui->lastNameLineEdit->text();
       QString userName = ui->usernameLineEdit->text();
       QString password = ui->passwordLineEdit->text();
       int positionID = ui->postioncombobox->currentIndex();
       int officeID = ui->officecombobox->currentIndex();
       double salary = ui->salarylineEdit->text().toDouble();



       if (firstName.isEmpty() || lastName.isEmpty() || userName.isEmpty() || password.isEmpty() || salary == 0) {
           QMessageBox::warning(this, "New User", "Missing fields required!");
           return;
       }


       if (db.addUser(firstName, lastName, password, userName, positionID, officeID, salary))
       {
           qDebug() << "Employee added successfully!";
           QMessageBox::warning(this, "New User", "User added successfully");
       } else {
           qDebug() << "Failed to add new User to database.";
           QMessageBox::warning(this, "New User", "Failed to add new User to database");
       }
    }

*/
}

/*bool database::addUser(QString firstName, QString lastName ,QString password, QString userName, int positionID, int officeID, double salary)
{

       QSqlQuery qry;
       qry.prepare( "INSERT INTO Employee (FirstName, LastName, userid, password, PositionID, OfficeID, Salary)"
                    "VALUES (:firstName, :lastName, :userId, :password, :positionId, :officeId, :salary)");

       qry.bindValue(":firstName", firstName);
       qry.bindValue(":lastName", lastName);
       qry.bindValue(":userId", userName);
       qry.bindValue(":password", password);
       qry.bindValue(":positionId", positionID);
       qry.bindValue(":officeId", officeID);
       qry.bindValue(":salary", salary);

       if( !qry.exec())
       {
           qDebug()<<"Insertion query failed. " << db.lastError();
           return false;
       }
       return true;
}

Add User function from assignment 2, might be helpful so i added it
*/

void Admin::on_closeButton_clicked()
{
    //close button
}

