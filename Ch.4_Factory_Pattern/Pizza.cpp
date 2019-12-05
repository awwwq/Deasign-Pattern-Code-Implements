#include "Pizza.h"

void Pizza::prepare()
{
}
void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}
void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}
void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

std::string Pizza::getName()
{
    return name;
}
void Pizza::setName(std::string name)
{
    this->name = name;
}

Pizza::~Pizza()
{
    delete dough;
    delete sauce;
    delete cheese;
    delete pepperoni;
    delete clam;
    if (veggies != NULL)
    {
        int i = 0;
        while (*(veggies + i) != NULL)
        {
            delete (veggies + i);
        }
        delete[] veggies;
    }
    std::cout << name << " been had" << std::endl;
}

void CheesePizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    dough = pizzaIngredientFactory->creatDough();
    sauce = pizzaIngredientFactory->creatSauce();
    cheese = pizzaIngredientFactory->creatCheese();
}
CheesePizza::CheesePizza(PizzaIngredientFactory *pizzaIngredientFactory1)
{
    this->pizzaIngredientFactory = pizzaIngredientFactory1;
}

void ClamPizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    dough = pizzaIngredientFactory->creatDough();
    sauce = pizzaIngredientFactory->creatSauce();
    cheese = pizzaIngredientFactory->creatCheese();
    clam = pizzaIngredientFactory->creatClam();
}
ClamPizza::ClamPizza(PizzaIngredientFactory *pizzaIngredientFactory1)
{
    this->pizzaIngredientFactory = pizzaIngredientFactory1;
}
void VeggiePizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    dough = pizzaIngredientFactory->creatDough();
    sauce = pizzaIngredientFactory->creatSauce();
    cheese = pizzaIngredientFactory->creatCheese();
}
VeggiePizza::VeggiePizza(PizzaIngredientFactory *pizzaIngredientFactory1)
{
    this->pizzaIngredientFactory = pizzaIngredientFactory1;
}
void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    dough = pizzaIngredientFactory->creatDough();
    sauce = pizzaIngredientFactory->creatSauce();
    cheese = pizzaIngredientFactory->creatCheese();
}
PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *pizzaIngredientFactory1)
{
    this->pizzaIngredientFactory = pizzaIngredientFactory1;
}