
#include "ChicagoPizzaIngredientFactory.h"
ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
    factoryName = "ChicagoPizzaIngredientFactory";
}
Dough *ChicagoPizzaIngredientFactory::creatDough()
{
    return new ThickCrustDough();
}
Sauce *ChicagoPizzaIngredientFactory::creatSauce()
{
    return new PlumTomatoSauce();
}
Cheese *ChicagoPizzaIngredientFactory::creatCheese()
{
    return new MozzarellaCheese();
}
Veggies **ChicagoPizzaIngredientFactory::creatVeggies()
{
    return new Veggies *[4] { new BlackOlives(), new Spinach(), new EggPlant(), nullptr };
}
Pepperoni *ChicagoPizzaIngredientFactory::creatPepperoni()
{
    return new SlicedPepperoni();
}
Clams *ChicagoPizzaIngredientFactory::creatClam()
{
    return new FrozenClam();
}