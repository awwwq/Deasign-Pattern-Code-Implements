/*
 * @Author: Matthian_Xu 
 * @Date: 2019-11-28 23:58:37 
 * @Last Modified by: Matthian_Xu
 * @Last Modified time: 2019-11-29 21:40:11
 */
#include <iostream>
#include "Condiments.h"
#include "Beverage.h"

int main()
{
    Beverage *beverage = new Espresso();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    Beverage *beverage1 = new DarkRoast();
    beverage1 = new Mocha(beverage1);
    beverage1 = new Mocha(beverage1);
    beverage1 = new Whip(beverage1);
    std::cout << beverage1->getDescription() << " $" << beverage1->cost() << std::endl;

    Beverage *beverage2 = new HouseBlend();
    beverage2 = new Soy(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    return 0;
}