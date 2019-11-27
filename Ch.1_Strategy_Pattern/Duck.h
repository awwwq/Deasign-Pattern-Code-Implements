#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

public:
    void performFly();
    void performQuack();
    void swim();
    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *qb);
};

class MallardDuck : public Duck
{
public:
    MallardDuck();
};

class ModelDuck : public Duck
{
public:
    ModelDuck();
};