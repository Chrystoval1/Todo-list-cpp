/******************************************************
  Filename    : shell.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file that handles the shell commands
  Created on  : 23-05-2025
******************************************************/

#include "classes.hpp"
#include "todoapp.hpp"
#include <iostream>
#include <string>
#include <sstream>

/*
 * Function to handle the command execution
 */
int execute_command(UserInfos infos, std::string command)
{
    if (command.compare("ADD") == 0 || command.compare("add") == 0)
        add_task(infos);
    else if (command.compare("HELP") == 0 || command.compare("HELP") == 0)
        show_help();
    else
        std::cout << "Invalid command" << std::endl;
    return 0;
}

/*
 * Function to handle the general user input
 */
int process_user_input(UserInfos infos)
{
    std::string command;
    std::istringstream iss(infos.user_input);

    if (infos.user_input.compare("EXIT") == 0 || infos.user_input.compare("exit") == 0) {
        std::cout << "exitting program" << std::endl;
        return 1;
    }
    iss >> command;
    execute_command(infos, command);
    return 0;
}
