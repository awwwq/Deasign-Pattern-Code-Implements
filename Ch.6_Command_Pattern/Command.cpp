#include "Command.h"
void NoCommand::execute() {}
void NoCommand::undo() {}
std::string NoCommand::getName() { return "NoCommand"; }
LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
}
void LightOnCommand::execute()
{
    light->on();
}
void LightOnCommand::undo()
{
    light->off();
}
std::string LightOnCommand::getName() { return "LightOnCommand"; }
LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
}
void LightOffCommand::execute()
{
    light->off();
}
void LightOffCommand::undo()
{
    light->on();
}
std::string LightOffCommand::getName() { return "LightOffCommand"; }

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}
void GarageDoorOpenCommand::execute()
{
    garageDoor->up();
}
void GarageDoorOpenCommand::undo()
{
    garageDoor->down();
}
std::string GarageDoorOpenCommand::getName() { return "GarageDoorOpenCommand"; }
GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}
void GarageDoorDownCommand::execute()
{
    garageDoor->down();
}
void GarageDoorDownCommand::undo()
{
    garageDoor->up();
}
std::string GarageDoorDownCommand::getName() { return "GarageDoorDownCommand"; }

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *s)
{
    this->stereo = s;
}
void StereoOnWithCDCommand::execute()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}
void StereoOnWithCDCommand::undo()
{
    stereo->off();
}
std::string StereoOnWithCDCommand::getName() { return "StereoOnWithCDCommand"; }
StereoOffCommand::StereoOffCommand(Stereo *s)
{
    this->stereo = s;
}
void StereoOffCommand::execute()
{
    stereo->off();
}
void StereoOffCommand::undo()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}
std::string StereoOffCommand::getName() { return "StereoOffCommand"; }

CeilingFanCommand::CeilingFanCommand(CeilingFan *cf)
{
    this->ceilingFan = cf;
}
void CeilingFanCommand::undo()
{
    switch (preSpeed)
    {
    case 1:
        ceilingFan->low();
        break;
    case 2:
        ceilingFan->medium();
        break;
    case 3:
        ceilingFan->high();
        break;
    default:
        ceilingFan->off();
        break;
    }
}
void CeilingFanHighCommand::execute()
{
    preSpeed = ceilingFan->getSpeed();
    ceilingFan->high();
}
std::string CeilingFanHighCommand::getName() { return "CeilingFanHighCommand"; }
void CeilingFanMediumCommand::execute()
{
    preSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
}
std::string CeilingFanMediumCommand::getName() { return "CeilingFanMediumCommand"; }
void CeilingFanLowCommand::execute()
{
    preSpeed = ceilingFan->getSpeed();
    ceilingFan->low();
}
std::string CeilingFanLowCommand::getName() { return "CeilingFanLowCommand"; }
void CeilingFanOffCommand::execute()
{
    preSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
}
std::string CeilingFanOffCommand::getName() { return "CeilingFanOffCommand"; }

TVOnCommand::TVOnCommand(TV *tv) { this->tv = tv; }
std::string TVOnCommand::getName() { return "TVOnCommand"; }
void TVOnCommand::execute()
{
    tv->on();
    tv->setInputChannel();
}
void TVOnCommand::undo() { tv->off(); }
TVOffCommand::TVOffCommand(TV *tv) { this->tv = tv; }
std::string TVOffCommand::getName() { return "TVOffCommand"; }
void TVOffCommand::execute() { tv->off(); }
void TVOffCommand::undo()
{
    tv->on();
    tv->setInputChannel();
}
HottubOnCommand::HottubOnCommand(Hottub *hottub) { this->hottub = hottub; }
std::string HottubOnCommand::getName() { return "HottubOnCommand"; }
void HottubOnCommand::execute()
{
    hottub->on();
    hottub->circulate();
}
void HottubOnCommand::undo() { hottub->off(); }
HottubOffCommand::HottubOffCommand(Hottub *hottub) { this->hottub = hottub; }
std::string HottubOffCommand::getName() { return "HottubOffCommand"; }
void HottubOffCommand::execute()
{
    hottub->off();
}
void HottubOffCommand::undo()
{
    hottub->on();
    hottub->circulate();
}

MacroCommand::MacroCommand(Command **commands)
{
    this->commands = commands;
}
void MacroCommand::execute()
{
    int i = 0;
    while (commands[i] != nullptr)
    {
        commands[i]->execute();
        i++;
    }
}
std::string MacroCommand::getName()
{
    return "MacroCommand";
}
void MacroCommand::undo()
{
    int i = 0;
    while (commands[i] != nullptr)
    {
        commands[i]->undo();
        i++;
    }
}