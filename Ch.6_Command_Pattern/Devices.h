#pragma once

#include <iostream>
class Devices
{
protected:
    std::string location;

public:
    Devices(std::string location);
};

class Light : public Devices
{

public:
    Light(std::string location) : Devices(location){};
    void on();
    void off();
    void dim();
};
class GarageDoor : public Devices
{

public:
    GarageDoor(std::string location) : Devices(location){};
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();
};
class Stereo : public Devices
{
public:
    Stereo(std::string location) : Devices(location){};
    void on();
    void off();
    void setCD();
    void setVolume(int volume);
};
class CeilingFan : public Devices
{
    int speed;

public:
    const static int HIGH = 3;
    const static int MEDIUM = 2;
    const static int LOW = 1;
    const static int OFF = 0;
    CeilingFan(std::string location);
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();
};

class TV : public Devices
{
public:
    TV(std::string location);
    void on();
    void off();
    void setInputChannel();
    void setVolume(int volume);
};
class Hottub : public Devices
{
private:
    int temp;

public:
    Hottub(std::string location);
    void on();
    void off();
    void circulate();
    void jetsOn();
    void jetsOff();
    void setTemperature(int temp);
    int getTemperature();
};
