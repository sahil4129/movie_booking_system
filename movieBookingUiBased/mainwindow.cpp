#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminwindow.h"
#include "iostream"
#include "QString"
#include "QPushButton"
#include "QLineEdit"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     std::cout<<"Login sucess";
    ui->adminUsernameLineEdit->setPlaceholderText("Username");
    ui->adminPasswordLineEdit->setPlaceholderText("password");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_adminLoginpushButton_clicked()
{
    std::string username= ui->adminUsernameLineEdit->text().toStdString();
    std::string password= ui->adminPasswordLineEdit->text().toStdString();
    std::cout<<"Login sucess";
    adminWindow adminobj;
    if(adminobj.adminLogin(username,password)){
        ui->loginlabel->setText("Login sucess");
        qDebug() << "Login sucess";
    }else{
        ui->loginlabel->setText("Login fails");
        qDebug() << "Login fails";
    }
}
