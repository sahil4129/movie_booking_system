#include "finalinvoice.h"
#include "ui_finalinvoice.h"

FinalInvoice::FinalInvoice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FinalInvoice)
{
    ui->setupUi(this);
}

FinalInvoice::~FinalInvoice()
{
    delete ui;
}
void FinalInvoice::finalInvoice(std::string name , std::string email, std::string number,int paid , std::string method,int totalTicketsInvoice,std::vector<std::string>Inseats){
    ui->nameLineEdit->setText(QString::fromStdString(name));
    ui->emailLineEdit->setText(QString::fromStdString(email));
    ui->phoneLineEdit->setText(QString::fromStdString(number));
    ui->totaltextEdit->setText(QString::number(paid));
    ui->Payment->setText(QString::fromStdString(method));
    ui->tickettextEdit_2->setText(QString::fromStdString(method));
    ui->nameLineEdit->setReadOnly(true);
    ui->emailLineEdit->setReadOnly(true);
    ui->phoneLineEdit->setReadOnly(true);
    ui->totaltextEdit->setReadOnly(true);
    ui->Payment->setReadOnly(true);
    ui->tickettextEdit_2->setReadOnly(true);
    for(int i=0;i<totalTicketsInvoice;i++){
        ui->listWidget->addItem(QString::fromStdString(Inseats[i]));
    }
     ui->listWidget->setDisabled(true);
    show();
}

void FinalInvoice::on_discoutpushButton_2_clicked()
{
    close();
}
