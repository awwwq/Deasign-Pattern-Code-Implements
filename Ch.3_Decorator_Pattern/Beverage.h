#ifndef BEVERAGE_H 
#define BEVERAGE_H
#include <iostream>

class Beverage
{
    //Interface of Beverage
protected:
    std::string description;

public:
    virtual std::string getDescription();
    virtual double cost() = 0;
};
class Espresso : public Beverage
{
public:
    Espresso();
    double cost() override;
};
class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost() override;
};
class Decaf : public Beverage
{
public:
    Decaf();
    double cost() override;
};
class DarkRoast : public Beverage
{
public:
    DarkRoast();
    double cost() override;
};

#endif
