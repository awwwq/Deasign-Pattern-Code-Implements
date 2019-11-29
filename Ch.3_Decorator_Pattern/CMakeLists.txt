cmake_minimum_required(VERSION 3.15)
project(Ch_3_Decorator_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_3_Decorator_Pattern
        Beverage.cpp
        Beverage.h
        Condiments.cpp
        Condiments.h
        main.cpp)
