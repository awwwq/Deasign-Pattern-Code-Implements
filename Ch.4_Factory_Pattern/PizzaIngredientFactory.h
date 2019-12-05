#pragma once
#include "Ingredient.h"
#include <iostream>
class PizzaIngredientFactory
{
    //Interface of IngredientFactory
protected:
    std::string factoryName;

public:
    virtual Dough *creatDough() = 0;
    virtual Sauce *creatSauce() = 0;
    virtual Cheese *creatCheese() = 0;
    virtual Veggies **creatVeggies() = 0;
    virtual Pepperoni *creatPepperoni() = 0;
    virtual Clams *creatClam() = 0;
    virtual ~PizzaIngredientFactory();
};
