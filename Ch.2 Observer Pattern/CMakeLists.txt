cmake_minimum_required(VERSION 3.15)
project(Ch_2_Observer_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_2_Observer_Pattern
        DisplayElement.cpp
        DisplayElement.h

        Observer.cpp
        Observer.h
        Subject.cpp
        Subject.h
        main.cpp)
