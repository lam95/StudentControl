cmake_minimum_required(VERSION 3.7)
project(main)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.cpp Student.h Menu.cpp Menu.h Action.cpp Action.h)
add_executable(main ${SOURCE_FILES})