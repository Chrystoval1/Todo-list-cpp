/******************************************************
  Filename    : Makefile
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : Makefile for the project
  Created on  : 23-05-2025
******************************************************/

#include "todoapp.hpp"

int main(int ac, char **av)
{
    UserInfos infos;

    if (ac > 2)
        return 1;
    while (1) {
        std::cout << "TodoApp : ";
        std::getline(std::cin, infos.user_input);
        if (process_user_input(infos) == 1)
            break;
    }
}
