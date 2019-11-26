#pragma once
#include "Observer.h"
#include <vector>
class Observer;
class Subject
{
    //Subject Interface
public:
    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifyObservers() = 0;
};

class WeatherData : public Subject
{
private:
    std::vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
    std::vector<Observer *>::iterator it;

public:
    WeatherData();
    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObservers();
    void measurementChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};