#include <iostream>
#include "Duck.h"

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}
void Duck::swim()
{
    std::cout << "All Ducks float, even decoys" << std::endl;
}
void Duck::setFlyBehavior(FlyBehavior *fb)
{
    flyBehavior = fb;
}
void Duck::setQuackBehavior(QuackBehavior *qb)
{
    quackBehavior = qb;
}

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

ModelDuck::ModelDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyRocketPowered();
}