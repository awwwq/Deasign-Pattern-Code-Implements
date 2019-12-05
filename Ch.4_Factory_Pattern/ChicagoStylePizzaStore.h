#pragma once
#include "ChicagoPizzaIngredientFactory.h"
#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
private:
protected:
    Pizza *createPizza(std::string type) override;

public:
    ChicagoPizzaStore();
};
