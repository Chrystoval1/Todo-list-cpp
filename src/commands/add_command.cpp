/******************************************************
  Filename    : add_comand.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file to handle the add command
  Created on  : 26-05-2025
******************************************************/

#include "classes.hpp"
#include "todoapp.hpp"
#include <iostream>
#include <sstream>
#include <string>

/*
 * This functions aims to add a new task with every information needed
 */
void add_task(UserInfos infos)
{
    std::istringstream iss(infos.user_input);
    std::string task_name;
    tasks_t new_task;

    iss.ignore(infos.user_input.find(' ') + 1);
    iss >> task_name;
    new_task.task_name = task_name;
    infos.tasks.push_back(new_task);
    std::cout << "added " + new_task.task_name << std::endl;
}
