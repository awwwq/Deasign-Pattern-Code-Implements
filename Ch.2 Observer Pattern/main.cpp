#include <iostream>
#include "Subject.h"
#include "Observer.h"

int main()
{
    WeatherData *weatherData = new WeatherData();
    CurrentConditionDisplay *cd = new CurrentConditionDisplay(weatherData);
    HeatIndexDisplay *hd = new HeatIndexDisplay(weatherData);
    weatherData->setMeasurements(80, 65, 30.4);

    return 0;
}