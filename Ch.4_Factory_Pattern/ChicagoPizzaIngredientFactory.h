#pragma once

#include "PizzaIngredientFactory.h"
class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory();
    Dough *creatDough() override;
    Sauce *creatSauce() override;
    Cheese *creatCheese() override;
    Veggies **creatVeggies() override;
    Pepperoni *creatPepperoni() override;
    Clams *creatClam() override;
};
