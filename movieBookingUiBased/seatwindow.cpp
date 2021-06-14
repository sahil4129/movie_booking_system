#include "seatwindow.h"
#include "ui_seatwindow.h"
#include "QDebug"
#include "QMessageBox"
#include "QSqlQuery"
#include "QSqlError"

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

       QSqlQuery query("select * from theaterOne");
       if (!query.isActive()){
             qDebug() << query.lastError().text();
       }else{
         while (query.next()) {
              if(query.value(3).toInt() ==0){
                  QTableWidgetItem * pCell = new QTableWidgetItem;
                   pCell->setText(query.value(3).toString());
                   ui->tableWidget->setItem(query.value(1).toInt(), query.value(2).toInt(), pCell);
              }else{
                  QTableWidgetItem * pCell2 = new QTableWidgetItem;
                     pCell2->setText("1");
                     pCell2->setBackgroundColor(Qt::red);
                     pCell2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
                    ui->tableWidget->setItem(query.value(1).toInt(), query.value(2).toInt(),pCell2);
              }
         }
       }
       ui->ticketslabel->setText("Remains: "+QString::number(currentNumberTickets));
}

bool SeatWindow::seatAlreadyBooked(int i,int j){

    if(ui->tableWidget->item(i,j)->text()=="1"){
        return false;
    }
    return true;
}

void SeatWindow::seatBooked(int i,int j){
    QTableWidgetItem * pCell = new QTableWidgetItem;
    pCell->setText("1");
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
    if(seatAlreadyBooked(row,column)){
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
    }else{
        QMessageBox msgBox;
        msgBox.setText("Seat Already Booked!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
}
