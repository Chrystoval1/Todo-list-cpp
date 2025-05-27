/******************************************************
  Filename    : list_comand.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file to handle the list command
  Created on  : 27-05-2025
******************************************************/

#include "todoapp.hpp"

/*
 * Function that will tell the user every tasks with their staring and ending date
 * TO DO : make a better showing of the tasks, maybe in a grid or smthng
 */
void list_tasks(UserInfos *infos)
{
    for (int i = 0; i < infos->tasks.size(); i++) {
        std::cout << "The task " + infos->tasks[i].task_name + " created by " + infos->tasks[i].owner_name;
        std::cout << " starts the " + infos->tasks[i].start_date + " and ends the " + infos->tasks[i].end_date << std::endl;
    }
    if (infos->tasks.size() == 0)
        std::cout << "No tasks" << std::endl;
}
