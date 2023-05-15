/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QStackedWidget *AdminMain;
    QWidget *DashBoard;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *CreateReports_Button;
    QPushButton *EditReports_Button;
    QGroupBox *groupBox_2;
    QPushButton *CreateTables_Button;
    QPushButton *EditTables_Button;
    QPushButton *ViewTables_Button;
    QPushButton *DeleteTables_Button;
    QLabel *adminImg;
    QGroupBox *groupBox_3;
    QPushButton *CreateUser_Button;
    QPushButton *EditUser_Button;
    QPushButton *DeleteUser_Button;
    QPushButton *Logout;
    QWidget *Reports;
    QLabel *label_3;
    QPushButton *Create_Reports_Back;
    QWidget *page;
    QLabel *label_4;
    QPushButton *Edit_Reports_Back;
    QWidget *page_2;
    QLabel *label_6;
    QPushButton *Create_Tables_Back;
    QWidget *page_3;
    QLabel *label_7;
    QPushButton *Edit_Tables_Back;
    QWidget *page_4;
    QLabel *label_8;
    QPushButton *View_Tables_Back_;
    QWidget *page_5;
    QLabel *label_9;
    QPushButton *Delete_Tables_Back_;
    QWidget *page_6;
    QLabel *label_10;
    QPushButton *Create_User_Back;
    QWidget *page_7;
    QLabel *label_11;
    QPushButton *Edit_User_Back;
    QWidget *page_8;
    QLabel *label_12;
    QPushButton *Delete_User_Back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1514, 805);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        AdminMain = new QStackedWidget(centralwidget);
        AdminMain->setObjectName("AdminMain");
        AdminMain->setGeometry(QRect(9, -1, 1491, 801));
        DashBoard = new QWidget();
        DashBoard->setObjectName("DashBoard");
        label_2 = new QLabel(DashBoard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 120, 181, 31));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label = new QLabel(DashBoard);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 231, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        groupBox = new QGroupBox(DashBoard);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 150, 291, 201));
        groupBox->setFont(font);
        CreateReports_Button = new QPushButton(groupBox);
        CreateReports_Button->setObjectName("CreateReports_Button");
        CreateReports_Button->setGeometry(QRect(20, 60, 131, 31));
        EditReports_Button = new QPushButton(groupBox);
        EditReports_Button->setObjectName("EditReports_Button");
        EditReports_Button->setGeometry(QRect(20, 110, 131, 31));
        groupBox_2 = new QGroupBox(DashBoard);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(200, 370, 291, 201));
        groupBox_2->setFont(font);
        CreateTables_Button = new QPushButton(groupBox_2);
        CreateTables_Button->setObjectName("CreateTables_Button");
        CreateTables_Button->setGeometry(QRect(20, 40, 131, 31));
        EditTables_Button = new QPushButton(groupBox_2);
        EditTables_Button->setObjectName("EditTables_Button");
        EditTables_Button->setGeometry(QRect(20, 80, 131, 31));
        ViewTables_Button = new QPushButton(groupBox_2);
        ViewTables_Button->setObjectName("ViewTables_Button");
        ViewTables_Button->setGeometry(QRect(20, 120, 131, 31));
        DeleteTables_Button = new QPushButton(groupBox_2);
        DeleteTables_Button->setObjectName("DeleteTables_Button");
        DeleteTables_Button->setGeometry(QRect(20, 160, 131, 31));
        adminImg = new QLabel(DashBoard);
        adminImg->setObjectName("adminImg");
        adminImg->setGeometry(QRect(512, -40, 971, 851));
        adminImg->setStyleSheet(QString::fromUtf8(""));
        adminImg->setScaledContents(true);
        groupBox_3 = new QGroupBox(DashBoard);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(200, 590, 291, 151));
        groupBox_3->setFont(font);
        CreateUser_Button = new QPushButton(groupBox_3);
        CreateUser_Button->setObjectName("CreateUser_Button");
        CreateUser_Button->setGeometry(QRect(20, 30, 131, 31));
        EditUser_Button = new QPushButton(groupBox_3);
        EditUser_Button->setObjectName("EditUser_Button");
        EditUser_Button->setGeometry(QRect(20, 70, 131, 31));
        DeleteUser_Button = new QPushButton(groupBox_3);
        DeleteUser_Button->setObjectName("DeleteUser_Button");
        DeleteUser_Button->setGeometry(QRect(20, 110, 131, 31));
        Logout = new QPushButton(DashBoard);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(1382, 708, 101, 31));
        AdminMain->addWidget(DashBoard);
        adminImg->raise();
        label_2->raise();
        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        Logout->raise();
        Reports = new QWidget();
        Reports->setObjectName("Reports");
        label_3 = new QLabel(Reports);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 0, 101, 31));
        Create_Reports_Back = new QPushButton(Reports);
        Create_Reports_Back->setObjectName("Create_Reports_Back");
        Create_Reports_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(Reports);
        page = new QWidget();
        page->setObjectName("page");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 0, 91, 31));
        Edit_Reports_Back = new QPushButton(page);
        Edit_Reports_Back->setObjectName("Edit_Reports_Back");
        Edit_Reports_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(230, 0, 111, 41));
        Create_Tables_Back = new QPushButton(page_2);
        Create_Tables_Back->setObjectName("Create_Tables_Back");
        Create_Tables_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(230, 0, 81, 41));
        Edit_Tables_Back = new QPushButton(page_3);
        Edit_Tables_Back->setObjectName("Edit_Tables_Back");
        Edit_Tables_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(230, 0, 81, 41));
        View_Tables_Back_ = new QPushButton(page_4);
        View_Tables_Back_->setObjectName("View_Tables_Back_");
        View_Tables_Back_->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_9 = new QLabel(page_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(230, 0, 101, 41));
        Delete_Tables_Back_ = new QPushButton(page_5);
        Delete_Tables_Back_->setObjectName("Delete_Tables_Back_");
        Delete_Tables_Back_->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_10 = new QLabel(page_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 0, 81, 41));
        Create_User_Back = new QPushButton(page_6);
        Create_User_Back->setObjectName("Create_User_Back");
        Create_User_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_11 = new QLabel(page_7);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(230, 0, 81, 41));
        Edit_User_Back = new QPushButton(page_7);
        Edit_User_Back->setObjectName("Edit_User_Back");
        Edit_User_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_12 = new QLabel(page_8);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(230, 0, 91, 41));
        Delete_User_Back = new QPushButton(page_8);
        Delete_User_Back->setObjectName("Delete_User_Back");
        Delete_User_Back->setGeometry(QRect(1380, 0, 83, 29));
        AdminMain->addWidget(page_8);
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1514, 25));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName("statusbar");
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        AdminMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Administrative Tools", nullptr));
        label->setText(QCoreApplication::translate("Admin", "Logged in as Admin User", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin", "Reports Tools", nullptr));
        CreateReports_Button->setText(QCoreApplication::translate("Admin", "Create Reports", nullptr));
        EditReports_Button->setText(QCoreApplication::translate("Admin", "Edit Reports", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Admin", "Database Tools", nullptr));
        CreateTables_Button->setText(QCoreApplication::translate("Admin", "Create Tables", nullptr));
        EditTables_Button->setText(QCoreApplication::translate("Admin", "Edit Tables", nullptr));
        ViewTables_Button->setText(QCoreApplication::translate("Admin", "View Tables", nullptr));
        DeleteTables_Button->setText(QCoreApplication::translate("Admin", " Delete Tables", nullptr));
        adminImg->setText(QCoreApplication::translate("Admin", "IMG", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Admin", "User Tools", nullptr));
        CreateUser_Button->setText(QCoreApplication::translate("Admin", "Create User", nullptr));
        EditUser_Button->setText(QCoreApplication::translate("Admin", "Edit User", nullptr));
        DeleteUser_Button->setText(QCoreApplication::translate("Admin", "Delete User", nullptr));
        Logout->setText(QCoreApplication::translate("Admin", "Logout", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Create Reports", nullptr));
        Create_Reports_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Edit Reports", nullptr));
        Edit_Reports_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "Create Tables ", nullptr));
        Create_Tables_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_7->setText(QCoreApplication::translate("Admin", "Edit Tables", nullptr));
        Edit_Tables_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("Admin", "View Tables", nullptr));
        View_Tables_Back_->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_9->setText(QCoreApplication::translate("Admin", "Delete Tables", nullptr));
        Delete_Tables_Back_->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_10->setText(QCoreApplication::translate("Admin", "Create User", nullptr));
        Create_User_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_11->setText(QCoreApplication::translate("Admin", "Edit User", nullptr));
        Edit_User_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_12->setText(QCoreApplication::translate("Admin", "Delete User", nullptr));
        Delete_User_Back->setText(QCoreApplication::translate("Admin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
