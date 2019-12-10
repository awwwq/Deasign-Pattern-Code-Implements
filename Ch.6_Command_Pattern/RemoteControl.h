#pragma once

#include "Command.h"
class SimpleRemoteControl
{
    Command *slot;

public:
    void setCommand(Command *command);
    void buttonWasPressed();
};

class RemoteControl
{
    friend std::ostream &operator<<(std::ostream &cout, const RemoteControl &remoteControl);

private:
    static const int slotNum = 7;
    Command *onCommands[slotNum];
    Command *offCommands[slotNum];
    Command *undoCommand;

public:
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPressed(int slot);
    void offButtonWasPressed(int slot);
    void undoButtonWasPressed();
};
std::ostream &operator<<(std::ostream &cout, const RemoteControl &remoteControl);
