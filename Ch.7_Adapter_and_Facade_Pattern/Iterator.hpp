#pragma once
#include <iostream>
template <typename _Tp>
class Iterator
{
    _Tp *array;

public:
    Iterator()
    {
        array = new _Tp();
    }
    virtual bool hasNext()
    {
        std::cout << "Iterator has More Elements" << std::endl;
    }
    virtual _Tp *next()
    {
        std::cout << "Iterator next" << std::endl;
        return array;
    };
    virtual void remove()
    {
        std::cout << "Iterator remove" << std::endl;
    }
};