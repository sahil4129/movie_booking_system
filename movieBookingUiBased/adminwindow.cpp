#include "adminwindow.h"

adminWindow::adminWindow()
{

}

bool adminWindow::adminLogin(std::string username, std::string password)
{

    if(username == "admin" && password =="admin"){
        return true;
    }
    return false;
}
