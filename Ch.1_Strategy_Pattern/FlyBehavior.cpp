#include "FlyBehavior.h"
#include <iostream>

void FlyWithWings::fly()
{
    std::cout << "I'm Flying" << std::endl;
}

void FlyNoWay::fly()
{
    std::cout << "I can't fly" << std::endl;
}
void FlyRocketPowered::fly()
{
    std::cout << "I'm fly with a rocket" << std::endl;
}