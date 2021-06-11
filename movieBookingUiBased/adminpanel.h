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

 void on_ActioncomboBox_activated(const QString &arg1);

 void actions(const QString &arg1, const QString &arg2);
 void on_listActioncomboBox_activated(const QString &arg1);

 void on_adminLoginpushButton_3_clicked();

 void addMovieAndTiming(QString movie, QString timing);
  void addCoupon(QString code,QString per);

private:
    Ui::AdminPanel *ui;
};

#endif // ADMINPANEL_H
