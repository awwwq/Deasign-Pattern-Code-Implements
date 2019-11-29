#include <iostream>
#include "Duck.h"

int main()
{
    MallardDuck mallard;
    FlyBehavior *nof = new FlyNoWay();
    mallard.performFly();
    mallard.performQuack();
    mallard.setFlyBehavior(nof);
    mallard.performFly();
    ModelDuck model;
    model.performFly();
    model.performQuack();

    return 0;
}