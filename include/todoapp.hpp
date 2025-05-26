/******************************************************
*  Filename    : todoapp.hpp
*  Project     : MyToDoApp
*  Author      : Chrystoval
*  Description : hpp file for function definition
*  Created on  : 23-05-2025
******************************************************/

#ifndef TODOAPP_HPP_
    #define TODOAPP_HPP_

#include <iostream>
#include <string>
#include <string>
#include "classes.hpp"

/*
 * Core functions
 */
int process_user_input(UserInfos infos);

/*
 * Command handling funtions
 */
void add_task(UserInfos infos);
void show_help(void);

#endif
