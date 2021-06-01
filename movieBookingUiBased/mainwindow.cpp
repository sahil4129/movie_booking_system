#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminpanel.h"
#include "iostream"
#include "QString"
#include "QPushButton"
#include "QLineEdit"
#include "QDebug"
#include "QMessageBox"
#include "QFile"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->adminUsernameLineEdit->setPlaceholderText("Username");
    ui->adminPasswordLineEdit->setPlaceholderText("password");
    setMoviesTiming();
    setMoviesTimingList();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_adminLoginpushButton_clicked()
{
    std::string username= ui->adminUsernameLineEdit->text().toStdString();
    std::string password= ui->adminPasswordLineEdit->text().toStdString();
    adminObj = new AdminPanel;
    QMessageBox msgBox;
    if(adminObj->adminLogin(username,password)){
         msgBox.setText("Login Success!!");
        adminObj->show();
    }else{
        msgBox.setText("Login Failed ! Please Check Username/Password");
    }
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.exec();
}

void MainWindow::on_listMoviecomboBox_activated(const QString &arg1)
{
    ui->timingcomboBox->clear();
    for(int i=0;i<movies.size();i++){
        if(arg1 == movies[i]){
            ui->timingcomboBox->clear();
            QStringList line3 = timing[i];
            for ( const auto& j : line3  ){
                    ui->timingcomboBox->addItem(j);
             }
        }else if(arg1 =="Select"){
             ui->timingcomboBox->clear();
             ui->timingcomboBox->addItem("Select");
        }
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

void MainWindow::setMoviesTiming(){
    QFile file("../Files/movies.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if(line!=""){
            movies.push_back(line);
        }
    }


    QFile file2("../Files/timing.txt");
    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in2(&file2);
    while (!in2.atEnd()) {
        QString line2 = in2.readLine();
        if(line2!=""){
            QStringList line3 = line2.split(",");
            timing.push_back(line3);
        }
    }

}

void MainWindow::setMoviesTimingList(){
    for(int i=0;i<movies.size();i++){
        ui->listMoviecomboBox->addItem(movies[i]);
    }
}

void MainWindow::on_adminLoginpushButton_3_clicked()
{
    close();
}
