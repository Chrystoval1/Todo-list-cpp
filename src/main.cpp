/******************************************************
  Filename    : main.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : main file for the project
  Created on  : 23-05-2025
******************************************************/

#include "todoapp.hpp"
#include <string>

/*
 * Main function of te project
 */
int main(int ac, char **av)
{
    UserInfos infos;
    std::string help = "-h";

    if (ac > 2)
        return 1;
    if (av[1] != NULL && help.compare(av[1]) == 0) {
        show_help();
        return 0;
    }
    while (1) {
        std::cout << "TodoApp : ";
        std::getline(std::cin, infos.user_input);
        if (process_user_input(infos) == 1)
            break;
    }
}
