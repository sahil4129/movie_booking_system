#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "QDebug"
#include "QMessageBox"
#include "QFile"
#include "QSqlQueryModel"
#include "QSqlQuery"
#include "QSqlError"

AdminPanel::AdminPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);
    ui->NewcomboBox->hide();
    ui->timing->setDisabled(true);
    ui->movie->setDisabled(true);
    ui->code->setDisabled(true);
    ui->discount->setDisabled(true);
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

bool AdminPanel::adminLogin(std::string username, std::string password)
{
    QSqlQuery query("select * from admins");
    QString user,pass;
    if (!query.isActive()){
          qDebug() << query.lastError().text();
    }else{
        while (query.next()) {
          user= query.value(1).toString();
          pass=query.value(2).toString();
          if(username == user.toStdString() && password == pass.toStdString()){
                return true;
            }
        }
      }

    
    return false;
}

void AdminPanel::on_adminLoginpushButton_2_clicked()
{
    QString actionItem = ui->listActioncomboBox->currentText();
    QString action = ui->ActioncomboBox->currentText();

    if(actionItem =="Select" || action=="Select"){
        QMessageBox msgBox;
        msgBox.setText("Please Select Action and Action Item");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }else{

        if(action== "Add New"){
            if(actionItem == "Movie"){
                addMovieAndTiming(ui->movie->text(), ui->timing->text());
            }
            else if(actionItem == "Coupon"){
                addCoupon(ui->code->text(),ui->discount->text());
            }
            else{
                QMessageBox msgBox;
                msgBox.setText("Invalid ActionItem !!");
                msgBox.setStandardButtons(QMessageBox::Ok);
                msgBox.setDefaultButton(QMessageBox::Ok);
                msgBox.exec();
            }
        }
        else if(action =="Update"){
            QMessageBox msgBox;
            msgBox.setText("Update Coming soon");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
        else if(action =="Delete"){
            QString arg1 = ui->NewcomboBox->currentText();
            if(actionItem == "Coupon"){
                QSqlQuery query;
                query.exec("DELETE FROM discount_code WHERE code = '"+arg1+"'");
            }else if(actionItem == "Movie"){
                QSqlQuery query;
                query.exec("DELETE FROM discount_code WHERE name = '"+arg1+"'");
            }

            QMessageBox msgBox;
            msgBox.setText("Deleted !!");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
        else{
            QMessageBox msgBox;
            msgBox.setText("Invalid Action !!");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
    }
}

void AdminPanel::on_ActioncomboBox_activated(const QString &arg1)
{
    actions(ui->listActioncomboBox->currentText(),arg1);
}

void AdminPanel::on_listActioncomboBox_activated(const QString &arg1)
{
     actions(arg1,ui->ActioncomboBox->currentText());
}

void AdminPanel::actions(const QString &arg1, const QString &arg2)
{
    QString actionItem = arg1;
    QString action = arg2;
    ui->NewcomboBox->hide();

    if(action== "Add New"){
        if(actionItem == "Movie"){
            ui->timing->setDisabled(false);
            ui->movie->setDisabled(false);
            ui->code->setDisabled(true);
            ui->discount->setDisabled(true);
        }
        else if(actionItem == "Coupon"){
            ui->code->setDisabled(false);
            ui->discount->setDisabled(false);
            ui->timing->setDisabled(true);
            ui->movie->setDisabled(true);
        }
        else{
            ui->timing->setDisabled(true);
            ui->movie->setDisabled(true);
            ui->code->setDisabled(true);
            ui->discount->setDisabled(true);
        }
    }
    else  if(action== "Update" || action == "Delete"){
        ui->timing->setDisabled(true);
        ui->movie->setDisabled(true);
        ui->code->setDisabled(true);
        ui->discount->setDisabled(true);
        ui->NewcomboBox->clear();
        if(actionItem == "Movie"){
            QSqlQuery query("select name from movieName");
            if (!query.isActive()){
                  qDebug() << query.lastError().text();
            }else{
              while (query.next()) {
                    ui->NewcomboBox->addItem(query.value(0).toString());
              }
            }
        }
        else if(actionItem == "Coupon"){
                QSqlQuery query("select * from discount_code");
                if (!query.isActive()){
                      qDebug() << query.lastError().text();
                }else{
                  while (query.next()) {
                        ui->NewcomboBox->addItem(query.value(1).toString());
                  }
                }
        }
        ui->NewcomboBox->show();
    }
    else{
        ui->timing->setDisabled(true);
        ui->movie->setDisabled(true);
        ui->code->setDisabled(true);
        ui->discount->setDisabled(true);
    }
}

void AdminPanel::addMovieAndTiming(QString movie , QString timing)
{
    try {

            QSqlQuery query;
            query.prepare("INSERT INTO movieName (name) "
                          "VALUES (:name)");
            query.bindValue(":name", movie);
            query.exec();

            QSqlQuery query3("select id from movieName where name = '"+movie+"'");

            QString movieId;
            if (!query3.isActive()){
                  qDebug() << query3.lastError().text();
            }else{
                while (query3.next()) {
                  movieId= query3.value(0).toString();
                }
              }

            QSqlQuery query2;
            query2.prepare("INSERT INTO movie_timings (movie_id,timing) "
                          "VALUES (:id,:timing)");
            query2.bindValue(":id", movieId);
            query2.bindValue(":timing", timing);
            query2.exec();
         QMessageBox msgBox;
         msgBox.setText("Added !!");
         msgBox.setStandardButtons(QMessageBox::Ok);
         msgBox.setDefaultButton(QMessageBox::Ok);
         msgBox.exec();
    }
    catch (error_t) {
        QMessageBox msgBox;
        msgBox.setText("Failed !");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }

}
void AdminPanel::addCoupon(QString code, QString per)
{
    try{
          QSqlQuery query2;
          query2.prepare("INSERT INTO discount_code (code,percentage) "
                          "VALUES (:cod,:per)");
          query2.bindValue(":cod", code);
          query2.bindValue(":per", per);
          query2.exec();

          QMessageBox msgBox;
          msgBox.setText("Added !!");
          msgBox.setStandardButtons(QMessageBox::Ok);
          msgBox.setDefaultButton(QMessageBox::Ok);
          msgBox.exec();
    }catch (error_t) {
        QMessageBox msgBox;
        msgBox.setText("Failed !");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
}

void AdminPanel::on_adminLoginpushButton_3_clicked()
{
    close();
}
