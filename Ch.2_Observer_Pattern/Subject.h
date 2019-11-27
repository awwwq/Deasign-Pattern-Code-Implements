#pragma once
#include "Observer.h"
#include "DataObject.h"
#include <vector>
class Observer;
class Subject
{
    //Subject Interface
private:
    bool changed = false;
    std::vector<Observer *> observers;
    std::vector<Observer *>::iterator it;

public:
    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObservers();
    void notifyObservers(DataObject *d);
    bool hasChanged();
    virtual std::string name();

protected:
    void setChanged();
    void clearChanged();
};

class WeatherData : public Subject
{
private:
    float temperature;
    float humidity;
    float pressure;

public:
    void measurementChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
    float getTemperature();
    float getPressure();
    float getHumidity();
    std::string name() override;
};