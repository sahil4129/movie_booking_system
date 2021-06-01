#ifndef INVOICE_H
#define INVOICE_H

#include <QWidget>
#include "finalinvoice.h"

namespace Ui {
class Invoice; class inForm;
}

class Invoice : public QWidget
{
    Q_OBJECT

public:
    explicit Invoice(QWidget *parent = nullptr);
    ~Invoice();
    FinalInvoice *inv;

public slots:
    void paymentPage(std::string movie,std::string timing , int tickets,std::vector<std::string>seats);
private slots:
    void on_cancelpushButton_clicked();

    void on_paypushButton_clicked();

    void on_discoutpushButton_2_clicked();

private:
    Ui::Invoice *ui;
    int totalTicketsInvoice;
    std::string movieNameInvoice;
    std::string movieTimingInvoice;
    int totalPrice;
    int totalRemainPrice;
    std::vector<std::string>Inseats;
};

#endif // INVOICE_H
