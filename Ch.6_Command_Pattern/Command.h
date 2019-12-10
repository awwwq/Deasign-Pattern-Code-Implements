#pragma once

#include "Devices.h"
class Command
{
public:
    //virtual void operator()() = 0;
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual std::string getName() = 0;
};
class NoCommand : public Command
{
public:
    void undo();
    void execute() override;
    std::string getName() override;
};

class LightOnCommand : public Command
{
    Light *light;

public:
    void undo();
    explicit LightOnCommand(Light *light);
    void execute() override;
    std::string getName() override;
};
class LightOffCommand : public Command
{
    Light *light;

public:
    void undo();
    explicit LightOffCommand(Light *light);
    void execute() override;
    std::string getName() override;
};

class GarageDoorOpenCommand : public Command
{
    GarageDoor *garageDoor;

public:
    void undo();
    explicit GarageDoorOpenCommand(GarageDoor *garageDoor);
    void execute() override;
    std::string getName() override;
};
class GarageDoorDownCommand : public Command
{
    GarageDoor *garageDoor;

public:
    void undo();
    explicit GarageDoorDownCommand(GarageDoor *garageDoor);
    void execute() override;
    std::string getName() override;
};

class StereoOnWithCDCommand : public Command
{
    Stereo *stereo;

public:
    void undo();
    explicit StereoOnWithCDCommand(Stereo *s);
    void execute() override;
    std::string getName() override;
};
class StereoOffCommand : public Command
{
    Stereo *stereo;

public:
    void undo();
    explicit StereoOffCommand(Stereo *s);
    void execute() override;
    std::string getName() override;
};

class CeilingFanCommand : public Command
{
protected:
    CeilingFan *ceilingFan;
    int preSpeed;

public:
    virtual void undo();
    explicit CeilingFanCommand(CeilingFan *cf);
    virtual void execute(){};
    virtual std::string getName(){};
};
class CeilingFanHighCommand : public CeilingFanCommand
{
public:
    CeilingFanHighCommand(CeilingFan *cf) : CeilingFanCommand(cf){};
    void execute() override;
    std::string getName() override;
};
class CeilingFanMediumCommand : public CeilingFanCommand
{
public:
    CeilingFanMediumCommand(CeilingFan *cf) : CeilingFanCommand(cf){};
    void execute() override;
    std::string getName() override;
};
class CeilingFanLowCommand : public CeilingFanCommand
{
public:
    CeilingFanLowCommand(CeilingFan *cf) : CeilingFanCommand(cf){};
    void execute() override;
    std::string getName() override;
};
class CeilingFanOffCommand : public CeilingFanCommand
{
public:
    CeilingFanOffCommand(CeilingFan *cf) : CeilingFanCommand(cf){};
    void execute() override;
    std::string getName() override;
};
class TVOnCommand : public Command
{
private:
    TV *tv;

public:
    explicit TVOnCommand(TV *tv);
    void undo();
    void execute() override;
    std::string getName() override;
};
class TVOffCommand : public Command
{
private:
    TV *tv;

public:
    explicit TVOffCommand(TV *tv);
    void undo();
    void execute() override;
    std::string getName() override;
};
class HottubOnCommand : public Command
{
private:
    Hottub *hottub;

public:
    explicit HottubOnCommand(Hottub *hottub);
    void undo();
    void execute() override;
    std::string getName() override;
};
class HottubOffCommand : public Command
{
private:
    Hottub *hottub;

public:
    explicit HottubOffCommand(Hottub *hottub);
    void undo();
    void execute() override;
    std::string getName() override;
};

class MacroCommand : public Command
{
private:
    Command **commands; //array of commands;
public:
    MacroCommand(Command **commands);
    void execute() override;
    std::string getName() override;
    void undo();
};
