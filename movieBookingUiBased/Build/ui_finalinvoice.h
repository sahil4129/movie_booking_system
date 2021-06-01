/********************************************************************************
** Form generated from reading UI file 'finalinvoice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALINVOICE_H
#define UI_FINALINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinalInvoice
{
public:
    QLabel *adminLoginLabel_10;
    QLineEdit *phoneLineEdit;
    QLabel *adminLoginLabel_12;
    QLineEdit *nameLineEdit;
    QLineEdit *emailLineEdit;
    QLabel *adminLoginLabel_18;
    QTextEdit *totaltextEdit;
    QLabel *adminLoginLabel_7;
    QTextEdit *Payment;
    QLabel *mainlabal_2;
    QPushButton *discoutpushButton_2;
    QListWidget *listWidget;
    QLabel *adminLoginLabel_13;
    QTextEdit *tickettextEdit_2;
    QLabel *adminLoginLabel_4;
    QLabel *adminLoginLabel_11;

    void setupUi(QWidget *FinalInvoice)
    {
        if (FinalInvoice->objectName().isEmpty())
            FinalInvoice->setObjectName(QStringLiteral("FinalInvoice"));
        FinalInvoice->resize(677, 455);
        FinalInvoice->setMinimumSize(QSize(673, 455));
        adminLoginLabel_10 = new QLabel(FinalInvoice);
        adminLoginLabel_10->setObjectName(QStringLiteral("adminLoginLabel_10"));
        adminLoginLabel_10->setGeometry(QRect(60, 60, 91, 21));
        phoneLineEdit = new QLineEdit(FinalInvoice);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        phoneLineEdit->setGeometry(QRect(200, 140, 141, 25));
        adminLoginLabel_12 = new QLabel(FinalInvoice);
        adminLoginLabel_12->setObjectName(QStringLiteral("adminLoginLabel_12"));
        adminLoginLabel_12->setGeometry(QRect(60, 100, 111, 21));
        nameLineEdit = new QLineEdit(FinalInvoice);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(200, 60, 141, 25));
        emailLineEdit = new QLineEdit(FinalInvoice);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(200, 100, 141, 25));
        adminLoginLabel_18 = new QLabel(FinalInvoice);
        adminLoginLabel_18->setObjectName(QStringLiteral("adminLoginLabel_18"));
        adminLoginLabel_18->setGeometry(QRect(60, 180, 91, 31));
        totaltextEdit = new QTextEdit(FinalInvoice);
        totaltextEdit->setObjectName(QStringLiteral("totaltextEdit"));
        totaltextEdit->setGeometry(QRect(200, 180, 141, 31));
        adminLoginLabel_7 = new QLabel(FinalInvoice);
        adminLoginLabel_7->setObjectName(QStringLiteral("adminLoginLabel_7"));
        adminLoginLabel_7->setGeometry(QRect(60, 230, 131, 21));
        Payment = new QTextEdit(FinalInvoice);
        Payment->setObjectName(QStringLiteral("Payment"));
        Payment->setGeometry(QRect(200, 230, 141, 31));
        mainlabal_2 = new QLabel(FinalInvoice);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(140, 0, 91, 51));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        discoutpushButton_2 = new QPushButton(FinalInvoice);
        discoutpushButton_2->setObjectName(QStringLiteral("discoutpushButton_2"));
        discoutpushButton_2->setGeometry(QRect(290, 370, 111, 41));
        discoutpushButton_2->setMinimumSize(QSize(101, 0));
        listWidget = new QListWidget(FinalInvoice);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(460, 140, 141, 121));
        adminLoginLabel_13 = new QLabel(FinalInvoice);
        adminLoginLabel_13->setObjectName(QStringLiteral("adminLoginLabel_13"));
        adminLoginLabel_13->setGeometry(QRect(390, 100, 171, 31));
        tickettextEdit_2 = new QTextEdit(FinalInvoice);
        tickettextEdit_2->setObjectName(QStringLiteral("tickettextEdit_2"));
        tickettextEdit_2->setGeometry(QRect(460, 60, 141, 31));
        adminLoginLabel_4 = new QLabel(FinalInvoice);
        adminLoginLabel_4->setObjectName(QStringLiteral("adminLoginLabel_4"));
        adminLoginLabel_4->setGeometry(QRect(390, 60, 51, 21));
        adminLoginLabel_11 = new QLabel(FinalInvoice);
        adminLoginLabel_11->setObjectName(QStringLiteral("adminLoginLabel_11"));
        adminLoginLabel_11->setGeometry(QRect(60, 140, 111, 21));

        retranslateUi(FinalInvoice);

        QMetaObject::connectSlotsByName(FinalInvoice);
    } // setupUi

    void retranslateUi(QWidget *FinalInvoice)
    {
        FinalInvoice->setWindowTitle(QApplication::translate("FinalInvoice", "Form", Q_NULLPTR));
        adminLoginLabel_10->setText(QApplication::translate("FinalInvoice", "Full Name", Q_NULLPTR));
        adminLoginLabel_12->setText(QApplication::translate("FinalInvoice", "Email Id", Q_NULLPTR));
        adminLoginLabel_18->setText(QApplication::translate("FinalInvoice", "Amount Paid", Q_NULLPTR));
        adminLoginLabel_7->setText(QApplication::translate("FinalInvoice", "Payment Method", Q_NULLPTR));
        mainlabal_2->setText(QApplication::translate("FinalInvoice", "Invoice", Q_NULLPTR));
        discoutpushButton_2->setText(QApplication::translate("FinalInvoice", "OK", Q_NULLPTR));
        adminLoginLabel_13->setText(QApplication::translate("FinalInvoice", "Booked Seats Number", Q_NULLPTR));
        adminLoginLabel_4->setText(QApplication::translate("FinalInvoice", "TIckets", Q_NULLPTR));
        adminLoginLabel_11->setText(QApplication::translate("FinalInvoice", "Phone Number", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FinalInvoice: public Ui_FinalInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALINVOICE_H
