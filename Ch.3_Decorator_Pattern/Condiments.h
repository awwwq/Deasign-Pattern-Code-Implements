#ifndef CONDIMENTS_H
#define CONDIMENTS_H
#include "Beverage.h"

class Condiments : public Beverage
{
    //Interface of Decorator
public:
    virtual std::string getDescription() = 0;
};
class Mocha : public Condiments
{
private:
    Beverage *beverage;

public:
    Mocha(Beverage *beverage);
    std::string getDescription();
    double cost();
};
class Soy : public Condiments
{
private:
    Beverage *beverage;

public:
    Soy(Beverage *beverage);
    std::string getDescription();
    double cost();
};
class Whip : public Condiments
{
private:
    Beverage *beverage;

public:
    Whip(Beverage *beverage);
    std::string getDescription();
    double cost();
};
class SteamedMilk : public Condiments
{
private:
    Beverage *beverage;

public:
    SteamedMilk(Beverage *beverage);
    std::string getDescription();
    double cost();
};

#endif
