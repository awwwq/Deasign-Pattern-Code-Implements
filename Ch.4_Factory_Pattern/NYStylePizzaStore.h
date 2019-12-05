#pragma once
#include "PizzaStore.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore : public PizzaStore
{

protected:
    Pizza *createPizza(std::string type) override;

public:
    NYPizzaStore();
};
