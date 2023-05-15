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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Create_Customer_Submit_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QLineEdit *Create_Customer_PhoneNum;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QLineEdit *Create_Customer_Email;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QLineEdit *Create_Customer_DateAdded;
    QPushButton *Create_Customer_Clear;
    QWidget *page_3;
    QPushButton *UpdateCustomer_Back;
    QLabel *label_3;
    QTableView *UpdateUser_tableView;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Update_Customer_Submit;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_19;
    QLineEdit *Update_Customer_PhoneNum;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_20;
    QLineEdit *Update_Customer_Email;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_21;
    QLineEdit *Update_Customer_DateAdded;
    QPushButton *Update_Customer_Clear;
    QLabel *label_7;
    QPushButton *UpdateCustomer_RefreshTable;
    QWidget *page_4;
    QLabel *label_4;
    QPushButton *DeleteCustomer_Back;
    QTableView *DeleteCustomer_tableView;
    QLabel *label_9;
    QPushButton *DeleteCustomer_Delete_Button;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *Delete_Customer_UserID;
    QWidget *page_5;
    QLabel *label_5;
    QPushButton *CreateRepair_Back;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_24;
    QComboBox *CreateRepairRequest_VehicleID_ComboBox;
    QLabel *label_25;
    QLineEdit *CreateRepairRequest_VehicleType;
    QLabel *label_26;
    QComboBox *CreateRepairRequest_TechnicianID_ComboBox;
    QLabel *label_27;
    QLineEdit *CreateRepairRequest_EmployeeID;
    QLabel *label_28;
    QDateEdit *CreateRepairRequest_DateRequested;
    QLabel *label_29;
    QLineEdit *CreateRepairRequest_RepairFee;
    QLabel *label_30;
    QComboBox *CreateRepairRequest_ApprovalStatus;
    QLabel *label_31;
    QComboBox *CreateRepairRequest_ManagerID;
    QLabel *label_32;
    QDateEdit *CreateRepairRequest_ApprovalDate;
    QLabel *label_33;
    QLineEdit *CreateRepairRequest_Notes;
    QPushButton *CreateRepairRequest_Submit;
    QWidget *page_6;
    QLabel *label_6;
    QPushButton *UpdateRepair_Back;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_34;
    QComboBox *UpdateRepairRequest_VehicleID_ComboBox;
    QLabel *label_35;
    QLineEdit *UpdateRepairRequest_VehicleType;
    QLabel *label_36;
    QComboBox *UpdateRepairRequest_TechnicianID_ComboBox;
    QLabel *label_37;
    QLineEdit *UpdateRepairRequest_EmployeeID;
    QLabel *label_38;
    QDateEdit *UpdateRepairRequest_DateRequested;
    QLabel *label_39;
    QLineEdit *UpdateRepairRequest_RepairFee;
    QLabel *label_40;
    QComboBox *UpdateRepairRequest_ApprovalStatus;
    QLabel *label_41;
    QComboBox *UpdateRepairRequest_ManagerID;
    QLabel *label_42;
    QDateEdit *UpdateRepairRequest_ApprovalDate;
    QLabel *label_43;
    QLineEdit *UpdateRepairRequest_Notes;
    QPushButton *UpdateRepairRequest_Submit;
    QTableView *UpdateRepairRequest_TableView;
    QLabel *label_44;
    QWidget *page_7;
    QLabel *label_8;
    QPushButton *Create_Rental_Request_Back;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_45;
    QLineEdit *CreateRentalRequest_CustomerID;
    QLabel *label_46;
    QLineEdit *CreateRentalRequest_CustomerType;
    QLabel *label_47;
    QLineEdit *CreateRentalRequest_VehicleID;
    QLabel *label_48;
    QLineEdit *CreateRentalRequest_VehicleType;
    QLabel *label_49;
    QLineEdit *CreateRentalRequest_EmpID;
    QLabel *label_51;
    QComboBox *CreateRentalRequest_DriverRequested;
    QLabel *label_52;
    QLineEdit *CreateRentalRequest_DriverRequestID;
    QPushButton *CreateRentalRequest_Submit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_54;
    QLineEdit *CreateRentalRequest_DailyRate;
    QLabel *label_55;
    QLineEdit *CreateRentalRequest_TotalCost;
    QLabel *label_56;
    QComboBox *CreateRentalRequest_PaymentStatus;
    QLabel *label_57;
    QDateEdit *CreateRentalRequest_DateStart;
    QLabel *label_50;
    QDateEdit *CreateRentalRequest_DateRequested;
    QLabel *label_58;
    QDateEdit *CreateRentalRequest_DateEnd;
    QLabel *label_53;
    QLineEdit *CreateRentalRequest_DaysRentPeriod;
    QLabel *label_59;
    QComboBox *CreateRentalRequest_ApprovalStatus;
    QWidget *page_8;
    QLabel *label_10;
    QPushButton *Update_Rental_Request_Back;
    QTableView *UpdateRentalRequest_tableView;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_60;
    QLineEdit *UpdateRentalRequest_CustomerID;
    QLabel *label_61;
    QLineEdit *UpdateRentalRequest_CustomerType;
    QLabel *label_62;
    QLineEdit *UpdateRentalRequest_VehicleID;
    QLabel *label_63;
    QLineEdit *UpdateRentalRequest_VehicleType;
    QLabel *label_64;
    QLineEdit *UpdateRentalRequest_EmpID;
    QLabel *label_66;
    QComboBox *UpdateRentalRequest_DriverRequested;
    QLabel *label_67;
    QLineEdit *UpdateRentalRequest_DriverRequestID;
    QLabel *label_69;
    QLineEdit *UpdateRentalRequest_DailyRate;
    QLabel *label_75;
    QPushButton *UpdateRentalRequest_tableView_Submit;
    QLabel *label_76;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_65;
    QDateEdit *UpdateRentalRequest_DateRequested;
    QLabel *label_72;
    QDateEdit *UpdateRentalRequest_DateStart;
    QLabel *label_73;
    QDateEdit *UpdateRentalRequest_DateEnd;
    QLabel *label_68;
    QLineEdit *UpdateRentalRequest_DaysRentPeriod;
    QLabel *label_71;
    QComboBox *UpdateRentalRequest_PaymentStatus;
    QLabel *label_70;
    QLineEdit *UpdateRentalRequest_TotalCost;
    QLabel *label_74;
    QComboBox *UpdateRentalRequest_ApprovalStatus;
    QWidget *page_9;
    QLabel *label_11;
    QPushButton *Delete_Rental_Request_Back;
    QLabel *label_77;
    QTableView *DeleteRentalRequest_tableView;
    QLabel *label_78;
    QLineEdit *DeleteRentalRequest_ID;
    QLabel *label_79;
    QPushButton *DeleteRentalRequest_Delete;
    QWidget *page_10;
    QLabel *label_12;
    QPushButton *Approve_Rental_Request_Back;
    QLabel *label_80;
    QTableView *ApproveRentalRequests_tableView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_81;
    QLineEdit *ApproveRentalRequest_ID;
    QPushButton *ApproveRentalRequest_Approve;
    QWidget *page_11;
    QLabel *label_13;
    QPushButton *Create_Maintenance_Request_Back;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_82;
    QLineEdit *CreateMaintenanceRequest_VehicleID;
    QLabel *label_83;
    QLineEdit *CreateMaintenanceRequest_VehicleType;
    QLabel *label_84;
    QLineEdit *CreateMaintenanceRequest_EmpID;
    QLabel *label_85;
    QDateEdit *CreateMaintenanceRequest_DateRequested;
    QLabel *label_86;
    QComboBox *CreateMaintenanceRequest_ApprovalStatus;
    QLabel *label_87;
    QLineEdit *CreateMaintenanceRequest_MaintenanceID;
    QLabel *label_88;
    QDateEdit *CreateMaintenanceRequest_ApprovalDate;
    QLabel *label_89;
    QLineEdit *CreateMaintenanceRequest_Notes;
    QPushButton *CreateMaintenanceRequest_Submit;
    QWidget *page_12;
    QLabel *label_14;
    QPushButton *Create_Maintenance_Request_Back_2;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_98;
    QLineEdit *UpdateMaintenanceRequest_VehicleID;
    QLabel *label_99;
    QLineEdit *UpdateMaintenanceRequest_VehicleType;
    QLabel *label_100;
    QLineEdit *UpdateMaintenanceRequest_EmpID;
    QLabel *label_101;
    QDateEdit *UpdateMaintenanceRequest_DateRequested;
    QLabel *label_102;
    QComboBox *UpdateMaintenanceRequest_ApprovalStatus;
    QLabel *label_103;
    QLineEdit *UpdateMaintenanceRequest_MaintenanceID;
    QLabel *label_104;
    QDateEdit *UpdateMaintenanceRequest_ApprovalDate;
    QLabel *label_105;
    QLineEdit *UpdateMaintenanceRequest_Notes;
    QLabel *label_106;
    QTableView *UpdateMaintenanceReq_tableView;
    QPushButton *UpdateMaintenanceReq_Save;
    QWidget *page_13;
    QPushButton *Reports_Back;
    QLabel *label_15;
    QTableView *tableView;
    QLabel *label_107;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Clerk)
    {
        if (Clerk->objectName().isEmpty())
            Clerk->setObjectName("Clerk");
        Clerk->resize(1524, 986);
        centralwidget = new QWidget(Clerk);
        centralwidget->setObjectName("centralwidget");
        ClerkMain = new QStackedWidget(centralwidget);
        ClerkMain->setObjectName("ClerkMain");
        ClerkMain->setGeometry(QRect(-1, 0, 1511, 951));
        QFont font;
        font.setBold(true);
        ClerkMain->setFont(font);
        page = new QWidget();
        page->setObjectName("page");
        CLerkImg = new QLabel(page);
        CLerkImg->setObjectName("CLerkImg");
        CLerkImg->setGeometry(QRect(940, 30, 671, 861));
        CLerkImg->setScaledContents(true);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(250, 270, 171, 131));
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
        label_2->setGeometry(QRect(10, 0, 121, 21));
        label_2->setFont(font);
        CreateCustomer_Back = new QPushButton(page_2);
        CreateCustomer_Back->setObjectName("CreateCustomer_Back");
        CreateCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        gridLayoutWidget = new QWidget(page_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(380, 180, 391, 266));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Create_Customer_Submit_2 = new QPushButton(gridLayoutWidget);
        Create_Customer_Submit_2->setObjectName("Create_Customer_Submit_2");

        gridLayout->addWidget(Create_Customer_Submit_2, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName("label_16");

        verticalLayout->addWidget(label_16);

        Create_Customer_PhoneNum = new QLineEdit(gridLayoutWidget);
        Create_Customer_PhoneNum->setObjectName("Create_Customer_PhoneNum");

        verticalLayout->addWidget(Create_Customer_PhoneNum);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName("label_17");

        verticalLayout_2->addWidget(label_17);

        Create_Customer_Email = new QLineEdit(gridLayoutWidget);
        Create_Customer_Email->setObjectName("Create_Customer_Email");

        verticalLayout_2->addWidget(Create_Customer_Email);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName("label_18");

        verticalLayout_3->addWidget(label_18);

        Create_Customer_DateAdded = new QLineEdit(gridLayoutWidget);
        Create_Customer_DateAdded->setObjectName("Create_Customer_DateAdded");

        verticalLayout_3->addWidget(Create_Customer_DateAdded);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Create_Customer_Clear = new QPushButton(gridLayoutWidget);
        Create_Customer_Clear->setObjectName("Create_Customer_Clear");

        gridLayout->addWidget(Create_Customer_Clear, 3, 1, 1, 1);

        ClerkMain->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        UpdateCustomer_Back = new QPushButton(page_3);
        UpdateCustomer_Back->setObjectName("UpdateCustomer_Back");
        UpdateCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 0, 131, 21));
        label_3->setFont(font);
        UpdateUser_tableView = new QTableView(page_3);
        UpdateUser_tableView->setObjectName("UpdateUser_tableView");
        UpdateUser_tableView->setGeometry(QRect(10, 60, 1471, 331));
        gridLayoutWidget_2 = new QWidget(page_3);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(240, 490, 391, 266));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Update_Customer_Submit = new QPushButton(gridLayoutWidget_2);
        Update_Customer_Submit->setObjectName("Update_Customer_Submit");

        gridLayout_2->addWidget(Update_Customer_Submit, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName("label_19");

        verticalLayout_4->addWidget(label_19);

        Update_Customer_PhoneNum = new QLineEdit(gridLayoutWidget_2);
        Update_Customer_PhoneNum->setObjectName("Update_Customer_PhoneNum");

        verticalLayout_4->addWidget(Update_Customer_PhoneNum);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_20 = new QLabel(gridLayoutWidget_2);
        label_20->setObjectName("label_20");

        verticalLayout_5->addWidget(label_20);

        Update_Customer_Email = new QLineEdit(gridLayoutWidget_2);
        Update_Customer_Email->setObjectName("Update_Customer_Email");

        verticalLayout_5->addWidget(Update_Customer_Email);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName("label_21");

        verticalLayout_6->addWidget(label_21);

        Update_Customer_DateAdded = new QLineEdit(gridLayoutWidget_2);
        Update_Customer_DateAdded->setObjectName("Update_Customer_DateAdded");

        verticalLayout_6->addWidget(Update_Customer_DateAdded);


        verticalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        Update_Customer_Clear = new QPushButton(gridLayoutWidget_2);
        Update_Customer_Clear->setObjectName("Update_Customer_Clear");

        gridLayout_2->addWidget(Update_Customer_Clear, 3, 1, 1, 1);

        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 30, 451, 16));
        UpdateCustomer_RefreshTable = new QPushButton(page_3);
        UpdateCustomer_RefreshTable->setObjectName("UpdateCustomer_RefreshTable");
        UpdateCustomer_RefreshTable->setGeometry(QRect(1342, 400, 131, 31));
        ClerkMain->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 121, 21));
        label_4->setFont(font);
        DeleteCustomer_Back = new QPushButton(page_4);
        DeleteCustomer_Back->setObjectName("DeleteCustomer_Back");
        DeleteCustomer_Back->setGeometry(QRect(1400, 0, 83, 29));
        DeleteCustomer_tableView = new QTableView(page_4);
        DeleteCustomer_tableView->setObjectName("DeleteCustomer_tableView");
        DeleteCustomer_tableView->setGeometry(QRect(10, 70, 1461, 441));
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 50, 451, 16));
        DeleteCustomer_Delete_Button = new QPushButton(page_4);
        DeleteCustomer_Delete_Button->setObjectName("DeleteCustomer_Delete_Button");
        DeleteCustomer_Delete_Button->setGeometry(QRect(340, 710, 111, 31));
        label_22 = new QLabel(page_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(120, 620, 171, 41));
        label_22->setFont(font);
        label_23 = new QLabel(page_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(120, 690, 63, 20));
        Delete_Customer_UserID = new QLineEdit(page_4);
        Delete_Customer_UserID->setObjectName("Delete_Customer_UserID");
        Delete_Customer_UserID->setGeometry(QRect(120, 710, 113, 28));
        ClerkMain->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 171, 21));
        label_5->setFont(font);
        CreateRepair_Back = new QPushButton(page_5);
        CreateRepair_Back->setObjectName("CreateRepair_Back");
        CreateRepair_Back->setGeometry(QRect(1400, 0, 83, 29));
        verticalLayoutWidget_4 = new QWidget(page_5);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(530, 50, 381, 617));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(verticalLayoutWidget_4);
        label_24->setObjectName("label_24");

        verticalLayout_7->addWidget(label_24);

        CreateRepairRequest_VehicleID_ComboBox = new QComboBox(verticalLayoutWidget_4);
        CreateRepairRequest_VehicleID_ComboBox->setObjectName("CreateRepairRequest_VehicleID_ComboBox");

        verticalLayout_7->addWidget(CreateRepairRequest_VehicleID_ComboBox);

        label_25 = new QLabel(verticalLayoutWidget_4);
        label_25->setObjectName("label_25");

        verticalLayout_7->addWidget(label_25);

        CreateRepairRequest_VehicleType = new QLineEdit(verticalLayoutWidget_4);
        CreateRepairRequest_VehicleType->setObjectName("CreateRepairRequest_VehicleType");

        verticalLayout_7->addWidget(CreateRepairRequest_VehicleType);

        label_26 = new QLabel(verticalLayoutWidget_4);
        label_26->setObjectName("label_26");

        verticalLayout_7->addWidget(label_26);

        CreateRepairRequest_TechnicianID_ComboBox = new QComboBox(verticalLayoutWidget_4);
        CreateRepairRequest_TechnicianID_ComboBox->setObjectName("CreateRepairRequest_TechnicianID_ComboBox");

        verticalLayout_7->addWidget(CreateRepairRequest_TechnicianID_ComboBox);

        label_27 = new QLabel(verticalLayoutWidget_4);
        label_27->setObjectName("label_27");

        verticalLayout_7->addWidget(label_27);

        CreateRepairRequest_EmployeeID = new QLineEdit(verticalLayoutWidget_4);
        CreateRepairRequest_EmployeeID->setObjectName("CreateRepairRequest_EmployeeID");

        verticalLayout_7->addWidget(CreateRepairRequest_EmployeeID);

        label_28 = new QLabel(verticalLayoutWidget_4);
        label_28->setObjectName("label_28");

        verticalLayout_7->addWidget(label_28);

        CreateRepairRequest_DateRequested = new QDateEdit(verticalLayoutWidget_4);
        CreateRepairRequest_DateRequested->setObjectName("CreateRepairRequest_DateRequested");

        verticalLayout_7->addWidget(CreateRepairRequest_DateRequested);

        label_29 = new QLabel(verticalLayoutWidget_4);
        label_29->setObjectName("label_29");

        verticalLayout_7->addWidget(label_29);

        CreateRepairRequest_RepairFee = new QLineEdit(verticalLayoutWidget_4);
        CreateRepairRequest_RepairFee->setObjectName("CreateRepairRequest_RepairFee");

        verticalLayout_7->addWidget(CreateRepairRequest_RepairFee);

        label_30 = new QLabel(verticalLayoutWidget_4);
        label_30->setObjectName("label_30");

        verticalLayout_7->addWidget(label_30);

        CreateRepairRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget_4);
        CreateRepairRequest_ApprovalStatus->setObjectName("CreateRepairRequest_ApprovalStatus");

        verticalLayout_7->addWidget(CreateRepairRequest_ApprovalStatus);

        label_31 = new QLabel(verticalLayoutWidget_4);
        label_31->setObjectName("label_31");

        verticalLayout_7->addWidget(label_31);

        CreateRepairRequest_ManagerID = new QComboBox(verticalLayoutWidget_4);
        CreateRepairRequest_ManagerID->setObjectName("CreateRepairRequest_ManagerID");

        verticalLayout_7->addWidget(CreateRepairRequest_ManagerID);

        label_32 = new QLabel(verticalLayoutWidget_4);
        label_32->setObjectName("label_32");

        verticalLayout_7->addWidget(label_32);

        CreateRepairRequest_ApprovalDate = new QDateEdit(verticalLayoutWidget_4);
        CreateRepairRequest_ApprovalDate->setObjectName("CreateRepairRequest_ApprovalDate");

        verticalLayout_7->addWidget(CreateRepairRequest_ApprovalDate);

        label_33 = new QLabel(verticalLayoutWidget_4);
        label_33->setObjectName("label_33");

        verticalLayout_7->addWidget(label_33);

        CreateRepairRequest_Notes = new QLineEdit(verticalLayoutWidget_4);
        CreateRepairRequest_Notes->setObjectName("CreateRepairRequest_Notes");

        verticalLayout_7->addWidget(CreateRepairRequest_Notes);

        CreateRepairRequest_Submit = new QPushButton(page_5);
        CreateRepairRequest_Submit->setObjectName("CreateRepairRequest_Submit");
        CreateRepairRequest_Submit->setGeometry(QRect(830, 680, 83, 29));
        ClerkMain->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_6 = new QLabel(page_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 0, 171, 21));
        label_6->setFont(font);
        UpdateRepair_Back = new QPushButton(page_6);
        UpdateRepair_Back->setObjectName("UpdateRepair_Back");
        UpdateRepair_Back->setGeometry(QRect(1400, 0, 83, 29));
        verticalLayoutWidget_5 = new QWidget(page_6);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(1030, 80, 381, 617));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(verticalLayoutWidget_5);
        label_34->setObjectName("label_34");

        verticalLayout_8->addWidget(label_34);

        UpdateRepairRequest_VehicleID_ComboBox = new QComboBox(verticalLayoutWidget_5);
        UpdateRepairRequest_VehicleID_ComboBox->setObjectName("UpdateRepairRequest_VehicleID_ComboBox");

        verticalLayout_8->addWidget(UpdateRepairRequest_VehicleID_ComboBox);

        label_35 = new QLabel(verticalLayoutWidget_5);
        label_35->setObjectName("label_35");

        verticalLayout_8->addWidget(label_35);

        UpdateRepairRequest_VehicleType = new QLineEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_VehicleType->setObjectName("UpdateRepairRequest_VehicleType");

        verticalLayout_8->addWidget(UpdateRepairRequest_VehicleType);

        label_36 = new QLabel(verticalLayoutWidget_5);
        label_36->setObjectName("label_36");

        verticalLayout_8->addWidget(label_36);

        UpdateRepairRequest_TechnicianID_ComboBox = new QComboBox(verticalLayoutWidget_5);
        UpdateRepairRequest_TechnicianID_ComboBox->setObjectName("UpdateRepairRequest_TechnicianID_ComboBox");

        verticalLayout_8->addWidget(UpdateRepairRequest_TechnicianID_ComboBox);

        label_37 = new QLabel(verticalLayoutWidget_5);
        label_37->setObjectName("label_37");

        verticalLayout_8->addWidget(label_37);

        UpdateRepairRequest_EmployeeID = new QLineEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_EmployeeID->setObjectName("UpdateRepairRequest_EmployeeID");

        verticalLayout_8->addWidget(UpdateRepairRequest_EmployeeID);

        label_38 = new QLabel(verticalLayoutWidget_5);
        label_38->setObjectName("label_38");

        verticalLayout_8->addWidget(label_38);

        UpdateRepairRequest_DateRequested = new QDateEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_DateRequested->setObjectName("UpdateRepairRequest_DateRequested");

        verticalLayout_8->addWidget(UpdateRepairRequest_DateRequested);

        label_39 = new QLabel(verticalLayoutWidget_5);
        label_39->setObjectName("label_39");

        verticalLayout_8->addWidget(label_39);

        UpdateRepairRequest_RepairFee = new QLineEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_RepairFee->setObjectName("UpdateRepairRequest_RepairFee");

        verticalLayout_8->addWidget(UpdateRepairRequest_RepairFee);

        label_40 = new QLabel(verticalLayoutWidget_5);
        label_40->setObjectName("label_40");

        verticalLayout_8->addWidget(label_40);

        UpdateRepairRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget_5);
        UpdateRepairRequest_ApprovalStatus->setObjectName("UpdateRepairRequest_ApprovalStatus");

        verticalLayout_8->addWidget(UpdateRepairRequest_ApprovalStatus);

        label_41 = new QLabel(verticalLayoutWidget_5);
        label_41->setObjectName("label_41");

        verticalLayout_8->addWidget(label_41);

        UpdateRepairRequest_ManagerID = new QComboBox(verticalLayoutWidget_5);
        UpdateRepairRequest_ManagerID->setObjectName("UpdateRepairRequest_ManagerID");

        verticalLayout_8->addWidget(UpdateRepairRequest_ManagerID);

        label_42 = new QLabel(verticalLayoutWidget_5);
        label_42->setObjectName("label_42");

        verticalLayout_8->addWidget(label_42);

        UpdateRepairRequest_ApprovalDate = new QDateEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_ApprovalDate->setObjectName("UpdateRepairRequest_ApprovalDate");

        verticalLayout_8->addWidget(UpdateRepairRequest_ApprovalDate);

        label_43 = new QLabel(verticalLayoutWidget_5);
        label_43->setObjectName("label_43");

        verticalLayout_8->addWidget(label_43);

        UpdateRepairRequest_Notes = new QLineEdit(verticalLayoutWidget_5);
        UpdateRepairRequest_Notes->setObjectName("UpdateRepairRequest_Notes");

        verticalLayout_8->addWidget(UpdateRepairRequest_Notes);

        UpdateRepairRequest_Submit = new QPushButton(page_6);
        UpdateRepairRequest_Submit->setObjectName("UpdateRepairRequest_Submit");
        UpdateRepairRequest_Submit->setGeometry(QRect(1330, 700, 83, 29));
        UpdateRepairRequest_TableView = new QTableView(page_6);
        UpdateRepairRequest_TableView->setObjectName("UpdateRepairRequest_TableView");
        UpdateRepairRequest_TableView->setGeometry(QRect(10, 100, 991, 591));
        label_44 = new QLabel(page_6);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(10, 80, 491, 16));
        ClerkMain->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_8 = new QLabel(page_7);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 171, 21));
        label_8->setFont(font);
        Create_Rental_Request_Back = new QPushButton(page_7);
        Create_Rental_Request_Back->setObjectName("Create_Rental_Request_Back");
        Create_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        verticalLayoutWidget_6 = new QWidget(page_7);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(270, 50, 491, 501));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(verticalLayoutWidget_6);
        label_45->setObjectName("label_45");

        verticalLayout_9->addWidget(label_45);

        CreateRentalRequest_CustomerID = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_CustomerID->setObjectName("CreateRentalRequest_CustomerID");

        verticalLayout_9->addWidget(CreateRentalRequest_CustomerID);

        label_46 = new QLabel(verticalLayoutWidget_6);
        label_46->setObjectName("label_46");

        verticalLayout_9->addWidget(label_46);

        CreateRentalRequest_CustomerType = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_CustomerType->setObjectName("CreateRentalRequest_CustomerType");

        verticalLayout_9->addWidget(CreateRentalRequest_CustomerType);

        label_47 = new QLabel(verticalLayoutWidget_6);
        label_47->setObjectName("label_47");

        verticalLayout_9->addWidget(label_47);

        CreateRentalRequest_VehicleID = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_VehicleID->setObjectName("CreateRentalRequest_VehicleID");

        verticalLayout_9->addWidget(CreateRentalRequest_VehicleID);

        label_48 = new QLabel(verticalLayoutWidget_6);
        label_48->setObjectName("label_48");

        verticalLayout_9->addWidget(label_48);

        CreateRentalRequest_VehicleType = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_VehicleType->setObjectName("CreateRentalRequest_VehicleType");

        verticalLayout_9->addWidget(CreateRentalRequest_VehicleType);

        label_49 = new QLabel(verticalLayoutWidget_6);
        label_49->setObjectName("label_49");

        verticalLayout_9->addWidget(label_49);

        CreateRentalRequest_EmpID = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_EmpID->setObjectName("CreateRentalRequest_EmpID");

        verticalLayout_9->addWidget(CreateRentalRequest_EmpID);

        label_51 = new QLabel(verticalLayoutWidget_6);
        label_51->setObjectName("label_51");

        verticalLayout_9->addWidget(label_51);

        CreateRentalRequest_DriverRequested = new QComboBox(verticalLayoutWidget_6);
        CreateRentalRequest_DriverRequested->addItem(QString());
        CreateRentalRequest_DriverRequested->addItem(QString());
        CreateRentalRequest_DriverRequested->setObjectName("CreateRentalRequest_DriverRequested");

        verticalLayout_9->addWidget(CreateRentalRequest_DriverRequested);

        label_52 = new QLabel(verticalLayoutWidget_6);
        label_52->setObjectName("label_52");

        verticalLayout_9->addWidget(label_52);

        CreateRentalRequest_DriverRequestID = new QLineEdit(verticalLayoutWidget_6);
        CreateRentalRequest_DriverRequestID->setObjectName("CreateRentalRequest_DriverRequestID");

        verticalLayout_9->addWidget(CreateRentalRequest_DriverRequestID);

        CreateRentalRequest_Submit = new QPushButton(page_7);
        CreateRentalRequest_Submit->setObjectName("CreateRentalRequest_Submit");
        CreateRentalRequest_Submit->setGeometry(QRect(1220, 580, 83, 29));
        verticalLayoutWidget = new QWidget(page_7);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(810, 53, 491, 501));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(verticalLayoutWidget);
        label_54->setObjectName("label_54");

        verticalLayout_12->addWidget(label_54);

        CreateRentalRequest_DailyRate = new QLineEdit(verticalLayoutWidget);
        CreateRentalRequest_DailyRate->setObjectName("CreateRentalRequest_DailyRate");

        verticalLayout_12->addWidget(CreateRentalRequest_DailyRate);

        label_55 = new QLabel(verticalLayoutWidget);
        label_55->setObjectName("label_55");

        verticalLayout_12->addWidget(label_55);

        CreateRentalRequest_TotalCost = new QLineEdit(verticalLayoutWidget);
        CreateRentalRequest_TotalCost->setObjectName("CreateRentalRequest_TotalCost");

        verticalLayout_12->addWidget(CreateRentalRequest_TotalCost);

        label_56 = new QLabel(verticalLayoutWidget);
        label_56->setObjectName("label_56");

        verticalLayout_12->addWidget(label_56);

        CreateRentalRequest_PaymentStatus = new QComboBox(verticalLayoutWidget);
        CreateRentalRequest_PaymentStatus->addItem(QString());
        CreateRentalRequest_PaymentStatus->addItem(QString());
        CreateRentalRequest_PaymentStatus->setObjectName("CreateRentalRequest_PaymentStatus");

        verticalLayout_12->addWidget(CreateRentalRequest_PaymentStatus);

        label_57 = new QLabel(verticalLayoutWidget);
        label_57->setObjectName("label_57");

        verticalLayout_12->addWidget(label_57);

        CreateRentalRequest_DateStart = new QDateEdit(verticalLayoutWidget);
        CreateRentalRequest_DateStart->setObjectName("CreateRentalRequest_DateStart");

        verticalLayout_12->addWidget(CreateRentalRequest_DateStart);

        label_50 = new QLabel(verticalLayoutWidget);
        label_50->setObjectName("label_50");

        verticalLayout_12->addWidget(label_50);

        CreateRentalRequest_DateRequested = new QDateEdit(verticalLayoutWidget);
        CreateRentalRequest_DateRequested->setObjectName("CreateRentalRequest_DateRequested");

        verticalLayout_12->addWidget(CreateRentalRequest_DateRequested);

        label_58 = new QLabel(verticalLayoutWidget);
        label_58->setObjectName("label_58");

        verticalLayout_12->addWidget(label_58);

        CreateRentalRequest_DateEnd = new QDateEdit(verticalLayoutWidget);
        CreateRentalRequest_DateEnd->setObjectName("CreateRentalRequest_DateEnd");

        verticalLayout_12->addWidget(CreateRentalRequest_DateEnd);

        label_53 = new QLabel(verticalLayoutWidget);
        label_53->setObjectName("label_53");

        verticalLayout_12->addWidget(label_53);

        CreateRentalRequest_DaysRentPeriod = new QLineEdit(verticalLayoutWidget);
        CreateRentalRequest_DaysRentPeriod->setObjectName("CreateRentalRequest_DaysRentPeriod");

        verticalLayout_12->addWidget(CreateRentalRequest_DaysRentPeriod);

        label_59 = new QLabel(verticalLayoutWidget);
        label_59->setObjectName("label_59");

        verticalLayout_12->addWidget(label_59);

        CreateRentalRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget);
        CreateRentalRequest_ApprovalStatus->addItem(QString());
        CreateRentalRequest_ApprovalStatus->addItem(QString());
        CreateRentalRequest_ApprovalStatus->setObjectName("CreateRentalRequest_ApprovalStatus");

        verticalLayout_12->addWidget(CreateRentalRequest_ApprovalStatus);

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
        UpdateRentalRequest_tableView = new QTableView(page_8);
        UpdateRentalRequest_tableView->setObjectName("UpdateRentalRequest_tableView");
        UpdateRentalRequest_tableView->setGeometry(QRect(10, 70, 1471, 271));
        verticalLayoutWidget_7 = new QWidget(page_8);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(70, 360, 491, 381));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_60 = new QLabel(verticalLayoutWidget_7);
        label_60->setObjectName("label_60");

        verticalLayout_10->addWidget(label_60);

        UpdateRentalRequest_CustomerID = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_CustomerID->setObjectName("UpdateRentalRequest_CustomerID");

        verticalLayout_10->addWidget(UpdateRentalRequest_CustomerID);

        label_61 = new QLabel(verticalLayoutWidget_7);
        label_61->setObjectName("label_61");

        verticalLayout_10->addWidget(label_61);

        UpdateRentalRequest_CustomerType = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_CustomerType->setObjectName("UpdateRentalRequest_CustomerType");

        verticalLayout_10->addWidget(UpdateRentalRequest_CustomerType);

        label_62 = new QLabel(verticalLayoutWidget_7);
        label_62->setObjectName("label_62");

        verticalLayout_10->addWidget(label_62);

        UpdateRentalRequest_VehicleID = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_VehicleID->setObjectName("UpdateRentalRequest_VehicleID");

        verticalLayout_10->addWidget(UpdateRentalRequest_VehicleID);

        label_63 = new QLabel(verticalLayoutWidget_7);
        label_63->setObjectName("label_63");

        verticalLayout_10->addWidget(label_63);

        UpdateRentalRequest_VehicleType = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_VehicleType->setObjectName("UpdateRentalRequest_VehicleType");

        verticalLayout_10->addWidget(UpdateRentalRequest_VehicleType);

        label_64 = new QLabel(verticalLayoutWidget_7);
        label_64->setObjectName("label_64");

        verticalLayout_10->addWidget(label_64);

        UpdateRentalRequest_EmpID = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_EmpID->setObjectName("UpdateRentalRequest_EmpID");

        verticalLayout_10->addWidget(UpdateRentalRequest_EmpID);

        label_66 = new QLabel(verticalLayoutWidget_7);
        label_66->setObjectName("label_66");

        verticalLayout_10->addWidget(label_66);

        UpdateRentalRequest_DriverRequested = new QComboBox(verticalLayoutWidget_7);
        UpdateRentalRequest_DriverRequested->addItem(QString());
        UpdateRentalRequest_DriverRequested->addItem(QString());
        UpdateRentalRequest_DriverRequested->setObjectName("UpdateRentalRequest_DriverRequested");

        verticalLayout_10->addWidget(UpdateRentalRequest_DriverRequested);

        label_67 = new QLabel(verticalLayoutWidget_7);
        label_67->setObjectName("label_67");

        verticalLayout_10->addWidget(label_67);

        UpdateRentalRequest_DriverRequestID = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_DriverRequestID->setObjectName("UpdateRentalRequest_DriverRequestID");

        verticalLayout_10->addWidget(UpdateRentalRequest_DriverRequestID);

        label_69 = new QLabel(verticalLayoutWidget_7);
        label_69->setObjectName("label_69");

        verticalLayout_10->addWidget(label_69);

        UpdateRentalRequest_DailyRate = new QLineEdit(verticalLayoutWidget_7);
        UpdateRentalRequest_DailyRate->setObjectName("UpdateRentalRequest_DailyRate");

        verticalLayout_10->addWidget(UpdateRentalRequest_DailyRate);

        label_75 = new QLabel(page_8);
        label_75->setObjectName("label_75");
        label_75->setGeometry(QRect(10, 50, 491, 16));
        UpdateRentalRequest_tableView_Submit = new QPushButton(page_8);
        UpdateRentalRequest_tableView_Submit->setObjectName("UpdateRentalRequest_tableView_Submit");
        UpdateRentalRequest_tableView_Submit->setGeometry(QRect(1390, 350, 83, 29));
        label_76 = new QLabel(page_8);
        label_76->setObjectName("label_76");
        label_76->setGeometry(QRect(1220, 360, 151, 21));
        verticalLayoutWidget_2 = new QWidget(page_8);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(620, 360, 431, 381));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_65 = new QLabel(verticalLayoutWidget_2);
        label_65->setObjectName("label_65");

        verticalLayout_14->addWidget(label_65);

        UpdateRentalRequest_DateRequested = new QDateEdit(verticalLayoutWidget_2);
        UpdateRentalRequest_DateRequested->setObjectName("UpdateRentalRequest_DateRequested");

        verticalLayout_14->addWidget(UpdateRentalRequest_DateRequested);

        label_72 = new QLabel(verticalLayoutWidget_2);
        label_72->setObjectName("label_72");

        verticalLayout_14->addWidget(label_72);

        UpdateRentalRequest_DateStart = new QDateEdit(verticalLayoutWidget_2);
        UpdateRentalRequest_DateStart->setObjectName("UpdateRentalRequest_DateStart");

        verticalLayout_14->addWidget(UpdateRentalRequest_DateStart);

        label_73 = new QLabel(verticalLayoutWidget_2);
        label_73->setObjectName("label_73");

        verticalLayout_14->addWidget(label_73);

        UpdateRentalRequest_DateEnd = new QDateEdit(verticalLayoutWidget_2);
        UpdateRentalRequest_DateEnd->setObjectName("UpdateRentalRequest_DateEnd");

        verticalLayout_14->addWidget(UpdateRentalRequest_DateEnd);

        label_68 = new QLabel(verticalLayoutWidget_2);
        label_68->setObjectName("label_68");

        verticalLayout_14->addWidget(label_68);

        UpdateRentalRequest_DaysRentPeriod = new QLineEdit(verticalLayoutWidget_2);
        UpdateRentalRequest_DaysRentPeriod->setObjectName("UpdateRentalRequest_DaysRentPeriod");

        verticalLayout_14->addWidget(UpdateRentalRequest_DaysRentPeriod);

        label_71 = new QLabel(verticalLayoutWidget_2);
        label_71->setObjectName("label_71");

        verticalLayout_14->addWidget(label_71);

        UpdateRentalRequest_PaymentStatus = new QComboBox(verticalLayoutWidget_2);
        UpdateRentalRequest_PaymentStatus->addItem(QString());
        UpdateRentalRequest_PaymentStatus->addItem(QString());
        UpdateRentalRequest_PaymentStatus->setObjectName("UpdateRentalRequest_PaymentStatus");

        verticalLayout_14->addWidget(UpdateRentalRequest_PaymentStatus);

        label_70 = new QLabel(verticalLayoutWidget_2);
        label_70->setObjectName("label_70");

        verticalLayout_14->addWidget(label_70);

        UpdateRentalRequest_TotalCost = new QLineEdit(verticalLayoutWidget_2);
        UpdateRentalRequest_TotalCost->setObjectName("UpdateRentalRequest_TotalCost");

        verticalLayout_14->addWidget(UpdateRentalRequest_TotalCost);

        label_74 = new QLabel(verticalLayoutWidget_2);
        label_74->setObjectName("label_74");

        verticalLayout_14->addWidget(label_74);

        UpdateRentalRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget_2);
        UpdateRentalRequest_ApprovalStatus->addItem(QString());
        UpdateRentalRequest_ApprovalStatus->addItem(QString());
        UpdateRentalRequest_ApprovalStatus->setObjectName("UpdateRentalRequest_ApprovalStatus");

        verticalLayout_14->addWidget(UpdateRentalRequest_ApprovalStatus);

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
        label_77 = new QLabel(page_9);
        label_77->setObjectName("label_77");
        label_77->setGeometry(QRect(10, 60, 491, 16));
        DeleteRentalRequest_tableView = new QTableView(page_9);
        DeleteRentalRequest_tableView->setObjectName("DeleteRentalRequest_tableView");
        DeleteRentalRequest_tableView->setGeometry(QRect(10, 90, 1471, 301));
        label_78 = new QLabel(page_9);
        label_78->setObjectName("label_78");
        label_78->setGeometry(QRect(50, 450, 181, 41));
        DeleteRentalRequest_ID = new QLineEdit(page_9);
        DeleteRentalRequest_ID->setObjectName("DeleteRentalRequest_ID");
        DeleteRentalRequest_ID->setGeometry(QRect(290, 450, 113, 28));
        label_79 = new QLabel(page_9);
        label_79->setObjectName("label_79");
        label_79->setGeometry(QRect(270, 460, 63, 20));
        DeleteRentalRequest_Delete = new QPushButton(page_9);
        DeleteRentalRequest_Delete->setObjectName("DeleteRentalRequest_Delete");
        DeleteRentalRequest_Delete->setGeometry(QRect(510, 450, 83, 29));
        ClerkMain->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_12 = new QLabel(page_10);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 0, 191, 21));
        label_12->setFont(font);
        Approve_Rental_Request_Back = new QPushButton(page_10);
        Approve_Rental_Request_Back->setObjectName("Approve_Rental_Request_Back");
        Approve_Rental_Request_Back->setGeometry(QRect(1400, 0, 83, 29));
        label_80 = new QLabel(page_10);
        label_80->setObjectName("label_80");
        label_80->setGeometry(QRect(10, 40, 491, 16));
        ApproveRentalRequests_tableView = new QTableView(page_10);
        ApproveRentalRequests_tableView->setObjectName("ApproveRentalRequests_tableView");
        ApproveRentalRequests_tableView->setGeometry(QRect(10, 60, 1471, 321));
        horizontalLayoutWidget = new QWidget(page_10);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(1080, 400, 404, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_81 = new QLabel(horizontalLayoutWidget);
        label_81->setObjectName("label_81");

        horizontalLayout->addWidget(label_81);

        ApproveRentalRequest_ID = new QLineEdit(horizontalLayoutWidget);
        ApproveRentalRequest_ID->setObjectName("ApproveRentalRequest_ID");

        horizontalLayout->addWidget(ApproveRentalRequest_ID);

        ApproveRentalRequest_Approve = new QPushButton(horizontalLayoutWidget);
        ApproveRentalRequest_Approve->setObjectName("ApproveRentalRequest_Approve");

        horizontalLayout->addWidget(ApproveRentalRequest_Approve);

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
        verticalLayoutWidget_8 = new QWidget(page_11);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(560, 30, 331, 493));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_82 = new QLabel(verticalLayoutWidget_8);
        label_82->setObjectName("label_82");

        verticalLayout_11->addWidget(label_82);

        CreateMaintenanceRequest_VehicleID = new QLineEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_VehicleID->setObjectName("CreateMaintenanceRequest_VehicleID");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_VehicleID);

        label_83 = new QLabel(verticalLayoutWidget_8);
        label_83->setObjectName("label_83");

        verticalLayout_11->addWidget(label_83);

        CreateMaintenanceRequest_VehicleType = new QLineEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_VehicleType->setObjectName("CreateMaintenanceRequest_VehicleType");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_VehicleType);

        label_84 = new QLabel(verticalLayoutWidget_8);
        label_84->setObjectName("label_84");

        verticalLayout_11->addWidget(label_84);

        CreateMaintenanceRequest_EmpID = new QLineEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_EmpID->setObjectName("CreateMaintenanceRequest_EmpID");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_EmpID);

        label_85 = new QLabel(verticalLayoutWidget_8);
        label_85->setObjectName("label_85");

        verticalLayout_11->addWidget(label_85);

        CreateMaintenanceRequest_DateRequested = new QDateEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_DateRequested->setObjectName("CreateMaintenanceRequest_DateRequested");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_DateRequested);

        label_86 = new QLabel(verticalLayoutWidget_8);
        label_86->setObjectName("label_86");

        verticalLayout_11->addWidget(label_86);

        CreateMaintenanceRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget_8);
        CreateMaintenanceRequest_ApprovalStatus->addItem(QString());
        CreateMaintenanceRequest_ApprovalStatus->addItem(QString());
        CreateMaintenanceRequest_ApprovalStatus->setObjectName("CreateMaintenanceRequest_ApprovalStatus");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_ApprovalStatus);

        label_87 = new QLabel(verticalLayoutWidget_8);
        label_87->setObjectName("label_87");

        verticalLayout_11->addWidget(label_87);

        CreateMaintenanceRequest_MaintenanceID = new QLineEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_MaintenanceID->setObjectName("CreateMaintenanceRequest_MaintenanceID");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_MaintenanceID);

        label_88 = new QLabel(verticalLayoutWidget_8);
        label_88->setObjectName("label_88");

        verticalLayout_11->addWidget(label_88);

        CreateMaintenanceRequest_ApprovalDate = new QDateEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_ApprovalDate->setObjectName("CreateMaintenanceRequest_ApprovalDate");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_ApprovalDate);

        label_89 = new QLabel(verticalLayoutWidget_8);
        label_89->setObjectName("label_89");

        verticalLayout_11->addWidget(label_89);

        CreateMaintenanceRequest_Notes = new QLineEdit(verticalLayoutWidget_8);
        CreateMaintenanceRequest_Notes->setObjectName("CreateMaintenanceRequest_Notes");

        verticalLayout_11->addWidget(CreateMaintenanceRequest_Notes);

        CreateMaintenanceRequest_Submit = new QPushButton(page_11);
        CreateMaintenanceRequest_Submit->setObjectName("CreateMaintenanceRequest_Submit");
        CreateMaintenanceRequest_Submit->setGeometry(QRect(810, 540, 83, 29));
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
        verticalLayoutWidget_9 = new QWidget(page_12);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(1080, 80, 331, 493));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_98 = new QLabel(verticalLayoutWidget_9);
        label_98->setObjectName("label_98");

        verticalLayout_13->addWidget(label_98);

        UpdateMaintenanceRequest_VehicleID = new QLineEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_VehicleID->setObjectName("UpdateMaintenanceRequest_VehicleID");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_VehicleID);

        label_99 = new QLabel(verticalLayoutWidget_9);
        label_99->setObjectName("label_99");

        verticalLayout_13->addWidget(label_99);

        UpdateMaintenanceRequest_VehicleType = new QLineEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_VehicleType->setObjectName("UpdateMaintenanceRequest_VehicleType");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_VehicleType);

        label_100 = new QLabel(verticalLayoutWidget_9);
        label_100->setObjectName("label_100");

        verticalLayout_13->addWidget(label_100);

        UpdateMaintenanceRequest_EmpID = new QLineEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_EmpID->setObjectName("UpdateMaintenanceRequest_EmpID");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_EmpID);

        label_101 = new QLabel(verticalLayoutWidget_9);
        label_101->setObjectName("label_101");

        verticalLayout_13->addWidget(label_101);

        UpdateMaintenanceRequest_DateRequested = new QDateEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_DateRequested->setObjectName("UpdateMaintenanceRequest_DateRequested");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_DateRequested);

        label_102 = new QLabel(verticalLayoutWidget_9);
        label_102->setObjectName("label_102");

        verticalLayout_13->addWidget(label_102);

        UpdateMaintenanceRequest_ApprovalStatus = new QComboBox(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_ApprovalStatus->addItem(QString());
        UpdateMaintenanceRequest_ApprovalStatus->addItem(QString());
        UpdateMaintenanceRequest_ApprovalStatus->setObjectName("UpdateMaintenanceRequest_ApprovalStatus");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_ApprovalStatus);

        label_103 = new QLabel(verticalLayoutWidget_9);
        label_103->setObjectName("label_103");

        verticalLayout_13->addWidget(label_103);

        UpdateMaintenanceRequest_MaintenanceID = new QLineEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_MaintenanceID->setObjectName("UpdateMaintenanceRequest_MaintenanceID");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_MaintenanceID);

        label_104 = new QLabel(verticalLayoutWidget_9);
        label_104->setObjectName("label_104");

        verticalLayout_13->addWidget(label_104);

        UpdateMaintenanceRequest_ApprovalDate = new QDateEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_ApprovalDate->setObjectName("UpdateMaintenanceRequest_ApprovalDate");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_ApprovalDate);

        label_105 = new QLabel(verticalLayoutWidget_9);
        label_105->setObjectName("label_105");

        verticalLayout_13->addWidget(label_105);

        UpdateMaintenanceRequest_Notes = new QLineEdit(verticalLayoutWidget_9);
        UpdateMaintenanceRequest_Notes->setObjectName("UpdateMaintenanceRequest_Notes");

        verticalLayout_13->addWidget(UpdateMaintenanceRequest_Notes);

        label_106 = new QLabel(page_12);
        label_106->setObjectName("label_106");
        label_106->setGeometry(QRect(10, 60, 491, 16));
        UpdateMaintenanceReq_tableView = new QTableView(page_12);
        UpdateMaintenanceReq_tableView->setObjectName("UpdateMaintenanceReq_tableView");
        UpdateMaintenanceReq_tableView->setGeometry(QRect(10, 80, 1061, 481));
        UpdateMaintenanceReq_Save = new QPushButton(page_12);
        UpdateMaintenanceReq_Save->setObjectName("UpdateMaintenanceReq_Save");
        UpdateMaintenanceReq_Save->setGeometry(QRect(1330, 590, 83, 29));
        ClerkMain->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        Reports_Back = new QPushButton(page_13);
        Reports_Back->setObjectName("Reports_Back");
        Reports_Back->setGeometry(QRect(1400, 0, 83, 29));
        label_15 = new QLabel(page_13);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 0, 201, 41));
        label_15->setFont(font);
        tableView = new QTableView(page_13);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 90, 1301, 451));
        label_107 = new QLabel(page_13);
        label_107->setObjectName("label_107");
        label_107->setGeometry(QRect(20, 90, 141, 21));
        pushButton = new QPushButton(page_13);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 130, 83, 29));
        pushButton_2 = new QPushButton(page_13);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 170, 83, 29));
        pushButton_3 = new QPushButton(page_13);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 210, 83, 29));
        pushButton_4 = new QPushButton(page_13);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 260, 83, 29));
        ClerkMain->addWidget(page_13);
        Clerk->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Clerk);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1524, 25));
        Clerk->setMenuBar(menubar);
        statusbar = new QStatusBar(Clerk);
        statusbar->setObjectName("statusbar");
        Clerk->setStatusBar(statusbar);

        retranslateUi(Clerk);

        ClerkMain->setCurrentIndex(7);


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
        Create_Customer_Submit_2->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_16->setText(QCoreApplication::translate("Clerk", "Phone Number", nullptr));
        label_17->setText(QCoreApplication::translate("Clerk", "Email", nullptr));
        label_18->setText(QCoreApplication::translate("Clerk", "Date Added", nullptr));
        Create_Customer_Clear->setText(QCoreApplication::translate("Clerk", "Clear", nullptr));
        UpdateCustomer_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("Clerk", "Update Customer", nullptr));
        Update_Customer_Submit->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_19->setText(QCoreApplication::translate("Clerk", "Phone Number", nullptr));
        label_20->setText(QCoreApplication::translate("Clerk", "Email", nullptr));
        label_21->setText(QCoreApplication::translate("Clerk", "Date Added", nullptr));
        Update_Customer_Clear->setText(QCoreApplication::translate("Clerk", "Clear", nullptr));
        label_7->setText(QCoreApplication::translate("Clerk", "Double Click the Customer ID to Edit current Customer", nullptr));
        UpdateCustomer_RefreshTable->setText(QCoreApplication::translate("Clerk", "Refresh Table ", nullptr));
        label_4->setText(QCoreApplication::translate("Clerk", "Delete Customer", nullptr));
        DeleteCustomer_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_9->setText(QCoreApplication::translate("Clerk", "Double Click the Customer ID to Delete current Customer", nullptr));
        DeleteCustomer_Delete_Button->setText(QCoreApplication::translate("Clerk", "Delete", nullptr));
        label_22->setText(QCoreApplication::translate("Clerk", "User to be deleted ", nullptr));
        label_23->setText(QCoreApplication::translate("Clerk", "User ID", nullptr));
        label_5->setText(QCoreApplication::translate("Clerk", "Create Repair Requests", nullptr));
        CreateRepair_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_24->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_25->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_26->setText(QCoreApplication::translate("Clerk", "Technician ID", nullptr));
        label_27->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_28->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_29->setText(QCoreApplication::translate("Clerk", "Repair Fee", nullptr));
        label_30->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        label_31->setText(QCoreApplication::translate("Clerk", "Manager ID", nullptr));
        label_32->setText(QCoreApplication::translate("Clerk", "Approval Date", nullptr));
        label_33->setText(QCoreApplication::translate("Clerk", "Notes", nullptr));
        CreateRepairRequest_Submit->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_6->setText(QCoreApplication::translate("Clerk", "Update  Repair Requests", nullptr));
        UpdateRepair_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_34->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_35->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_36->setText(QCoreApplication::translate("Clerk", "Technician ID", nullptr));
        label_37->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_38->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_39->setText(QCoreApplication::translate("Clerk", "Repair Fee", nullptr));
        label_40->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        label_41->setText(QCoreApplication::translate("Clerk", "Manager ID", nullptr));
        label_42->setText(QCoreApplication::translate("Clerk", "Approval Date", nullptr));
        label_43->setText(QCoreApplication::translate("Clerk", "Notes", nullptr));
        UpdateRepairRequest_Submit->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_44->setText(QCoreApplication::translate("Clerk", "Double Click the Repair Request ID to Start Editing  current Request", nullptr));
        label_8->setText(QCoreApplication::translate("Clerk", "Create Rental Requests", nullptr));
        Create_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_45->setText(QCoreApplication::translate("Clerk", "Customer ID", nullptr));
        label_46->setText(QCoreApplication::translate("Clerk", "Customer Type", nullptr));
        label_47->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_48->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_49->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_51->setText(QCoreApplication::translate("Clerk", "Driver Requested", nullptr));
        CreateRentalRequest_DriverRequested->setItemText(0, QCoreApplication::translate("Clerk", "Yes", nullptr));
        CreateRentalRequest_DriverRequested->setItemText(1, QCoreApplication::translate("Clerk", "No", nullptr));

        label_52->setText(QCoreApplication::translate("Clerk", "Driver Request ID", nullptr));
        CreateRentalRequest_Submit->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_54->setText(QCoreApplication::translate("Clerk", "Daily Rate", nullptr));
        label_55->setText(QCoreApplication::translate("Clerk", "Total Cost", nullptr));
        label_56->setText(QCoreApplication::translate("Clerk", "Payment Status", nullptr));
        CreateRentalRequest_PaymentStatus->setItemText(0, QCoreApplication::translate("Clerk", "Paid", nullptr));
        CreateRentalRequest_PaymentStatus->setItemText(1, QCoreApplication::translate("Clerk", "Not Paid", nullptr));

        label_57->setText(QCoreApplication::translate("Clerk", "Date Start", nullptr));
        label_50->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_58->setText(QCoreApplication::translate("Clerk", "Date End", nullptr));
        label_53->setText(QCoreApplication::translate("Clerk", "Days To Be Rented", nullptr));
        label_59->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        CreateRentalRequest_ApprovalStatus->setItemText(0, QCoreApplication::translate("Clerk", "Approved", nullptr));
        CreateRentalRequest_ApprovalStatus->setItemText(1, QCoreApplication::translate("Clerk", "Pending", nullptr));

        label_10->setText(QCoreApplication::translate("Clerk", " Update Rental Requests", nullptr));
        Update_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_60->setText(QCoreApplication::translate("Clerk", "Customer ID", nullptr));
        label_61->setText(QCoreApplication::translate("Clerk", "Customer Type", nullptr));
        label_62->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_63->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_64->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_66->setText(QCoreApplication::translate("Clerk", "Driver Requested", nullptr));
        UpdateRentalRequest_DriverRequested->setItemText(0, QCoreApplication::translate("Clerk", "Yes", nullptr));
        UpdateRentalRequest_DriverRequested->setItemText(1, QCoreApplication::translate("Clerk", "No", nullptr));

        label_67->setText(QCoreApplication::translate("Clerk", "Driver Request ID", nullptr));
        label_69->setText(QCoreApplication::translate("Clerk", "Daily Rate", nullptr));
        label_75->setText(QCoreApplication::translate("Clerk", "Double Click the Rental Request ID to Start Editing  current Request", nullptr));
        UpdateRentalRequest_tableView_Submit->setText(QCoreApplication::translate("Clerk", "Save", nullptr));
        label_76->setText(QCoreApplication::translate("Clerk", "Save all Edits Made", nullptr));
        label_65->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_72->setText(QCoreApplication::translate("Clerk", "Date Start", nullptr));
        label_73->setText(QCoreApplication::translate("Clerk", "Date End", nullptr));
        label_68->setText(QCoreApplication::translate("Clerk", "Days To Be Rented", nullptr));
        label_71->setText(QCoreApplication::translate("Clerk", "Payment Status", nullptr));
        UpdateRentalRequest_PaymentStatus->setItemText(0, QCoreApplication::translate("Clerk", "Paid", nullptr));
        UpdateRentalRequest_PaymentStatus->setItemText(1, QCoreApplication::translate("Clerk", "Not Paid", nullptr));

        label_70->setText(QCoreApplication::translate("Clerk", "Total Cost", nullptr));
        label_74->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        UpdateRentalRequest_ApprovalStatus->setItemText(0, QCoreApplication::translate("Clerk", "Approved", nullptr));
        UpdateRentalRequest_ApprovalStatus->setItemText(1, QCoreApplication::translate("Clerk", "Not Approved", nullptr));

        label_11->setText(QCoreApplication::translate("Clerk", " Delete Rental Requests", nullptr));
        Delete_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_77->setText(QCoreApplication::translate("Clerk", "Double Click the Rental Request ID to be Deleted ", nullptr));
        label_78->setText(QCoreApplication::translate("Clerk", "Request ID to be deleted:", nullptr));
        label_79->setText(QCoreApplication::translate("Clerk", "ID", nullptr));
        DeleteRentalRequest_Delete->setText(QCoreApplication::translate("Clerk", "Delete", nullptr));
        label_12->setText(QCoreApplication::translate("Clerk", " Approve Rental Requests", nullptr));
        Approve_Rental_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_80->setText(QCoreApplication::translate("Clerk", "Double Click the Rental Request ID to Approve or Not Approve", nullptr));
        label_81->setText(QCoreApplication::translate("Clerk", "Rental Request ID to be approved ", nullptr));
        ApproveRentalRequest_Approve->setText(QCoreApplication::translate("Clerk", "Approve", nullptr));
        label_13->setText(QCoreApplication::translate("Clerk", "Create Maintenance Requests", nullptr));
        Create_Maintenance_Request_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_82->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_83->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_84->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_85->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_86->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        CreateMaintenanceRequest_ApprovalStatus->setItemText(0, QCoreApplication::translate("Clerk", "Approved", nullptr));
        CreateMaintenanceRequest_ApprovalStatus->setItemText(1, QCoreApplication::translate("Clerk", "Pending", nullptr));

        label_87->setText(QCoreApplication::translate("Clerk", "Maintenance ID", nullptr));
        label_88->setText(QCoreApplication::translate("Clerk", "Approval Date", nullptr));
        label_89->setText(QCoreApplication::translate("Clerk", "Notes", nullptr));
        CreateMaintenanceRequest_Submit->setText(QCoreApplication::translate("Clerk", "Submit", nullptr));
        label_14->setText(QCoreApplication::translate("Clerk", "Update Maintenance Requests", nullptr));
        Create_Maintenance_Request_Back_2->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_98->setText(QCoreApplication::translate("Clerk", "Vehicle ID", nullptr));
        label_99->setText(QCoreApplication::translate("Clerk", "Vehicle Type", nullptr));
        label_100->setText(QCoreApplication::translate("Clerk", "Employee ID", nullptr));
        label_101->setText(QCoreApplication::translate("Clerk", "Date Requested", nullptr));
        label_102->setText(QCoreApplication::translate("Clerk", "Approval Status", nullptr));
        UpdateMaintenanceRequest_ApprovalStatus->setItemText(0, QCoreApplication::translate("Clerk", "Approved", nullptr));
        UpdateMaintenanceRequest_ApprovalStatus->setItemText(1, QCoreApplication::translate("Clerk", "Pending", nullptr));

        label_103->setText(QCoreApplication::translate("Clerk", "Maintenance ID", nullptr));
        label_104->setText(QCoreApplication::translate("Clerk", "Approval Date", nullptr));
        label_105->setText(QCoreApplication::translate("Clerk", "Notes", nullptr));
        label_106->setText(QCoreApplication::translate("Clerk", "Double Click the Maintenance Request ID to Edit", nullptr));
        UpdateMaintenanceReq_Save->setText(QCoreApplication::translate("Clerk", "Save", nullptr));
        Reports_Back->setText(QCoreApplication::translate("Clerk", "Back", nullptr));
        label_15->setText(QCoreApplication::translate("Clerk", "Reports Section", nullptr));
        label_107->setText(QCoreApplication::translate("Clerk", "Type Of Reports", nullptr));
        pushButton->setText(QCoreApplication::translate("Clerk", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clerk", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clerk", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Clerk", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clerk: public Ui_Clerk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLERK_H
