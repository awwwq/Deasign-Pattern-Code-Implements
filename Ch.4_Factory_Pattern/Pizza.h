#pragma once

#include <iostream>
#include <list>
#include "Ingredient.h"
#include "PizzaIngredientFactory.h"
class Pizza
{
    //Interface of Pizza, You must SubClass it, and initialize name, dough and sauce
    //Methods have Default implements
protected:
    std::string name;
    Dough *dough = NULL;
    Sauce *sauce = NULL;
    Veggies **veggies = NULL;
    Cheese *cheese = NULL;
    Pepperoni *pepperoni = NULL;
    Clams *clam = NULL;
    PizzaIngredientFactory *pizzaIngredientFactory;

    std::list<std::string> toppings;
    std::list<std::string>::iterator it;

public:
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual void setName(std::string name);
    virtual std::string getName();
    virtual ~Pizza();
};

class CheesePizza : public Pizza
{

public:
    void prepare();
    CheesePizza(PizzaIngredientFactory *pizzaIngredientFactory1);
};

class ClamPizza : public Pizza
{

public:
    void prepare();
    ClamPizza(PizzaIngredientFactory *pizzaIngredientFactory1);
};
class VeggiePizza : public Pizza
{

public:
    void prepare();
    VeggiePizza(PizzaIngredientFactory *pizzaIngredientFactory1);
};
class PepperoniPizza : public Pizza
{

public:
    void prepare();
    PepperoniPizza(PizzaIngredientFactory *pizzaIngredientFactory1);
};
