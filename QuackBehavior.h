#pragma once

class QuackBehavior
{
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