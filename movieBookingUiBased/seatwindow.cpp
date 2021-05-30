#include "seatwindow.h"
#include "ui_seatwindow.h"
#include "QDebug"
#include "QMessageBox"

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
       currentNumberTickets = tickets;
       totalTickets=tickets;
       movieName = movie;
       movieTiming = timing;
       int rows = ui->tableWidget->rowCount();
       int column = ui->tableWidget->columnCount();
       for(int i=0;i<rows;i++){
           for(int j=0;j<column;j++){
               QTableWidgetItem * pCell = new QTableWidgetItem;
               pCell->setText("0");
              ui->tableWidget->setItem(i, j, pCell);
           }
       }
       ui->ticketslabel->setText("Remains: "+QString::number(currentNumberTickets));
       seatAlreadyBooked(1,4);
       seatAlreadyBooked(2,5);
       seatAlreadyBooked(3,3);
}

void SeatWindow::seatAlreadyBooked(int i,int j){
    QTableWidgetItem * pCell = new QTableWidgetItem;
    pCell->setText("1");
    pCell->setBackgroundColor(Qt::red);
    pCell->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
     ui->tableWidget->setItem(i, j, pCell);

}
void SeatWindow::seatBooked(int i,int j){
    QTableWidgetItem * pCell = new QTableWidgetItem;
    pCell->setBackgroundColor(Qt::green);
    pCell->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
     ui->tableWidget->setItem(i, j, pCell);

}
void SeatWindow::on_adminLoginpushButton_2_clicked()
{
    close();
    invoiceSeatObj = new Invoice;
    invoiceSeatObj->paymentPage(movieName,movieTiming,totalTickets,seats);
}

void SeatWindow::on_tableWidget_cellClicked(int row, int column)
{
    if(currentNumberTickets >0){
        seats.push_back(std::to_string(row+1) +"R -"+std::to_string(column+1));
        seatBooked(row,column);
        currentNumberTickets--;
        ui->ticketslabel->setText("Remains: "+QString::number(currentNumberTickets));
    }else{
        QMessageBox msgBox;
        msgBox.setText("You Already Select All Seats");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
}
