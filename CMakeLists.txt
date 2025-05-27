#******************************************************
#  Filename    : CMakeLists.txt
#  Project     : MyToDoApp
#  Author      : Chrystoval
#  Description : File for cmake
#  Created on  : 27-05-2025
#*****************************************************/

cmake_minimum_required(VERSION 3.10)

# Project and version
project(TodoApp VERSION 1.0.0 LANGUAGES CXX)

# Compilation options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Addition of the include/ folder for headers
include_directories(include)

# Research automatically the .cpp in src/
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

# Creation of the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Compilation options
target_compile_options(${PROJECT_NAME} PRIVATE -pedantic -g)
