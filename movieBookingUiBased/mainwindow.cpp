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
              auto itr = timing.find(i+1);
              if (itr != timing.end() ) {
                   QList<QString>t = itr->second;
                   for (int j= 0; j < t.size(); ++j) {
                        ui->timingcomboBox->addItem(t.at(j));
                   }
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

    QSqlQuery query("select name from movieName");
    if (!query.isActive()){
          qDebug() << query.lastError().text();
    }else{
      while (query.next()) {
          movies.push_back(query.value(0).toString());
          // qDebug()<<query.value(0).toString();
      }
    }

    QSqlQuery query2("SELECT * FROM movies.movie_timings where movie_id in ( select id from movieName) ORDER by movie_id");
    if (!query2.isActive()){
          qDebug() << query2.lastError().text();
    }else{
      while (query2.next()) {
           int ke =query2.value(1).toInt();
           auto itr = timing.find(ke);
          if (itr == timing.end() ) {
            QList<QString>t;
            t.append(query2.value(2).toString());
             timing.insert({ ke, t});
          } else {
             itr->second.append(query2.value(2).toString());
          }
      }
    }
}

void MainWindow::setMoviesTimingList(){
    for(int i=0;i<movies.size();i++){
        if(ui->listMoviecomboBox->findText(movies[i]) == -1){
        ui->listMoviecomboBox->addItem(movies[i]);
        }
    }
}

void MainWindow::on_adminLoginpushButton_3_clicked()
{
    close();
}

void MainWindow::on_adminLoginpushButton_4_clicked()
{
    setMoviesTiming();
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
