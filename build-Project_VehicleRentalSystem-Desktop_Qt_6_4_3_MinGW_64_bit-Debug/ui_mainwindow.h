/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *PasswordLabel;
    QLineEdit *PasswordLineEdit;
    QPushButton *LoginButton;
    QPushButton *QuitButton;
    QLineEdit *UserNameLineEdit;
    QLabel *UserNameLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(694, 547);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(250, 160, 81, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(11);
        font.setBold(true);
        PasswordLabel->setFont(font);
        PasswordLineEdit = new QLineEdit(centralwidget);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(250, 190, 281, 41));
        PasswordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:  5px;\n"
"}"));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(450, 260, 80, 29));
        LoginButton->setStyleSheet(QString::fromUtf8(""));
        QuitButton = new QPushButton(centralwidget);
        QuitButton->setObjectName("QuitButton");
        QuitButton->setGeometry(QRect(450, 460, 80, 29));
        UserNameLineEdit = new QLineEdit(centralwidget);
        UserNameLineEdit->setObjectName("UserNameLineEdit");
        UserNameLineEdit->setGeometry(QRect(250, 90, 281, 51));
        UserNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:  5px;\n"
"}"));
        UserNameLabel = new QLabel(centralwidget);
        UserNameLabel->setObjectName("UserNameLabel");
        UserNameLabel->setGeometry(QRect(250, 50, 135, 59));
        UserNameLabel->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 694, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        QuitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        UserNameLabel->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
