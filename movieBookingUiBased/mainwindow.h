#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "seatwindow.h"
#include "invoice.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    SeatWindow *seatObj;
    Invoice *invoiceMainObj;
private slots:
    void on_adminLoginpushButton_clicked();    

    void on_listMoviecomboBox_activated(const QString &arg1);

    void on_adminLoginpushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
