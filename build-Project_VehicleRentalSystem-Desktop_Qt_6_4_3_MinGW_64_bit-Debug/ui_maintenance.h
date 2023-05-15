/********************************************************************************
** Form generated from reading UI file 'maintenance.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_H
#define UI_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Maintenance
{
public:
    QStackedWidget *MainW;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *jobsMarkedCompletedButton;
    QPushButton *updateVehicleStateButton;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *makeRepairRequestButton;
    QLabel *label_2;
    QWidget *page_2;
    QPushButton *Back_01;
    QLabel *label;
    QWidget *page_3;
    QLabel *label_4;
    QPushButton *Back_02;
    QWidget *page_4;
    QLabel *label_5;
    QPushButton *Back_03;

    void setupUi(QWidget *Maintenance)
    {
        if (Maintenance->objectName().isEmpty())
            Maintenance->setObjectName("Maintenance");
        Maintenance->resize(1450, 772);
        MainW = new QStackedWidget(Maintenance);
        MainW->setObjectName("MainW");
        MainW->setGeometry(QRect(9, 9, 1431, 761));
        page = new QWidget();
        page->setObjectName("page");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 150, 291, 201));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        jobsMarkedCompletedButton = new QPushButton(groupBox);
        jobsMarkedCompletedButton->setObjectName("jobsMarkedCompletedButton");
        jobsMarkedCompletedButton->setGeometry(QRect(20, 60, 131, 31));
        updateVehicleStateButton = new QPushButton(groupBox);
        updateVehicleStateButton->setObjectName("updateVehicleStateButton");
        updateVehicleStateButton->setGeometry(QRect(20, 110, 171, 31));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 110, 181, 31));
        label_3->setFont(font);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 380, 291, 91));
        groupBox_2->setFont(font);
        makeRepairRequestButton = new QPushButton(groupBox_2);
        makeRepairRequestButton->setObjectName("makeRepairRequestButton");
        makeRepairRequestButton->setGeometry(QRect(20, 30, 201, 41));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 281, 51));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        MainW->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        Back_01 = new QPushButton(page_2);
        Back_01->setObjectName("Back_01");
        Back_01->setGeometry(QRect(1320, 0, 83, 29));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 201, 41));
        label->setFont(font);
        MainW->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 151, 41));
        label_4->setFont(font);
        Back_02 = new QPushButton(page_3);
        Back_02->setObjectName("Back_02");
        Back_02->setGeometry(QRect(1320, 0, 83, 29));
        MainW->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 10, 161, 31));
        label_5->setFont(font);
        Back_03 = new QPushButton(page_4);
        Back_03->setObjectName("Back_03");
        Back_03->setGeometry(QRect(1320, 0, 83, 29));
        MainW->addWidget(page_4);

        retranslateUi(Maintenance);

        MainW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Maintenance);
    } // setupUi

    void retranslateUi(QWidget *Maintenance)
    {
        Maintenance->setWindowTitle(QCoreApplication::translate("Maintenance", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Maintenance", "View Jobs", nullptr));
        jobsMarkedCompletedButton->setText(QCoreApplication::translate("Maintenance", "Jobs Completed", nullptr));
        updateVehicleStateButton->setText(QCoreApplication::translate("Maintenance", "Update Vehicle State", nullptr));
        label_3->setText(QCoreApplication::translate("Maintenance", "Maintenance Tools", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Maintenance", "Repair Requests", nullptr));
        makeRepairRequestButton->setText(QCoreApplication::translate("Maintenance", "Make Repair Request", nullptr));
        label_2->setText(QCoreApplication::translate("Maintenance", "Logged in as Maintenance User", nullptr));
        Back_01->setText(QCoreApplication::translate("Maintenance", "Back", nullptr));
        label->setText(QCoreApplication::translate("Maintenance", "Jobs Completed Section", nullptr));
        label_4->setText(QCoreApplication::translate("Maintenance", "Update Vehicle State", nullptr));
        Back_02->setText(QCoreApplication::translate("Maintenance", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("Maintenance", "Make Repair Request", nullptr));
        Back_03->setText(QCoreApplication::translate("Maintenance", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Maintenance: public Ui_Maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
