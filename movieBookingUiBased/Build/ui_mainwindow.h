/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *mainlabal;
    QLineEdit *adminUsernameLineEdit;
    QLabel *adminLoginLabel;
    QLineEdit *adminPasswordLineEdit;
    QPushButton *adminLoginpushButton;
    QLabel *loginlabel;
    QLabel *mainlabal_2;
    QComboBox *listMoviecomboBox;
    QLabel *mainlabal_3;
    QComboBox *timingcomboBox;
    QLabel *mainlabal_4;
    QSpinBox *ticketspinBox;
    QPushButton *adminLoginpushButton_2;
    QPushButton *adminLoginpushButton_3;
    QPushButton *adminLoginpushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(806, 637);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        mainlabal = new QLabel(centralwidget);
        mainlabal->setObjectName(QStringLiteral("mainlabal"));
        mainlabal->setGeometry(QRect(60, 30, 431, 51));
        mainlabal->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        adminUsernameLineEdit = new QLineEdit(centralwidget);
        adminUsernameLineEdit->setObjectName(QStringLiteral("adminUsernameLineEdit"));
        adminUsernameLineEdit->setGeometry(QRect(570, 30, 113, 25));
        adminLoginLabel = new QLabel(centralwidget);
        adminLoginLabel->setObjectName(QStringLiteral("adminLoginLabel"));
        adminLoginLabel->setGeometry(QRect(580, 0, 91, 21));
        adminPasswordLineEdit = new QLineEdit(centralwidget);
        adminPasswordLineEdit->setObjectName(QStringLiteral("adminPasswordLineEdit"));
        adminPasswordLineEdit->setGeometry(QRect(570, 60, 113, 25));
        adminLoginpushButton = new QPushButton(centralwidget);
        adminLoginpushButton->setObjectName(QStringLiteral("adminLoginpushButton"));
        adminLoginpushButton->setGeometry(QRect(700, 40, 89, 25));
        loginlabel = new QLabel(centralwidget);
        loginlabel->setObjectName(QStringLiteral("loginlabel"));
        loginlabel->setGeometry(QRect(600, 100, 121, 31));
        mainlabal_2 = new QLabel(centralwidget);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(90, 140, 191, 31));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        listMoviecomboBox = new QComboBox(centralwidget);
        listMoviecomboBox->setObjectName(QStringLiteral("listMoviecomboBox"));
        listMoviecomboBox->setGeometry(QRect(110, 190, 141, 31));
        mainlabal_3 = new QLabel(centralwidget);
        mainlabal_3->setObjectName(QStringLiteral("mainlabal_3"));
        mainlabal_3->setGeometry(QRect(330, 140, 191, 31));
        mainlabal_3->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        timingcomboBox = new QComboBox(centralwidget);
        timingcomboBox->setObjectName(QStringLiteral("timingcomboBox"));
        timingcomboBox->setGeometry(QRect(350, 190, 141, 31));
        mainlabal_4 = new QLabel(centralwidget);
        mainlabal_4->setObjectName(QStringLiteral("mainlabal_4"));
        mainlabal_4->setGeometry(QRect(200, 250, 241, 31));
        mainlabal_4->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        ticketspinBox = new QSpinBox(centralwidget);
        ticketspinBox->setObjectName(QStringLiteral("ticketspinBox"));
        ticketspinBox->setGeometry(QRect(260, 290, 101, 31));
        ticketspinBox->setMinimum(1);
        ticketspinBox->setMaximum(30);
        adminLoginpushButton_2 = new QPushButton(centralwidget);
        adminLoginpushButton_2->setObjectName(QStringLiteral("adminLoginpushButton_2"));
        adminLoginpushButton_2->setGeometry(QRect(230, 360, 211, 71));
        adminLoginpushButton_3 = new QPushButton(centralwidget);
        adminLoginpushButton_3->setObjectName(QStringLiteral("adminLoginpushButton_3"));
        adminLoginpushButton_3->setGeometry(QRect(700, 560, 89, 25));
        adminLoginpushButton_4 = new QPushButton(centralwidget);
        adminLoginpushButton_4->setObjectName(QStringLiteral("adminLoginpushButton_4"));
        adminLoginpushButton_4->setGeometry(QRect(10, 560, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        mainlabal->setText(QApplication::translate("MainWindow", "Welcome To Movie Ticket System", Q_NULLPTR));
        adminLoginLabel->setText(QApplication::translate("MainWindow", "Admin Login ", Q_NULLPTR));
        adminLoginpushButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        loginlabel->setText(QString());
        mainlabal_2->setText(QApplication::translate("MainWindow", "List Of Movies", Q_NULLPTR));
        listMoviecomboBox->clear();
        listMoviecomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select", Q_NULLPTR)
        );
        mainlabal_3->setText(QApplication::translate("MainWindow", "Show Timings", Q_NULLPTR));
        timingcomboBox->clear();
        timingcomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select", Q_NULLPTR)
        );
        mainlabal_4->setText(QApplication::translate("MainWindow", "Number of Tickets", Q_NULLPTR));
        adminLoginpushButton_2->setText(QApplication::translate("MainWindow", "Select Seats", Q_NULLPTR));
        adminLoginpushButton_3->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        adminLoginpushButton_4->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
