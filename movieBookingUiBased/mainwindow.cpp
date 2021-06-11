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
#include "QSqlDatabase"
#include "QSqlQuery"
#include "QSqlRecord"
#include "QSqlError"
#include "QSqlDriver"
#include "QSqlQueryModel"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->adminUsernameLineEdit->setPlaceholderText("Username");
    ui->adminPasswordLineEdit->setPlaceholderText("password");
    connectionOpen();
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
    if(arg1 =="Select"){
       ui->timingcomboBox->clear();
       ui->timingcomboBox->addItem("Select");
    }else{
        QSqlQuery query3("select id from movieName where name = '"+arg1+"'");
        QString movieId;
        if (!query3.isActive()){
              qDebug() << query3.lastError().text();
        }else{
            while (query3.next()) {
              movieId= query3.value(0).toString();
            }
          }

        QSqlQuery query4("select timing from movie_timings where movie_id = '"+movieId+"'");
        if (!query4.isActive()){
              qDebug() << query4.lastError().text();
        }else{
            while (query4.next()) {
               ui->timingcomboBox->addItem(query4.value(0).toString());
            }
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

void MainWindow::setMoviesTimingList(){
    QSqlQuery query("select name from movieName");
    if (!query.isActive()){
          qDebug() << query.lastError().text();
    }else{
      while (query.next()) {
            ui->listMoviecomboBox->addItem(query.value(0).toString());
      }
    }
}

void MainWindow::on_adminLoginpushButton_3_clicked()
{
    close();
}

void MainWindow::on_adminLoginpushButton_4_clicked()
{
    setMoviesTimingList();
}

void MainWindow::connectionOpen(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
      db.setHostName("127.0.0.1");
      db.setUserName("root");
      db.setPassword("root");
      db.setDatabaseName("movies");
      if (!db.open()){
         QMessageBox::critical(nullptr, QObject::tr("Database Error"), db.lastError().text());
      }
}
