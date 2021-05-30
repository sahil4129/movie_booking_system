#include "invoice.h"
#include "ui_invoice.h"
#include "QDebug"
#include "QMessageBox"
#include "iostream"

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

   // if()codetextEdit
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
}

void Invoice::on_discoutpushButton_2_clicked()
{
     ui->discountTextEdit->setReadOnly(true);
      ui->totaltextEdit->setReadOnly(true);

    if(ui->codeLineEdit->text().toStdString() =="admin"){
        QPalette *palette = new QPalette();
        palette->setColor(QPalette::Base,Qt::green);
        ui->codeLineEdit->setPalette(*palette);

        ui->discountTextEdit->setText(QString::number(totalPrice*0.2));
        totalRemainPrice = totalPrice - totalPrice*0.2;
        ui->totaltextEdit->setText(QString::number(totalRemainPrice));
    }
    else if(ui->codeLineEdit->text().toStdString() =="admin2"){
        QPalette *palette = new QPalette();
        palette->setColor(QPalette::Base,Qt::green);
        ui->codeLineEdit->setPalette(*palette);

        ui->discountTextEdit->setText(QString::number(totalPrice*0.1));
        totalRemainPrice = totalPrice - totalPrice*0.1;
        ui->totaltextEdit->setText(QString::number(totalRemainPrice));
    }
    else{
        QPalette *palette = new QPalette();
        palette->setColor(QPalette::Base,Qt::red);
        ui->codeLineEdit->setPalette(*palette);

        ui->discountTextEdit->setText(QString::number(0));
        totalRemainPrice = totalPrice;
        ui->totaltextEdit->setText(QString::number(totalRemainPrice));
    }
}
