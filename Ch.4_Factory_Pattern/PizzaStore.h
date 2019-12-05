#pragma once
#include "Pizza.h"
#include <iostream>
class PizzaStore
{
    //Interface of Pizza Store
    //You need to SubClass is and implement the creatPizza method
protected:
    std::string storeName;
    PizzaIngredientFactory *ingredientFactory;
    virtual Pizza *createPizza(std::string type) = 0;

public:
    virtual Pizza *orderPizza(std::string type);
    PizzaStore();
    virtual ~PizzaStore();
};