#include "QuackBehavior.h"
#include <iostream>

void Quack::quack()
{
    std::cout << "Quack" << std::endl;
}

void MuteQuack::quack()
{
    std::cout << "Slience" << std::endl;
}

void Squack::quack()
{
    std::cout << "Squack" << std::endl;
}
