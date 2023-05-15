/********************************************************************************
** Form generated from reading UI file 'clerk.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLERK_H
#define UI_CLERK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clerk
{
public:
    QWidget *centralwidget;
    QStackedWidget *ClerkMain;
    QWidget *page;
    QLabel *CLerkImg;
    QGroupBox *groupBox_2;
    QPushButton *Create_RepairRequests_Button;
    QPushButton *Update_RepairRequests_Button;
    QLabel *label;
    QGroupBox *groupBox_5;
    QPushButton *Reports_Section_Button;
    QPushButton *Go_Reports_Button;
    QGroupBox *groupBox_4;
    QPushButton *Create_MaintenanceRequests_Button;
    QPushButton *Update_MaintenanceRequests_Button;
    QGroupBox *groupBox_3;
    QPushButton *Create_RentalRequests_Button;
    QPushButton *Update_RentalRequests_Button;
    QPushButton *Delete_RentalRequests_Button;
    QPushButton *Approve_RentalRequests_Button;
    QGroupBox *groupBox;
    QPushButton *Create_Customers_Button;
    QPushButton *Update_Customers_Button;
    QPushButton *Delete_Customers_Button;
    QWidget *page_2;
    QLabel *label_2;
    QPushButton *CreateCustomer_Back;
    QWidget *page_3;
    QPushButton *UpdateCustomer_Back;
    QLabel *label_3;
    QWidget *page_4;
    QLabel *label_4;
    QPushButton *DeleteCustomer_Back;
    QWidget *page_5;
    QLabel *label_5;
    QPushButton *CreateRepair_Back;
    QWidget *page_6;
    QLabel *label_6;
    QPushButton *UpdateRepair_Back;
    QWidget *page_7;
    QLabel *label_8;
    QPushButton *Create_Rental_Request_Back;
    QWidget *page_8;
    QLabel *label_10;
    QPushButton *Update_Rental_Request_Back;
    QWidget *page_9;
    QLabel *label_11;
    QPushButton *Delete_Rental_Request_Back;
    QWidget *page_10;
    QLabel *label_12;
    QPushButton *Approve_Rental_Request_Back;
    QWidget *page_11;
    QLabel *label_13;
    QPushButton *Create_Maintenance_Request_Back;
    QWidget *page_12;
    QLabel *label_14;
    QPushButton *Create_Maintenance_Request_Back_2;
    QWidget *page_13;
    QPushButton *Reports_Back;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Clerk)
    {
        if (Clerk->objectName().isEmpty())
            Clerk->setObjectName("Clerk");
        Clerk->resize(1505, 919);
        centralwidget = new QWidget(Clerk);
        centralwidget->setObjectName("centralwidget");
        ClerkMain = new QStackedWidget(centralwidget);
        ClerkMain->setObjectName("ClerkMain");
        ClerkMain->setGeometry(QRect(-1, 0, 1511, 891));
        page = new QWidget();
        page->setObjectName("page");
        CLerkImg = new QLabel(page);
        CLerkImg->setObjectName("CLerkImg");
        CLerkImg->setGeometry(QRect(940, 30, 671, 861));
        CLerkImg->setScaledContents(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(250, 270, 171, 131));
        QFont font;
        font.setBold(true);
        groupBox_2->setFont(font);
        Create_RepairRequests_Button = new QPushButton(groupBox_2);
        Create_RepairRequests_Button->setObjectName("Create_RepairRequests_Button");
        Create_RepairRequests_Button->setGeometry(QRect(10, 40, 83, 29));
        Create_RepairRequests_Button->setFont(font);
        Update_RepairRequests_Button = new QPushButton(groupBox_2);
        Update_RepairRequests_Button->setObjectName("Update_RepairRequests_Button");
        Update_RepairRequests_Button->setGeometry(QRect(10, 80, 83, 29));
        Update_RepairRequests_Button->setFont(font);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 10, 231, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        groupBox_5 = new QGroupBox(page);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(250, 430, 171, 131));
        groupBox_5->setFont(font);
        Reports_Section_Button = new QPushButton(groupBox_5);
        Reports_Section_Button->setObjectName("Reports_Section_Button");
        Reports_Section_Button->setGeometry(QRect(10, 60, 83, 29));
        Reports_Section_Button->setFont(font);
        Go_Reports_Button = new QPushButton(groupBox_5);
        Go_Reports_Button->setObjectName("Go_Reports_Button");
        Go_Reports_Button->setGeometry(QRect(10, 90, 83, 29));
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(700, 300, 181, 131));
        groupBox_4->setFont(font);
        Create_MaintenanceRequests_Button = new QPushButton(groupBox_4);
        Create_MaintenanceRequests_Button->setObjectName("Create_MaintenanceRequests_Button");
        Create_MaintenanceRequests_Button->setGeometry(QRect(10, 40, 83, 29));
        Create_MaintenanceRequests_Button->setFont(font);
        Update_MaintenanceRequests_Button = new QPushButton(groupBox_4);
        Update_MaintenanceRequests_Button->setObjectName("Update_MaintenanceRequests_Button");
        Update_MaintenanceRequests_Button->setGeometry(QRect(10, 80, 83, 29));
        Update_MaintenanceRequests_Button->setFont(font);
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(700, 60, 181, 221));
        groupBox_3->setFont(font);
        Create_RentalRequests_Button = new QPushButton(groupBox_3);
        Create_RentalRequests_Button->setObjectName("Create_RentalRequests_Button");
        Create_RentalRequests_Button->setGeometry(QRect(10, 40, 83, 29));
        Create_RentalRequests_Button->setFont(font);
        Update_RentalRequests_Button = new QPushButton(groupBox_3);
        Update_RentalRequests_Button->setObjectName("Update_RentalRequests_Button");
        Update_RentalRequests_Button->setGeometry(QRect(10, 80, 83, 29));
        Update_RentalRequests_Button->setFont(font);
        Delete_RentalRequests_Button = new QPushButton(groupBox_3);
        Delete_RentalRequests_Button->setObjectName("Delete_RentalRequests_Button");
        Delete_RentalRequests_Button->setGeometry(QRect(10, 120, 83, 29));
        Delete_RentalRequests_Button->setFont(font);
        Approve_RentalRequests_Button = new QPushButton(groupBox_3);
        Approve_RentalRequests_Button->setObjectName("Approve_RentalRequests_Button");
        Approve_RentalRequests_Button->setGeometry(QRect(10, 160, 83, 29));
        Approve_RentalRequests_Button->setFont(font);
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 70, 171, 161));
        groupBox->setFont(font);
        Create_Customers_Button = new QPushButton(groupBox);
        Create_Customers_Button->setObjectName("Create_Customers_Button");
        Create_Customers_Button->setGeometry(QRect(10, 40, 83, 29));
        Create_Customers_Button->setFont(font);
        Update_Customers_Button = new QPushButton(groupBox);
        Update_Customers_Button->setObjectName("Update_Customers_Button");
        Update_Customers_Button->setGeometry(QRect(10, 80, 83, 29));
        Update_Customers_Button->setFont(font);
        Delete_Customers_Button = new QPushButton(groupBox);
        Delete_Customers_Button->setObjectName("Delete_Customers_Button");
        Delete_Customers_Button->setGeometry(QRect(10, 120, 83, 29));
        Delete_Customers_Button->setFont(font);
        ClerkMain->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 0, 121, 21));
        label_2->setFont(font);
        CreateCustomer_Back = new QPushButton(page_2);
        CreateCustomer_Back->setObjectName("CreateCustomer_Back");
        CreateCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        UpdateCustomer_Back = new QPushButton(page_3);
        UpdateCustomer_Back->setObjectName("UpdateCustomer_Back");
        UpdateCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 0, 131, 21));
        label_3->setFont(font);
        ClerkMain->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 0, 121, 21));
        label_4->setFont(font);
        DeleteCustomer_Back = new QPushButton(page_4);
        DeleteCustomer_Back->setObjectName("DeleteCustomer_Back");
        DeleteCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 0, 171, 21));
        label_5->setFont(font);
        CreateRepair_Back = new QPushButton(page_5);
        CreateRepair_Back->setObjectName("CreateRepair_Back");
        CreateRepair_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_6 = new QLabel(page_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 0, 171, 21));
        label_6->setFont(font);
        UpdateRepair_Back = new QPushButton(page_6);
        UpdateRepair_Back->setObjectName("UpdateRepair_Back");
        UpdateRepair_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_8 = new QLabel(page_7);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 0, 171, 21));
        label_8->setFont(font);
        Create_Rental_Request_Back = new QPushButton(page_7);
        Create_Rental_Request_Back->setObjectName("Create_Rental_Request_Back");
        Create_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_10 = new QLabel(page_8);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 171, 21));
        label_10->setFont(font);
        Update_Rental_Request_Back = new QPushButton(page_8);
        Update_Rental_Request_Back->setObjectName("Update_Rental_Request_Back");
        Update_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_11 = new QLabel(page_9);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 0, 171, 21));
        label_11->setFont(font);
        Delete_Rental_Request_Back = new QPushButton(page_9);
        Delete_Rental_Request_Back->setObjectName("Delete_Rental_Request_Back");
        Delete_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_12 = new QLabel(page_10);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 191, 21));
        label_12->setFont(font);
        Approve_Rental_Request_Back = new QPushButton(page_10);
        Approve_Rental_Request_Back->setObjectName("Approve_Rental_Request_Back");
        Approve_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        label_13 = new QLabel(page_11);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 0, 221, 21));
        label_13->setFont(font);
        Create_Maintenance_Request_Back = new QPushButton(page_11);
        Create_Maintenance_Request_Back->setObjectName("Create_Maintenance_Request_Back");
        Create_Maintenance_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        label_14 = new QLabel(page_12);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 0, 221, 21));
        label_14->setFont(font);
        Create_Maintenance_Request_Back_2 = new QPushButton(page_12);
        Create_Maintenance_Request_Back_2->setObjectName("Create_Maintenance_Request_Back_2");
        Create_Maintenance_Request_Back_2->setGeometry(QRect(1400, 0, 83, 29));
        ClerkMain->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        Reports_Back = new QPushButton(page_13);
        Reports_Back->setObjectName("Reports_Back");
        Reports_Back->setGeometry(QRect(1400, 0, 83, 29));
        label_15 = new QLabel(page_13);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(640, 10, 201, 41));
        label_15->setFont(font);
        ClerkMain->addWidget(page_13);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(1240, 850, 171, 21));
        label_7->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1040, 850, 171, 21));
        label_9->setFont(font);
        Clerk->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Clerk);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1505, 25));
        Clerk->setMenuBar(menubar);
        statusbar = new QStatusBar(Clerk);
        statusbar->setObjectName("statusbar");
        Clerk->setStatusBar(statusbar);

        retranslateUi(Clerk);

        ClerkMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Clerk);
    } // setupUi

    void retranslateUi(QMainWindow *Clerk)
    {
        Clerk->setWindowTitle(QCoreApplication::translate("Clerk", "MainWindow", nullptr));
        CLerkImg->setText(QCoreApplication::translate("Clerk", "IMG", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Clerk", "Repair Requests", nullptr));
        Create_RepairRequests_Button->setText(QCoreApplication::translate("Clerk", "Create", nullptr));
        Update_RepairRequests_Button->setText(QCoreApplication::translate("Clerk", "Update", nullptr));
        label->setText(QCoreApplication::translate("Clerk", "Logged in as Clerk User", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Clerk", "Reports", nullptr));
        Reports_Section_Button->setText(QCoreApplication::translate("Clerk", "Reports", nullptr));
        Go_Reports_Button->setText(QCoreApplication::translate("Clerk", "Go", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Clerk", "Maintenance Request", nullptr));
        Create_MaintenanceRequests_Button->setText(QCoreApplication::translate("Clerk", "Create", nullptr));
        Update_MaintenanceRequests_Button->setText(QCoreApplication::translate("Clerk", "Update", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Clerk", "Rental Requests", nullptr));
        Create_RentalRequests_Button->setText(QCoreApplication::translate("Clerk", "Create", nullptr));
        Update_RentalRequests_Button->setText(QCoreApplication::translate("Clerk", "Update", nullptr));
        Delete_RentalRequests_Button->setText(QCoreApplication::translate("Clerk", "Delete", nullptr));
        Approve_RentalRequests_Button->setText(QCoreApplication::translate("Clerk", "Approve", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Clerk", "Customers", nullptr));
        Create_Customers_Button->setText(QCoreApplication::translate("Clerk", "Create", nullptr));
        Update_Customers_Button->setText(QCoreApplication::translate("Clerk", "Update", nullptr));
        Delete_Customers_Button->setText(QCoreApplication::translate("Clerk", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("Clerk", "Create Customer", nullptr));
        CreateCustomer_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        UpdateCustomer_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("Clerk", "Update Customer", nullptr));
        label_4->setText(QCoreApplication::translate("Clerk", "Delete Customer", nullptr));
        DeleteCustomer_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("Clerk", "Create Repair Requests", nullptr));
        CreateRepair_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("Clerk", "Update  Repair Requests", nullptr));
        UpdateRepair_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("Clerk", "Create Rental Requests", nullptr));
        Create_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_10->setText(QCoreApplication::translate("Clerk", " Update Rental Requests", nullptr));
        Update_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_11->setText(QCoreApplication::translate("Clerk", " Delete Rental Requests", nullptr));
        Delete_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_12->setText(QCoreApplication::translate("Clerk", " Approve Rental Requests", nullptr));
        Approve_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_13->setText(QCoreApplication::translate("Clerk", "Create Maintenance Requests", nullptr));
        Create_Maintenance_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_14->setText(QCoreApplication::translate("Clerk", "Update Maintenance Requests", nullptr));
        Create_Maintenance_Request_Back_2->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        Reports_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_15->setText(QCoreApplication::translate("Clerk", "Reports Section", nullptr));
        label_7->setText(QCoreApplication::translate("Clerk", "Update  Repair Requests", nullptr));
        label_9->setText(QCoreApplication::translate("Clerk", "Create Rental Requests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clerk: public Ui_Clerk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLERK_H
