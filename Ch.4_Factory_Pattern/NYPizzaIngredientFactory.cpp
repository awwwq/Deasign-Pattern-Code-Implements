#include "NYPizzaIngredientFactory.h"
NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
    factoryName = "NYPizzaIngredientFactory";
}
Dough *NYPizzaIngredientFactory::creatDough()
{
    return new ThinCrustDough();
}
Sauce *NYPizzaIngredientFactory::creatSauce()
{
    return new MarinaraSauce();
}
Cheese *NYPizzaIngredientFactory::creatCheese()
{
    return new ReggianoCheese();
}
Veggies **NYPizzaIngredientFactory::creatVeggies()
{
    return new Veggies *[5] { new Garlic(), new Onion(), new Mushroom(), new RedPepper(), nullptr };
}
Pepperoni *NYPizzaIngredientFactory::creatPepperoni()
{
    return new SlicedPepperoni();
}
Clams *NYPizzaIngredientFactory::creatClam()
{
    return new FreshClams();
}