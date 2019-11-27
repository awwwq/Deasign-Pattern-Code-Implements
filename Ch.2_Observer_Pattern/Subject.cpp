#include "Subject.h"
#include <iostream>

std::string Subject::name()
{
    return "Subject";
}
void Subject::registerObserver(Observer *o)
{
    observers.push_back(o);
}

void Subject::removeObserver(Observer *o)
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
void Subject::notifyObservers()
{
    notifyObservers(nullptr);
}
void Subject::notifyObservers(DataObject *d)
{
    if (changed)
    {
        for (it = observers.begin(); it != observers.end(); it++)
        {
            (*it)->update(this, d);
        }
        changed = false;
    }
}
void Subject::setChanged()
{
    changed = true;
}
void Subject::clearChanged()
{
    changed = false;
}
bool Subject::hasChanged()
{
    return this->changed;
}

void WeatherData::measurementChanged()
{
    setChanged();
    notifyObservers();
}
void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementChanged();
}
float WeatherData::getHumidity()
{
    return this->humidity;
}
float WeatherData::getPressure()
{
    return this->pressure;
}
float WeatherData::getTemperature()
{
    return this->temperature;
}
std::string WeatherData::name()
{
    return "WeatherData";
}