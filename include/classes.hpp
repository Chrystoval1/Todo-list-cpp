/******************************************************
*  Filename    : classes.hpp
*  Project     : MyToDoApp
*  Author      : Chrystoval
*  Description : hpp file for classes/structs definition
*  Created on  : 26-05-2025
******************************************************/

#ifndef CLASSES_HPP_
    #define CLASSES_HPP_

#include <vector>
#include <string>

/*
 * Structure that will contain the tasks informations
 */
typedef struct tasks_s {
    std::string owner_name;
    std::string task_name;
    std::string end_date;
    std::string start_date;
} tasks_t;

/*
 * Class that will be used to store dynamically some important informations
 * needed for the preogram to run correctly
 */
class UserInfos {
    public:
        int logged_in;
        std::string user_name;
        std::string user_input;
        std::vector<tasks_t> tasks;
};

#endif
