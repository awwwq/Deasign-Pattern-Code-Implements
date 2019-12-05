#include "PizzaStore.h"

#include <utility>

Pizza *PizzaStore::orderPizza(std::string type)
{
    Pizza *pizza = createPizza(std::move(type));
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
PizzaStore::PizzaStore()
{
    std::cout << "PizzaStore Created" << std::endl;
}
PizzaStore::~PizzaStore()
{
    std::cout << storeName << " deleted" << std::endl;
    delete ingredientFactory;
}