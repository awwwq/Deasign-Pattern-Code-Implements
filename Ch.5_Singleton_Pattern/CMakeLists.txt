cmake_minimum_required(VERSION 3.15)
project(Ch_5_Singleton_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_5_Singleton_Pattern
        main.cpp ChocolateBoiler.cpp ChocolateBoiler.h)
