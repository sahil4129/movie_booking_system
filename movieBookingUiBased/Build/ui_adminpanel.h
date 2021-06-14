/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QLabel *mainlabal_2;
    QPushButton *adminLoginpushButton_2;
    QComboBox *ActioncomboBox;
    QComboBox *listActioncomboBox;
    QLineEdit *movie;
    QLineEdit *timing;
    QLineEdit *code;
    QLabel *adminLoginLabel;
    QLabel *adminLoginLabel_2;
    QLabel *adminLoginLabel_3;
    QPushButton *adminLoginpushButton_3;
    QLineEdit *discount;
    QLabel *adminLoginLabel_4;
    QComboBox *NewcomboBox;

    void setupUi(QWidget *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName(QStringLiteral("AdminPanel"));
        AdminPanel->resize(763, 506);
        AdminPanel->setMinimumSize(QSize(763, 506));
        mainlabal_2 = new QLabel(AdminPanel);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(210, 10, 171, 61));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        adminLoginpushButton_2 = new QPushButton(AdminPanel);
        adminLoginpushButton_2->setObjectName(QStringLiteral("adminLoginpushButton_2"));
        adminLoginpushButton_2->setGeometry(QRect(260, 350, 111, 31));
        ActioncomboBox = new QComboBox(AdminPanel);
        ActioncomboBox->setObjectName(QStringLiteral("ActioncomboBox"));
        ActioncomboBox->setGeometry(QRect(360, 140, 141, 31));
        listActioncomboBox = new QComboBox(AdminPanel);
        listActioncomboBox->setObjectName(QStringLiteral("listActioncomboBox"));
        listActioncomboBox->setGeometry(QRect(170, 140, 141, 31));
        movie = new QLineEdit(AdminPanel);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setGeometry(QRect(180, 240, 113, 25));
        timing = new QLineEdit(AdminPanel);
        timing->setObjectName(QStringLiteral("timing"));
        timing->setGeometry(QRect(340, 240, 113, 25));
        code = new QLineEdit(AdminPanel);
        code->setObjectName(QStringLiteral("code"));
        code->setGeometry(QRect(180, 310, 113, 25));
        adminLoginLabel = new QLabel(AdminPanel);
        adminLoginLabel->setObjectName(QStringLiteral("adminLoginLabel"));
        adminLoginLabel->setGeometry(QRect(180, 210, 91, 21));
        adminLoginLabel_2 = new QLabel(AdminPanel);
        adminLoginLabel_2->setObjectName(QStringLiteral("adminLoginLabel_2"));
        adminLoginLabel_2->setGeometry(QRect(340, 210, 91, 21));
        adminLoginLabel_3 = new QLabel(AdminPanel);
        adminLoginLabel_3->setObjectName(QStringLiteral("adminLoginLabel_3"));
        adminLoginLabel_3->setGeometry(QRect(180, 280, 91, 21));
        adminLoginpushButton_3 = new QPushButton(AdminPanel);
        adminLoginpushButton_3->setObjectName(QStringLiteral("adminLoginpushButton_3"));
        adminLoginpushButton_3->setGeometry(QRect(560, 430, 171, 41));
        discount = new QLineEdit(AdminPanel);
        discount->setObjectName(QStringLiteral("discount"));
        discount->setGeometry(QRect(340, 310, 113, 25));
        adminLoginLabel_4 = new QLabel(AdminPanel);
        adminLoginLabel_4->setObjectName(QStringLiteral("adminLoginLabel_4"));
        adminLoginLabel_4->setGeometry(QRect(340, 280, 91, 21));
        NewcomboBox = new QComboBox(AdminPanel);
        NewcomboBox->setObjectName(QStringLiteral("NewcomboBox"));
        NewcomboBox->setGeometry(QRect(490, 270, 141, 31));

        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QWidget *AdminPanel)
    {
        AdminPanel->setWindowTitle(QApplication::translate("AdminPanel", "Form", Q_NULLPTR));
        mainlabal_2->setText(QApplication::translate("AdminPanel", "Admin Panel", Q_NULLPTR));
        adminLoginpushButton_2->setText(QApplication::translate("AdminPanel", "Action", Q_NULLPTR));
        ActioncomboBox->clear();
        ActioncomboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminPanel", "Select", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Add New", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Delete", Q_NULLPTR)
        );
        listActioncomboBox->clear();
        listActioncomboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminPanel", "Select", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Movie", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Coupon", Q_NULLPTR)
        );
        adminLoginLabel->setText(QApplication::translate("AdminPanel", "Movie", Q_NULLPTR));
        adminLoginLabel_2->setText(QApplication::translate("AdminPanel", "Timing", Q_NULLPTR));
        adminLoginLabel_3->setText(QApplication::translate("AdminPanel", "Coupon", Q_NULLPTR));
        adminLoginpushButton_3->setText(QApplication::translate("AdminPanel", "Close ", Q_NULLPTR));
        adminLoginLabel_4->setText(QApplication::translate("AdminPanel", "Discount (%)", Q_NULLPTR));
        NewcomboBox->clear();
        NewcomboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminPanel", "Select", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Movie", Q_NULLPTR)
         << QApplication::translate("AdminPanel", "Coupon", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
