#include "Devices.h"

#include <utility>
Devices::Devices(std::string location)
{
    this->location = location;
}

void Light::on() { std::cout << location << " Light is on" << std::endl; }
void Light::off() { std::cout << location << " Light is off" << std::endl; }
void Light::dim() { std::cout << location << " Light dim" << std::endl; }

void GarageDoor::up() { std::cout << "Garage Door is open" << std::endl; }
void GarageDoor::down() { std::cout << "Garage Door is close" << std::endl; }
void GarageDoor::stop() { std::cout << "Garage Door is stopped" << std::endl; }
void GarageDoor::lightOn() { std::cout << "Garage Light is on" << std::endl; }
void GarageDoor::lightOff() { std::cout << "Garage Light is off" << std::endl; }

void Stereo::on() { std::cout << location << " Stereo is on" << std::endl; }
void Stereo::off() { std::cout << location << " Stereo is off" << std::endl; }
void Stereo::setCD() { std::cout << location << " Stereo is set for CD input" << std::endl; }
void Stereo::setVolume(int volume) { std::cout << location << " Stereo Volume is set to " << volume << std::endl; }

CeilingFan::CeilingFan(std::string location) : Devices(location) { speed = OFF; };
void CeilingFan::high()
{
    std::cout << location << " Ceiling Fan is on High" << std::endl;
    speed = HIGH;
}
void CeilingFan::medium()
{
    std::cout << location << " Ceiling Fan is on Meidum" << std::endl;
    speed = MEDIUM;
}
void CeilingFan::low()
{
    std::cout << location << " Ceiling Fan is on Low" << std::endl;
    speed = LOW;
}
void CeilingFan::off()
{
    std::cout << location << " Ceiling Fan is off" << std::endl;
    speed = OFF;
}
int CeilingFan::getSpeed() { return speed; }

TV::TV(std::string location) : Devices(location) {}
void TV::on() { std::cout << location << " TV is on" << std::endl; }
void TV::off() { std::cout << location << " TV is off" << std::endl; }
void TV::setVolume(int volume) { std::cout << location << " TV set Volume at " << volume << std::endl; }
void TV::setInputChannel() { std::cout << location << " TV Channel is set for CD" << std::endl; }

Hottub::Hottub(std::string location) : Devices(location) { temp = 98; }
void Hottub::on()
{
    std::cout << "Hottub is heating to a steaming 104 degrees" << std::endl;
    temp = 104;
}
void Hottub::off()
{
    std::cout << "Hottub is cooling to 98 degrees" << std::endl;
    temp = 98;
}
void Hottub::circulate() { std::cout << "Hottub is bubbling" << std::endl; }
void Hottub::jetsOn() { std::cout << "Hottub jets is on" << std::endl; }
void Hottub::jetsOff() { std::cout << "Hottub jets is off" << std::endl; }
void Hottub::setTemperature(int temp)
{
    if (temp > this->temp)
        std::cout << "Hottub is heatting to a steaming  " << temp << "degrees" << std::endl;
    else
        std::cout << "Hottub is cooling to " << temp << "degrees" << std::endl;
    this->temp = temp;
}
int Hottub::getTemperature() { return temp; }