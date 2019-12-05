#include <iostream>
#include "ChicagoStylePizzaStore.h"
#include "NYStylePizzaStore.h"
int main()
{
    PizzaStore *nyPizzaStore = new NYPizzaStore();
    PizzaStore *chicagoPizzaStore = new ChicagoPizzaStore();

    Pizza *pizza = nyPizzaStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << std::endl;
    delete pizza;

    pizza = chicagoPizzaStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << std::endl;
    delete pizza;

    delete nyPizzaStore;
    delete chicagoPizzaStore;
    return 0;
}