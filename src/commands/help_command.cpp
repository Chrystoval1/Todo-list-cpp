/******************************************************
  Filename    : help_comand.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file to handle the help command
  Created on  : 26-05-2025
******************************************************/

#include "todoapp.hpp"
#include <iostream>

/*
 * Helper function to show the commands available
 */
void show_help(void)
{
    std::cout << "\n\033[1mAvailable commands:\033[0m\n\n";
    std::cout << "\n\033[1mCommands can be written in lower and upper case\033[0m\n\n";
    std::cout << "  \033[1;33mADD [task_name]\033[0m        - Add a new task\n";
    std::cout << "  \033[1;33mREMOVE [task_name]\033[0m     - Remove a task\n";
    std::cout << "  \033[1;33mLIST\033[0m                   - List all tasks\n";
    std::cout << "  \033[1;33mSHORTEST\033[0m               - Show the shortest task\n";
    std::cout << "  \033[1;33mSETUP_MAIN [task_name]\033[0m - Set a task as main task\n";
    std::cout << "  \033[1;33mMAIN_TASK\033[0m              - Show the main task\n";
    std::cout << "  \033[1;33mFIRST_ENDING\033[0m           - Show the task that ends first\n";
    std::cout << "  \033[1;33mLOGIN [user_name]\033[0m      - Login or switch user\n";
    std::cout << "  \033[1;33mHELP or ./TodoApp -h\033[0m   - Display this help message\n";
    std::cout << "\n";
}

