#include "Subject.h"
#include <iostream>

WeatherData::WeatherData()
{
}
void WeatherData::registerObserver(Observer *o)
{
    observers.push_back(o);
}
void WeatherData::removeObserver(Observer *o)
{
    for (it = observers.begin(); it != observers.end(); it++)
    {
        if (*it == o)
        {
            observers.erase(it);
            return;
        }
    }
}
void WeatherData::notifyObservers()
{
    for (it = observers.begin(); it != observers.end(); it++)
    {
        (*it)->update(temperature, humidity, pressure);
    }
}
void WeatherData::measurementChanged()
{
    notifyObservers();
}
void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementChanged();
}