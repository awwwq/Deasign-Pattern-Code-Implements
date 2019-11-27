#include <iostream>
#include "Subject.h"
#include "Observer.h"

int main()
{
    WeatherData *weatherData = new WeatherData();
    ForecastDisplay *fd = new ForecastDisplay(weatherData);
    CurrentConditionDisplay *cd = new CurrentConditionDisplay(weatherData);
    HeatIndexDisplay *hd = new HeatIndexDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(82, 70, 29.2);
    weatherData->setMeasurements(78, 90, 29.2);

    return 0;
}