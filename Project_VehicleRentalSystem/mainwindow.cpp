#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_LoginButton_clicked()
{
    int UserName = ui->UserNameLineEdit->text().toInt();
    if( UserName  ==  1 ){
        maintenance = new Maintenance();
        maintenance->show();
        this->hide();
    }
    if ( UserName == 2 ){
        manager  = new Manager();
        this->hide();
        manager->show();
    }
    if( UserName == 3 ){
        clerk = new Clerk();
        this->hide();
        clerk->show();
    }
    if( UserName == 4){
        admin = new Admin();
        this->hide();
        admin->show();
    }

}


void MainWindow::HomeAdmin(Admin *a){
    a->hide();
    this->show();
}
