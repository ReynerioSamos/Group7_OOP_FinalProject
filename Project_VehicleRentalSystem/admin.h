#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QDialog>


namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_CreateReports_Button_clicked();

    void on_EditReports_Button_clicked();

    void on_CreateTables_Button_clicked();

    void on_EditTables_Button_clicked();

    void on_ViewTables_Button_clicked();

    void on_DeleteTables_Button_clicked();

    void on_CreateUser_Button_clicked();

    void on_EditUser_Button_clicked();

    void on_DeleteUser_Button_clicked();

    void on_Edit_Reports_Back_clicked();

    void on_Create_Reports_Back_clicked();

    void on_Create_Tables_Back_clicked();

    void on_Edit_Tables_Back_clicked();

    void on_View_Tables_Back__clicked();

    void on_Delete_Tables_Back__clicked();

    void on_Create_User_Back_clicked();

    void on_Edit_User_Back_clicked();

    void on_Delete_User_Back_clicked();

    void on_Logout_clicked();

    void on_saveButton_clicked();

    void on_closeButton_clicked();

private:
    Ui::Admin *ui;

};

#endif // ADMIN_H
