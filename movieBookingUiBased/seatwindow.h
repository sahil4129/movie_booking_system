#ifndef SEATWINDOW_H
#define SEATWINDOW_H

#include <QWidget>

namespace Ui {
class SeatWindow;
}

class SeatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SeatWindow(QWidget *parent = nullptr);
    ~SeatWindow();

private slots:
    void on_adminLoginpushButton_2_clicked();

public slots:
    void textBoxSet(std::string movie, std::string timing ,int tickets);

public:
    Ui::SeatWindow *ui;
};

#endif // SEATWINDOW_H
