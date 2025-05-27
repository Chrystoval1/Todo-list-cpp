/******************************************************
  Filename    : shell.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file that handles the shell commands
  Created on  : 23-05-2025
******************************************************/

#include "todoapp.hpp"

/*
 * Function to handle the command execution
 */
int execute_command(UserInfos *infos, std::string command)
{
    if (command.compare("LOGIN") == 0 || command.compare("login") == 0) {
        login_user(infos);
        return 0;
    }
    if (command.compare("HELP") == 0 || command.compare("help") == 0) {
        show_help();
        return 0;
    }
    if (infos->logged_in == 0) {
        std::cout << "You are not logged in please login to an existing user or create a new one" << std::endl;
        return 0;
    }
    if (command.compare("ADD") == 0 || command.compare("add") == 0) {
        add_task(infos);
        return 0;
    }
    if (command.compare("LIST") == 0 || command.compare("list") == 0) {
        list_tasks(infos);
        return 0;
    }
    std::cout << "Invalid command" << std::endl;
    return 0;
}

/*
 * Function to handle the general user input
 */
int process_user_input(UserInfos *infos)
{
    std::string command;
    std::istringstream iss(infos->user_input);

    if (infos->user_input.compare("EXIT") == 0 || infos->user_input.compare("exit") == 0) {
        std::cout << "exitting program" << std::endl;
        return 1;
    }
    iss >> command;
    execute_command(infos, command);
    return 0;
}
