#pragma once

class FlyBehavior
{
    //Interface of FlyBehavior
public:
    virtual void fly() = 0;
};
class FlyWithWings : public FlyBehavior
{
public:
    void fly();
};
class FlyNoWay : public FlyBehavior
{
public:
    void fly();
};
class FlyRocketPowered : public FlyBehavior
{
public:
    void fly();
};