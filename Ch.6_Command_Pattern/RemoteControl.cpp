//
// Created by 许明旺 on 2019/12/8.
//

#include "RemoteControl.h"
void SimpleRemoteControl::setCommand(Command *command)
{
    slot = command;
}
void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}

std::ostream &operator<<(std::ostream &cout, const RemoteControl &remoteControl)
{
    cout << std::endl
         << "------ Remote Control ------" << std::endl;
    for (int i = 0; i < RemoteControl::slotNum; i++)
    {
        cout << "[slot " << i << "] ";
        cout.width(30);
        cout << std::left << remoteControl.onCommands[i]->getName() << remoteControl.offCommands[i]->getName() << std::endl;
    }
    cout << "[undo] " << remoteControl.undoCommand->getName() << std::endl;
    return cout;
}

RemoteControl::RemoteControl()
{
    Command *noCommand = new NoCommand();
    for (int i = 0; i < slotNum; i++)
    {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
    undoCommand = noCommand;
}
void RemoteControl::setCommand(int slot, class Command *onCommand, class Command *offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}
void RemoteControl::onButtonWasPressed(int slot)
{
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}
void RemoteControl::offButtonWasPressed(int slot)
{
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}
void RemoteControl::undoButtonWasPressed()
{
    undoCommand->undo();
}