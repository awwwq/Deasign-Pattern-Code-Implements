cmake_minimum_required(VERSION 3.15)
project(Ch_7_Adapter_and_Facade_Pattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ch_7_Adapter_and_Facade_Pattern
        Duck.cpp
        Duck.h
        Enumeration.hpp
        EnumerationIterator.hpp
        Iterator.hpp
        main.cpp
        Turkey.cpp
        Turkey.h
        TurkeyAdapter.cpp
        TurkeyAdapter.h)
