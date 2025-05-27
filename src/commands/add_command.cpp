/******************************************************
  Filename    : add_comand.cpp
  Project     : MyToDoApp
  Author      : Chrystoval
  Description : file to handle the add command
  Created on  : 26-05-2025
******************************************************/

#include "todoapp.hpp"

/*
 * Function to check if the given string respects the date format
 */
bool check_date(std::string date)
{
    std::regex pattern(R"(^\d{2}-\d{2}-\d{4}$)");
    return std::regex_match(date, pattern);
}

/*
 * This functions aims to add a new task with every information needed
 */
void add_task(UserInfos *infos)
{
    std::istringstream iss(infos->user_input);
    std::string task_name;
    std::string start_date;
    std::string end_date;
    tasks_t new_task;

    iss.ignore(infos->user_input.find(' ') + 1);
    iss >> task_name;
    while (task_name.compare("add") == 0 || task_name.compare("ADD") == 0 || task_name.compare("\0") == 0) {
        std::cout << "Please enter a task name : ";
        std::getline(std::cin, task_name);
    }
    new_task.task_name = task_name;
    std::cout << "Creating " + new_task.task_name << std::endl;
    while (!check_date(start_date)) {
        std::cout << "Start date of the task: ";
        std::getline(std::cin, start_date);
        if (!check_date(start_date))
            std::cout << "Please enter a valid date format DD-MM-YYYY" << std::endl;
    }
    new_task.start_date = start_date;
    while (!check_date(end_date)) {
        std::cout << "End date of the task: ";
        std::getline(std::cin, end_date);
        if (!check_date(end_date))
            std::cout << "Please enter a valid date format DD-MM-YYYY" << std::endl;
    }
    new_task.end_date = end_date;
    new_task.owner_name = infos->user_name;
    infos->tasks.push_back(new_task);
    std::cout << "Task " + task_name + " created successfully" << std::endl;
}
