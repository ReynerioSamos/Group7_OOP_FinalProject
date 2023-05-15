
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Admin screen Header files

// Maintenance screen header files
#include "maintenance.h"

// Manager screen header files
#include "manager.h"

// Clerk header file
#include "clerk.h"

// Admin header file
#include "admin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // Moving back to the login screen;
    void HomeAdmin(Admin* a);

private slots:
    void on_LoginButton_clicked();

private:
    Ui::MainWindow *ui;
    Maintenance *maintenance;
    Manager *manager;
    Clerk *clerk;
    Admin *admin;

};

#endif // MAINWINDOW_H
