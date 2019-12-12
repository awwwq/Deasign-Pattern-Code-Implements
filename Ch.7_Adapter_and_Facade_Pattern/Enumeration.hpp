#pragma once
#include <iostream>
template <typename _Tp>
class Enumeration
{
    _Tp *array;

public:
    Enumeration()
    {
        array = new _Tp();
    }
    virtual bool hasMoreElements()
    {
        std::cout << "Enumeration has More Elements" << std::endl;
    }
    virtual _Tp *nextElement()
    {
        std::cout << "Enumeration next" << std::endl;
        return array;
    };
};