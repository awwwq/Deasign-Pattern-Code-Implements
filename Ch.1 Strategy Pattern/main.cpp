#include <iostream>
#include "Duck.h"

int main()
{
    MallardDuck mallard;
    mallard.performFly();
    mallard.performQuack();
    ModelDuck model;
    model.performFly();
    model.performQuack();

    return 0;
}