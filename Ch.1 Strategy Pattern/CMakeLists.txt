cmake_minimum_required(VERSION 3.15)
project(Cplus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cplus
        Duck.cpp
        Duck.h
        FlyBehavior.cpp
        FlyBehavior.h
        main.cpp
        QuackBehavior.cpp
        QuackBehavior.h)
