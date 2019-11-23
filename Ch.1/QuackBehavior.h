#pragma once

class QuackBehavior
{
    //Interface of QuackBehavior
public:
    virtual void quack() = 0;
};
class Quack : public QuackBehavior
{
public:
    void quack();
};
class MuteQuack : public QuackBehavior
{
public:
    void quack();
};
class Squack : public QuackBehavior
{
public:
    void quack();
};