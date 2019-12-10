cmake_minimum_required(VERSION 3.15)
project(Ch_6_Command_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_6_Command_Pattern
        main.cpp Command.cpp Command.h Devices.cpp Devices.h RemoteControl.cpp RemoteControl.h)
