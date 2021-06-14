#ifndef FINALINVOICE_H
#define FINALINVOICE_H

#include <QWidget>

namespace Ui {
class FinalInvoice;
}

class FinalInvoice : public QWidget
{
    Q_OBJECT

public:
    explicit FinalInvoice(QWidget *parent = nullptr);
    ~FinalInvoice();

public slots:
    void finalInvoice(std::string name , std::string email, std::string number,int paid , std::string method,int totalTickets,std::vector<std::string>Inseats);

private slots:
    void on_discoutpushButton_2_clicked();
    void updateSeats(int r,int c);
private:
    Ui::FinalInvoice *ui;
    std::vector<std::string>seats;
};

#endif // FINALINVOICE_H
