#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QWidget>

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

public slots:
 bool adminLogin(std::string username, std::string password);

private slots:
 void on_adminLoginpushButton_2_clicked();

private:
    Ui::AdminPanel *ui;
};

#endif // ADMINPANEL_H
