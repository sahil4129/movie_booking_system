#include "invoice.h"
#include "ui_invoice.h"
#include "QDebug"
#include "QMessageBox"
#include "iostream"
#include "QGridLayout"
#include "QFile"
Invoice::Invoice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Invoice)
{
    ui->setupUi(this);
}

Invoice::~Invoice()
{
    delete ui;
}
void Invoice::paymentPage(std::string movie,std::string timing , int tickets,std::vector<std::string>seats){

    show();
    ui->movietextEdit_2->setText(QString::fromStdString(movie));
    ui->timingtextEdit_2->setText(QString::fromStdString(timing));
    ui->tickettextEdit_2->setText(QString::number(tickets));
    ui->tickettextEdit->setText(QString::number(tickets*200));
    totalPrice = tickets*200;
    ui->movietextEdit_2->setReadOnly(true);
    ui->timingtextEdit_2->setReadOnly(true);
    ui->tickettextEdit_2->setReadOnly(true);
    ui->tickettextEdit->setReadOnly(true);

    totalTicketsInvoice=tickets;
    movieNameInvoice = movie;
    movieTimingInvoice = timing;

    Inseats = seats;
    for(int i=0;i<tickets;i++){
        ui->listMoviecomboBox_2->addItem(QString::fromStdString(seats[i]));
    }
}

void Invoice::on_cancelpushButton_clicked()
{
    close();
}

void Invoice::on_paypushButton_clicked()
{

    std::string method = ui->methodcomboBox->currentText().toStdString();
    bool paydone=false;

    std::string name =   ui->nameLineEdit->text().toStdString();
    std::string email =  ui->emailLineEdit->text().toStdString();
    std::string phone  = ui->phoneLineEdit->text().toStdString();

    if(name=="" || email =="" || phone ==""){
        QMessageBox msgBox;
        msgBox.setText("Please Enter Name , Email and Phone Number");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
    if(method =="UPI/Paytm"){
        if(ui->upiLineEdit->text().toStdString() == "demo@upi"){
            paydone=true;
        }
    }
    else if(method == "Debit Card"){
        if(ui->namecardLineEdit->text().toStdString() == "demo1" && ui->cardNoEdit->text().toStdString() == "121121" && ui->cvvLineEdit->text().toStdString() == "121" && ui->expLineEdit->text().toStdString() == "05/21"){
            paydone=true;
        }
    }
    else if(method == "Credit Card"){
        if(ui->namecardLineEdit->text().toStdString() == "demo2" && ui->cardNoEdit->text().toStdString() == "121121" && ui->cvvLineEdit->text().toStdString() == "121" && ui->expLineEdit->text().toStdString() == "05/21"){
            paydone=true;
        }
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Please Select Payment Method");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }

    QMessageBox msgBox;
    if(paydone){
        msgBox.setText("Payment Done !!");

    }else{
        msgBox.setText("Payment Failed !!");
    }
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.exec();

    inv = new FinalInvoice;
    inv->finalInvoice(name,email,phone,totalRemainPrice,method,totalTicketsInvoice,Inseats);
    }
}

void Invoice::on_discoutpushButton_2_clicked()
{
     ui->discountTextEdit->setReadOnly(true);
     ui->totaltextEdit->setReadOnly(true);

     std::vector<QStringList>codes;

      QFile file("../Files/discountCodes.txt");
      if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
          return;

      QTextStream in(&file);
      while (!in.atEnd()) {
          QString line = in.readLine();
          if(line!=""){
              QStringList line3 = line.split(",");
              codes.push_back(line3);
          }
      }

      bool applied =false;
      for(int i=0;i<codes.size();i++){
          QStringList line3 = codes[i];
          if(ui->codeLineEdit->text() == line3.at(0)){
              double discount =line3.at(1).toInt();
              double discountPre= discount/100;
              QPalette *palette = new QPalette();
              palette->setColor(QPalette::Base,Qt::green);
              ui->codeLineEdit->setPalette(*palette);

              ui->discountTextEdit->setText(QString::number(totalPrice*discountPre));
              totalRemainPrice = totalPrice - totalPrice*discountPre;
              ui->totaltextEdit->setText(QString::number(totalRemainPrice));
              applied=true;
              break;
          }
       }

      if(!applied){
          QPalette *palette = new QPalette();
          palette->setColor(QPalette::Base,Qt::red);
          ui->codeLineEdit->setPalette(*palette);

          ui->discountTextEdit->setText(QString::number(0));
          totalRemainPrice = totalPrice;
          ui->totaltextEdit->setText(QString::number(totalRemainPrice));

          QMessageBox msgBox;
          msgBox.setText("Invalid Code!");
          msgBox.setStandardButtons(QMessageBox::Ok);
          msgBox.setDefaultButton(QMessageBox::Ok);
          msgBox.exec();
      }
}

