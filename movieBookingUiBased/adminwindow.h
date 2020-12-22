#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "string"

class adminWindow
{
public:
    adminWindow();
    bool adminLogin(std::string username,std::string password);
};

#endif // ADMINWINDOW_H
