#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminwindow.h"
#include "iostream"
#include "QString"
#include "QPushButton"
#include "QLineEdit"
#include "QDebug"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

    }
}

void MainWindow::on_listMoviecomboBox_activated(const QString &arg1)
{
    ui->timingcomboBox->clear();

    if(arg1 == "Super Man 2"){
        ui->timingcomboBox->clear();
        ui->timingcomboBox->addItem("9:30AM");
        ui->timingcomboBox->addItem("12:00PM");
        ui->timingcomboBox->addItem("15:30PM");
    }
    else if(arg1 == "Robot 2"){
        ui->timingcomboBox->addItem("8:30AM");
        ui->timingcomboBox->addItem("12:30PM");
        ui->timingcomboBox->addItem("14:00PM");
    }
    else if(arg1 == "Kalam"){
        ui->timingcomboBox->addItem("9:00AM");
        ui->timingcomboBox->addItem("13:00PM");
        ui->timingcomboBox->addItem("16:00PM");
    }
    else if(arg1 == "Love Aaj Kal"){
        ui->timingcomboBox->addItem("11:30AM");
        ui->timingcomboBox->addItem("14:30PM");
        ui->timingcomboBox->addItem("17:30PM");
    }
    else if(arg1 == "Khichdi 2"){
        ui->timingcomboBox->addItem("10:30AM");
        ui->timingcomboBox->addItem("15:00PM");
        ui->timingcomboBox->addItem("20:30PM");
    }
    else{
        ui->timingcomboBox->addItem("Select");
    }
}

void MainWindow::on_adminLoginpushButton_2_clicked()
{
    std::string movie = ui->listMoviecomboBox->currentText().toStdString();
    std::string timing = ui->timingcomboBox->currentText().toStdString();
    int noOfTickets = ui->ticketspinBox->value();

    if(movie =="" || movie =="Select" || timing =="" || timing == "Select" || noOfTickets ==0 ){
        QMessageBox msgBox;
        msgBox.setText("Please Select Movie then timing and Number of tickets");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
    seatObj = new SeatWindow;
    seatObj->setWindowModality(Qt::ApplicationModal);
    seatObj->textBoxSet(movie,timing,noOfTickets);
    seatObj->show();
    }
}
