#pragma once
#include "DisplayElement.h"
#include "Subject.h"
#include "DataObject.h"
class Subject;
class Observer
{
    //Observer Interface
public:
    virtual void update(const Subject *s, const DataObject *d) = 0;
};
class CurrentConditionDisplay : public Observer, public DisplayElement
{
private:
    float temperature;
    float humidity;
    Subject *weatherData;

public:
    CurrentConditionDisplay(Subject *weatherData);
    void update(const Subject *s, const DataObject *d);
    void display();
};
class HeatIndexDisplay : public Observer, public DisplayElement
{
private:
    float heatIndex;
    Subject *weatherData;
    void computeHI(float t, float rh);

public:
    HeatIndexDisplay(Subject *weatherData);
    void update(const Subject *s, const DataObject *d);
    void display();
};
class ForecastDisplay : public Observer, public DisplayElement
{
private:
    float currentPressure = 29.92f;
    float lastPressure;
    Subject *weatherData;

public:
    ForecastDisplay(Subject *weatherData);
    void update(const Subject *s, const DataObject *d);
    void display();
};
