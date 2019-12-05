#pragma once

#include "PizzaIngredientFactory.h"
class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory();
    Dough *creatDough() override;
    Sauce *creatSauce() override;
    Cheese *creatCheese() override;
    Veggies **creatVeggies() override;
    Pepperoni *creatPepperoni() override;
    Clams *creatClam() override;
};
