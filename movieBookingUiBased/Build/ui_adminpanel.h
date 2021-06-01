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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QLabel *mainlabal_2;
    QPushButton *adminLoginpushButton_2;

    void setupUi(QWidget *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName(QStringLiteral("AdminPanel"));
        AdminPanel->resize(649, 419);
        mainlabal_2 = new QLabel(AdminPanel);
        mainlabal_2->setObjectName(QStringLiteral("mainlabal_2"));
        mainlabal_2->setGeometry(QRect(210, 10, 171, 61));
        mainlabal_2->setStyleSheet(QStringLiteral("font: 75 19pt \"Serif\";"));
        adminLoginpushButton_2 = new QPushButton(AdminPanel);
        adminLoginpushButton_2->setObjectName(QStringLiteral("adminLoginpushButton_2"));
        adminLoginpushButton_2->setGeometry(QRect(230, 330, 171, 61));

        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QWidget *AdminPanel)
    {
        AdminPanel->setWindowTitle(QApplication::translate("AdminPanel", "Form", Q_NULLPTR));
        mainlabal_2->setText(QApplication::translate("AdminPanel", "Admin Panel", Q_NULLPTR));
        adminLoginpushButton_2->setText(QApplication::translate("AdminPanel", "Close ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
