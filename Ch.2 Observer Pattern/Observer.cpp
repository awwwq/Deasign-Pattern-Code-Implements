#include "Observer.h"
#include <iostream>
CurrentConditionDisplay::CurrentConditionDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}
void CurrentConditionDisplay::update(float temp, float humidity, float pressure)
{
    this->humidity = humidity;
    this->temperature = temp;
    display();
}
void CurrentConditionDisplay::display()
{
    std::cout << "Current condition: " << temperature << "F degree and " << humidity << "% humidity" << std::endl;
}