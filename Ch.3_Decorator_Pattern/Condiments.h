#ifndef CONDIMENTS_H
#define CONDIMENTS_H
#include "Beverage.h"

class Condiments : public Beverage
{
    //Interface of Decorator
public:
    std::string getDescription() override = 0;
};
class Mocha : public Condiments
{
private:
    Beverage *beverage;

public:
    Mocha(Beverage *beverage);
    std::string getDescription() override;
    double cost() override;
};
class Soy : public Condiments
{
private:
    Beverage *beverage;

public:
    Soy(Beverage *beverage);
    std::string getDescription() override;
    double cost() override;
};
class Whip : public Condiments
{
private:
    Beverage *beverage;

public:
    Whip(Beverage *beverage);
    std::string getDescription() override;
    double cost() override;
};
class SteamedMilk : public Condiments
{
private:
    Beverage *beverage;

public:
    SteamedMilk(Beverage *beverage);
    std::string getDescription() override;
    double cost() override;
};

#endif
