/********************************************************************************
** Form generated from reading UI file 'invoice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVOICE_H
#define UI_INVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Invoice
{
public:
    QLabel *adminLoginLabel_4;
    QTextEdit *timingtextEdit_2;
    QLabel *adminLoginLabel_5;
    QTextEdit *tickettextEdit_2;
    QTextEdit *movietextEdit_2;
    QLabel *adminLoginLabel_6;
    QLabel *mainlabal_2;
    QComboBox *methodcomboBox;
    QLabel *adminLoginLabel_7;
    QLabel *adminLoginLabel_8;
    QPushButton *paypushButton;
    QPushButton *cancelpushButton;
    QComboBox *listMoviecomboBox_2;
    QLabel *adminLoginLabel_9;
    QLabel *adminLoginLabel_10;
    QLabel *adminLoginLabel_11;
    QLabel *adminLoginLabel_12;
    QLabel *adminLoginLabel_13;
    QLabel *adminLoginLabel_14;
    QLabel *adminLoginLabel_15;
    QLabel *adminLoginLabel_2;
    QLineEdit *upiLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *phoneLineEdit;
    QLineEdit *namecardLineEdit;
    QLineEdit *cardNoEdit;
    QLineEdit *expLineEdit;
    QLineEdit *cvvLineEdit;
    QLabel *adminLoginLabel_16;
    QTextEdit *tickettextEdit;
    QLabel *adminLoginLabel_17;
    QLabel *adminLoginLabel_18;
    QTextEdit *totaltextEdit;
    QPushButton *discoutpushButton_2;
    QTextEdit *discountTextEdit;
    QLabel *adminLoginLabel_19;
    QLineEdit *codeLineEdit;

    void setupUi(QWidget *Invoice)
    {
        if (Invoice->objectName().isEmpty())
            Invoice->setObjectName(QStringLiteral("Invoice"));
        Invoice->resize(801, 686);
        Invoice->setMinimumSize(QSize(801, 686));
        adminLoginLabel_4 = new QLabel(Invoice);
        adminLoginLabel_4->setObjectName(QStringLiteral("adminLoginLabel_4"));
        adminLoginLabel_4->setGeometry(QRect(410, 150, 91, 21));
        timingtextEdit_2 = new QTextEdit(Invoice);
        timingtextEdit_2->setObjectName(QStringLiteral("timingtextEdit_2"));
        timingtextEdit_2->setGeometry(QRect(570, 100, 141, 31));
        adminLoginLabel_5 = new QLabel(Invoice);
        adminLoginLabel_5->setObjectName(QStringLiteral("adminLoginLabel_5"));
        adminLoginLabel_5->setGeometry(QRect(410, 60, 91, 21));
        tickettextEdit_2 = new QTextEdit(Invoice);
        tickettextEdit_2->setObjectName(QStringLiteral("tickettextEdit_2"));
        tickettextEdit_2->setGeometry(QRect(390, 180, 141, 31));
        movietextEdit_2 = new QTextEdit(Invoice);
        movietextEdit_2->setObjectName(QStringLiteral("movietextEdit_2"));
        movietextEdit_2->setGeometry(QRect(390, 100, 141, 31));
        adminLoginLabel_6 = new QLabel(Invoice);
        adminLoginLabel_6->setObjectName(QStringLiteral("adminLoginLabel_6"));
        adminLoginLabel_6->setGeometry(QRect(600, 60, 91, 21));
        mainlabal_2 = new QLabel(Invoice);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(20, 10, 161, 51));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        methodcomboBox = new QComboBox(Invoice);
        methodcomboBox->setObjectName(QStringLiteral("methodcomboBox"));
        methodcomboBox->setGeometry(QRect(180, 360, 141, 31));
        adminLoginLabel_7 = new QLabel(Invoice);
        adminLoginLabel_7->setObjectName(QStringLiteral("adminLoginLabel_7"));
        adminLoginLabel_7->setGeometry(QRect(40, 360, 131, 21));
        adminLoginLabel_8 = new QLabel(Invoice);
        adminLoginLabel_8->setObjectName(QStringLiteral("adminLoginLabel_8"));
        adminLoginLabel_8->setGeometry(QRect(40, 420, 91, 21));
        paypushButton = new QPushButton(Invoice);
        paypushButton->setObjectName(QStringLiteral("paypushButton"));
        paypushButton->setGeometry(QRect(290, 610, 111, 41));
        cancelpushButton = new QPushButton(Invoice);
        cancelpushButton->setObjectName(QStringLiteral("cancelpushButton"));
        cancelpushButton->setGeometry(QRect(440, 610, 111, 41));
        listMoviecomboBox_2 = new QComboBox(Invoice);
        listMoviecomboBox_2->setObjectName(QStringLiteral("listMoviecomboBox_2"));
        listMoviecomboBox_2->setGeometry(QRect(570, 180, 141, 31));
        adminLoginLabel_9 = new QLabel(Invoice);
        adminLoginLabel_9->setObjectName(QStringLiteral("adminLoginLabel_9"));
        adminLoginLabel_9->setGeometry(QRect(570, 150, 141, 21));
        adminLoginLabel_10 = new QLabel(Invoice);
        adminLoginLabel_10->setObjectName(QStringLiteral("adminLoginLabel_10"));
        adminLoginLabel_10->setGeometry(QRect(40, 100, 91, 21));
        adminLoginLabel_11 = new QLabel(Invoice);
        adminLoginLabel_11->setObjectName(QStringLiteral("adminLoginLabel_11"));
        adminLoginLabel_11->setGeometry(QRect(40, 180, 111, 21));
        adminLoginLabel_12 = new QLabel(Invoice);
        adminLoginLabel_12->setObjectName(QStringLiteral("adminLoginLabel_12"));
        adminLoginLabel_12->setGeometry(QRect(40, 140, 111, 21));
        adminLoginLabel_13 = new QLabel(Invoice);
        adminLoginLabel_13->setObjectName(QStringLiteral("adminLoginLabel_13"));
        adminLoginLabel_13->setGeometry(QRect(40, 480, 101, 21));
        adminLoginLabel_14 = new QLabel(Invoice);
        adminLoginLabel_14->setObjectName(QStringLiteral("adminLoginLabel_14"));
        adminLoginLabel_14->setGeometry(QRect(40, 530, 91, 21));
        adminLoginLabel_15 = new QLabel(Invoice);
        adminLoginLabel_15->setObjectName(QStringLiteral("adminLoginLabel_15"));
        adminLoginLabel_15->setGeometry(QRect(470, 540, 91, 21));
        adminLoginLabel_2 = new QLabel(Invoice);
        adminLoginLabel_2->setObjectName(QStringLiteral("adminLoginLabel_2"));
        adminLoginLabel_2->setGeometry(QRect(410, 480, 151, 31));
        upiLineEdit = new QLineEdit(Invoice);
        upiLineEdit->setObjectName(QStringLiteral("upiLineEdit"));
        upiLineEdit->setGeometry(QRect(180, 420, 531, 25));
        nameLineEdit = new QLineEdit(Invoice);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(180, 100, 141, 25));
        emailLineEdit = new QLineEdit(Invoice);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(180, 140, 141, 25));
        phoneLineEdit = new QLineEdit(Invoice);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        phoneLineEdit->setGeometry(QRect(180, 180, 141, 25));
        namecardLineEdit = new QLineEdit(Invoice);
        namecardLineEdit->setObjectName(QStringLiteral("namecardLineEdit"));
        namecardLineEdit->setGeometry(QRect(180, 480, 141, 25));
        cardNoEdit = new QLineEdit(Invoice);
        cardNoEdit->setObjectName(QStringLiteral("cardNoEdit"));
        cardNoEdit->setGeometry(QRect(180, 530, 141, 25));
        expLineEdit = new QLineEdit(Invoice);
        expLineEdit->setObjectName(QStringLiteral("expLineEdit"));
        expLineEdit->setGeometry(QRect(570, 480, 141, 25));
        cvvLineEdit = new QLineEdit(Invoice);
        cvvLineEdit->setObjectName(QStringLiteral("cvvLineEdit"));
        cvvLineEdit->setGeometry(QRect(570, 530, 141, 25));
        adminLoginLabel_16 = new QLabel(Invoice);
        adminLoginLabel_16->setObjectName(QStringLiteral("adminLoginLabel_16"));
        adminLoginLabel_16->setGeometry(QRect(390, 260, 171, 31));
        tickettextEdit = new QTextEdit(Invoice);
        tickettextEdit->setObjectName(QStringLiteral("tickettextEdit"));
        tickettextEdit->setGeometry(QRect(570, 260, 141, 31));
        adminLoginLabel_17 = new QLabel(Invoice);
        adminLoginLabel_17->setObjectName(QStringLiteral("adminLoginLabel_17"));
        adminLoginLabel_17->setGeometry(QRect(40, 260, 171, 31));
        adminLoginLabel_18 = new QLabel(Invoice);
        adminLoginLabel_18->setObjectName(QStringLiteral("adminLoginLabel_18"));
        adminLoginLabel_18->setGeometry(QRect(390, 360, 171, 31));
        totaltextEdit = new QTextEdit(Invoice);
        totaltextEdit->setObjectName(QStringLiteral("totaltextEdit"));
        totaltextEdit->setGeometry(QRect(570, 360, 141, 31));
        discoutpushButton_2 = new QPushButton(Invoice);
        discoutpushButton_2->setObjectName(QStringLiteral("discoutpushButton_2"));
        discoutpushButton_2->setGeometry(QRect(200, 310, 101, 21));
        discountTextEdit = new QTextEdit(Invoice);
        discountTextEdit->setObjectName(QStringLiteral("discountTextEdit"));
        discountTextEdit->setGeometry(QRect(570, 310, 141, 31));
        adminLoginLabel_19 = new QLabel(Invoice);
        adminLoginLabel_19->setObjectName(QStringLiteral("adminLoginLabel_19"));
        adminLoginLabel_19->setGeometry(QRect(390, 310, 121, 31));
        codeLineEdit = new QLineEdit(Invoice);
        codeLineEdit->setObjectName(QStringLiteral("codeLineEdit"));
        codeLineEdit->setGeometry(QRect(180, 260, 141, 25));

        retranslateUi(Invoice);

        QMetaObject::connectSlotsByName(Invoice);
    } // setupUi

    void retranslateUi(QWidget *Invoice)
    {
        Invoice->setWindowTitle(QApplication::translate("Invoice", "Form", Q_NULLPTR));
        adminLoginLabel_4->setText(QApplication::translate("Invoice", "TIckets", Q_NULLPTR));
        adminLoginLabel_5->setText(QApplication::translate("Invoice", "Movie", Q_NULLPTR));
        adminLoginLabel_6->setText(QApplication::translate("Invoice", "Timing", Q_NULLPTR));
        mainlabal_2->setText(QApplication::translate("Invoice", "Payments", Q_NULLPTR));
        methodcomboBox->clear();
        methodcomboBox->insertItems(0, QStringList()
         << QApplication::translate("Invoice", "Select", Q_NULLPTR)
         << QApplication::translate("Invoice", "Debit Card", Q_NULLPTR)
         << QApplication::translate("Invoice", "Credit Card", Q_NULLPTR)
         << QApplication::translate("Invoice", "UPI/Paytm", Q_NULLPTR)
        );
        adminLoginLabel_7->setText(QApplication::translate("Invoice", "Payment Method", Q_NULLPTR));
        adminLoginLabel_8->setText(QApplication::translate("Invoice", "UPI/Paytm", Q_NULLPTR));
        paypushButton->setText(QApplication::translate("Invoice", "Pay", Q_NULLPTR));
        cancelpushButton->setText(QApplication::translate("Invoice", "Cancel", Q_NULLPTR));
        adminLoginLabel_9->setText(QApplication::translate("Invoice", "Seats (Row-Seat )", Q_NULLPTR));
        adminLoginLabel_10->setText(QApplication::translate("Invoice", "Full Name", Q_NULLPTR));
        adminLoginLabel_11->setText(QApplication::translate("Invoice", "Phone Number", Q_NULLPTR));
        adminLoginLabel_12->setText(QApplication::translate("Invoice", "Email Id", Q_NULLPTR));
        adminLoginLabel_13->setText(QApplication::translate("Invoice", "Name on Card", Q_NULLPTR));
        adminLoginLabel_14->setText(QApplication::translate("Invoice", "Card Number", Q_NULLPTR));
        adminLoginLabel_15->setText(QApplication::translate("Invoice", "CVV", Q_NULLPTR));
        adminLoginLabel_2->setText(QApplication::translate("Invoice", "Card Expiry (MM/YY)", Q_NULLPTR));
        adminLoginLabel_16->setText(QApplication::translate("Invoice", "Total Ticket Price", Q_NULLPTR));
        adminLoginLabel_17->setText(QApplication::translate("Invoice", "Discount Code", Q_NULLPTR));
        adminLoginLabel_18->setText(QApplication::translate("Invoice", "Total Amount to be Paid", Q_NULLPTR));
        discoutpushButton_2->setText(QApplication::translate("Invoice", "Apply", Q_NULLPTR));
        adminLoginLabel_19->setText(QApplication::translate("Invoice", "Discount Amount", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Invoice: public Ui_Invoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVOICE_H
