#include "adminpanel.h"
#include "ui_adminpanel.h"

AdminPanel::AdminPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

bool AdminPanel::adminLogin(std::string username, std::string password)
{
    if(username == "admin" && password =="admin"){
        return true;
    }
    return false;
}

void AdminPanel::on_adminLoginpushButton_2_clicked()
{
    close();
}
