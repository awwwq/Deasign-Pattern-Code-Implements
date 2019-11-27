#include "Observer.h"
#include <iostream>
CurrentConditionDisplay::CurrentConditionDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}
void CurrentConditionDisplay::update(Subject *s, DataObject *d)
{
    //Pull Data, do not use the *d, it's null;
    if (typeid(*s).name() == typeid(WeatherData).name())
    {
        WeatherData *wd = (WeatherData *)s;
        this->humidity = wd->getHumidity();
        this->temperature = wd->getTemperature();
        display();
    }
}
void CurrentConditionDisplay::display()
{
    std::cout << "Current condition: " << temperature << "F degree and " << humidity << "% humidity" << std::endl;
}

HeatIndexDisplay::HeatIndexDisplay(Subject *weatherData)
{
    heatIndex = 0;
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}
void HeatIndexDisplay::update(Subject *s, DataObject *d)
{
    //Pull Data, do not use the *d, it's null;
    if (typeid(*s) == typeid(WeatherData))
    {
        WeatherData *wd = (WeatherData *)s;
        computeHI(wd->getTemperature(), wd->getHumidity());
        display();
    }
}
void HeatIndexDisplay::computeHI(float t, float rh)
{
    heatIndex = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) +
                         (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) +
                         (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                         (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
                         (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                         0.000000000843296 * (t * t * rh * rh * rh)) -
                        (0.0000000000481975 * (t * t * t * rh * rh * rh)));
}
void HeatIndexDisplay::display()
{
    std::cout << "Heat Index is " << heatIndex << std::endl;
}

ForecastDisplay::ForecastDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}
void ForecastDisplay::update(Subject *s, DataObject *d)
{
    //Pull Data, do not use the *d, it's null;
    if (typeid(*s) == typeid(WeatherData))
    {
        WeatherData *wd = (WeatherData *)s;
        lastPressure = currentPressure;
        currentPressure = wd->getPressure();
        display();
    }
}
void ForecastDisplay::display()
{
    std::cout << "Forecast: ";
    if (lastPressure > currentPressure)
    {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }
    else if (lastPressure == currentPressure)
    {
        std::cout << "More of the same" << std::endl;
    }
    else
    {
        std::cout << "Improving weather on the way" << std::endl;
    }
}