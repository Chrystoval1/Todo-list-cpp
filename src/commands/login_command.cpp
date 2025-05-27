/******************************************************
  Filename    : login_commmand.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file that handles the login command
  Created on  : 27-05-2025
******************************************************/

#include "todoapp.hpp"

void login_user(UserInfos *infos)
{
    std::string user_response;
    std::string temp_user_name;

    if (infos->logged_in == 1) {
        std::cout << "You are already logged in, would you like to switch to another user? [y/n]" << std::endl;
        std::getline(std::cin, user_response);
        if (user_response.compare("y") == 0)
            infos->logged_in = 0;
        else
            std::cout << "Staying logged in as " + infos->user_name << std::endl;
    }
    if (infos->logged_in == 0) {
        std::cout << "Enter your usernme : ";
        std::getline(std::cin, temp_user_name);
        infos->user_name = temp_user_name;
        infos->logged_in = 1;
    }
}
