#pragma once
#include "DisplayElement.h"
#include "Subject.h"
class Subject;
class Observer
{
    //Observer Interface
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};
class CurrentConditionDisplay : public Observer, public DisplayElement
{
private:
    float temperature;
    float humidity;
    Subject *weatherData;

public:
    CurrentConditionDisplay(Subject *weatherData);
    void update(float temp, float humidity, float pressure);
    void display();
};
