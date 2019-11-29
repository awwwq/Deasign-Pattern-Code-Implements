#include "Beverage.h"

std::string Beverage::getDescription() {
    return description;
}
Espresso::Espresso()
{
    description = "Espresso";
}
double Espresso::cost()
{
    return 1.99;
}
HouseBlend::HouseBlend(){
    description = "House Blend Coffee";
}
double HouseBlend::cost() {
    return 0.89;
}
Decaf::Decaf(){
    description = "Decaf";
}
double Decaf::cost() {
    return 1.05;
}
DarkRoast::DarkRoast(){
    description = "Dark Roast Coffee";
}
double DarkRoast::cost() {
    return 0.99;
}