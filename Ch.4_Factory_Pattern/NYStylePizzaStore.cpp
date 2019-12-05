#include "NYStylePizzaStore.h"

NYPizzaStore::NYPizzaStore()
{
    storeName = "NYPizzaStore";
    ingredientFactory = new NYPizzaIngredientFactory();
}

Pizza *NYPizzaStore::createPizza(std::string type)
{
    Pizza *pizza = NULL;
    if (type == "cheese")
    {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }
    else if (type == "veggie")
    {
        pizza = new VeggiePizza(ingredientFactory);
        pizza->setName("New York Style Veggie Pizza");
    }
    else if (type == "clam")
    {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }
    else if (type == "pepperoni")
    {
        pizza = new PepperoniPizza(ingredientFactory);
        pizza->setName("New York Style Pepperoni Pizza");
    }
    //delete ingredientFactory;
    return pizza;
}
