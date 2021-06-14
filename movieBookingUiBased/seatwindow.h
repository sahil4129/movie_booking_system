#ifndef SEATWINDOW_H
#define SEATWINDOW_H

#include <QWidget>
#include "invoice.h"
namespace Ui {
class SeatWindow;
}

class SeatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SeatWindow(QWidget *parent = nullptr);
    ~SeatWindow();

    Invoice *invoiceSeatObj;

private slots:
    void on_adminLoginpushButton_2_clicked();
    void seatBooked(int row,int column);
     bool seatAlreadyBooked(int row,int column);
    void on_tableWidget_cellClicked(int row, int column);

public slots:
    void textBoxSet(std::string movie, std::string timing ,int tickets);

public:
    Ui::SeatWindow *ui;
    int currentNumberTickets;
    int totalTickets;
    std::string movieName;
    std::string movieTiming;
    std::vector<std::string>seats;
};

#endif // SEATWINDOW_H
