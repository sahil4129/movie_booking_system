#include "seatwindow.h"
#include "ui_seatwindow.h"

SeatWindow::SeatWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeatWindow)
{
    ui->setupUi(this);
}

SeatWindow::~SeatWindow()
{
    delete ui;
}

void SeatWindow::textBoxSet(std::string movie, std::string timing ,int tickets){
       ui->movietextEdit->setText(QString::fromStdString(movie));
       ui->timingtextEdit->setText(QString::fromStdString(timing));
       ui->tickettextEdit->setText(QString::number(tickets));
}

void SeatWindow::on_adminLoginpushButton_2_clicked()
{

    close();
}
