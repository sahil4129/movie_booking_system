/********************************************************************************
** Form generated from reading UI file 'seatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEATWINDOW_H
#define UI_SEATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeatWindow
{
public:
    QLabel *mainlabal_2;
    QTableWidget *tableWidget;
    QPushButton *adminLoginpushButton_2;
    QLineEdit *lineEdit;
    QTextEdit *movietextEdit;
    QTextEdit *timingtextEdit;
    QTextEdit *tickettextEdit;
    QLabel *adminLoginLabel;
    QLabel *adminLoginLabel_2;
    QLabel *adminLoginLabel_3;
    QLabel *ticketslabel;

    void setupUi(QWidget *SeatWindow)
    {
        if (SeatWindow->objectName().isEmpty())
            SeatWindow->setObjectName(QStringLiteral("SeatWindow"));
        SeatWindow->resize(741, 495);
        SeatWindow->setMinimumSize(QSize(691, 468));
        mainlabal_2 = new QLabel(SeatWindow);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(20, 30, 321, 31));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        tableWidget = new QTableWidget(SeatWindow);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem11);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 160, 621, 191));
        tableWidget->setLineWidth(0);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        adminLoginpushButton_2 = new QPushButton(SeatWindow);
        adminLoginpushButton_2->setObjectName(QStringLiteral("adminLoginpushButton_2"));
        adminLoginpushButton_2->setGeometry(QRect(230, 410, 201, 51));
        lineEdit = new QLineEdit(SeatWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 360, 621, 16));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        movietextEdit = new QTextEdit(SeatWindow);
        movietextEdit->setObjectName(QStringLiteral("movietextEdit"));
        movietextEdit->setGeometry(QRect(590, 20, 141, 31));
        timingtextEdit = new QTextEdit(SeatWindow);
        timingtextEdit->setObjectName(QStringLiteral("timingtextEdit"));
        timingtextEdit->setGeometry(QRect(590, 60, 141, 31));
        tickettextEdit = new QTextEdit(SeatWindow);
        tickettextEdit->setObjectName(QStringLiteral("tickettextEdit"));
        tickettextEdit->setGeometry(QRect(590, 100, 141, 31));
        adminLoginLabel = new QLabel(SeatWindow);
        adminLoginLabel->setObjectName(QStringLiteral("adminLoginLabel"));
        adminLoginLabel->setGeometry(QRect(490, 20, 91, 21));
        adminLoginLabel_2 = new QLabel(SeatWindow);
        adminLoginLabel_2->setObjectName(QStringLiteral("adminLoginLabel_2"));
        adminLoginLabel_2->setGeometry(QRect(490, 60, 91, 21));
        adminLoginLabel_3 = new QLabel(SeatWindow);
        adminLoginLabel_3->setObjectName(QStringLiteral("adminLoginLabel_3"));
        adminLoginLabel_3->setGeometry(QRect(490, 100, 91, 21));
        ticketslabel = new QLabel(SeatWindow);
        ticketslabel->setObjectName(QStringLiteral("ticketslabel"));
        ticketslabel->setGeometry(QRect(550, 420, 121, 31));

        retranslateUi(SeatWindow);

        QMetaObject::connectSlotsByName(SeatWindow);
    } // setupUi

    void retranslateUi(QWidget *SeatWindow)
    {
        SeatWindow->setWindowTitle(QApplication::translate("SeatWindow", "Form", Q_NULLPTR));
        mainlabal_2->setText(QApplication::translate("SeatWindow", "Movie Theater Seat Map", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SeatWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SeatWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SeatWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SeatWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SeatWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SeatWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("SeatWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("SeatWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("SeatWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("SeatWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("SeatWindow", "5", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        adminLoginpushButton_2->setText(QApplication::translate("SeatWindow", "Done", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("SeatWindow", "                                                                             Movie Screen ", Q_NULLPTR));
        adminLoginLabel->setText(QApplication::translate("SeatWindow", "Movie", Q_NULLPTR));
        adminLoginLabel_2->setText(QApplication::translate("SeatWindow", "Timing", Q_NULLPTR));
        adminLoginLabel_3->setText(QApplication::translate("SeatWindow", "TIckets", Q_NULLPTR));
        ticketslabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SeatWindow: public Ui_SeatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEATWINDOW_H
