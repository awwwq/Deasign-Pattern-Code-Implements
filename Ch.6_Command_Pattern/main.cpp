#include <iostream>
#include "RemoteControl.h"

int main()
{
    RemoteControl *rc = new RemoteControl();
    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    TV *tv = new TV("Living Room");
    CeilingFan *ceilingFan = new CeilingFan("Living Room");
    Stereo *stereo = new Stereo("Living Room");
    GarageDoor *garageDoor = new GarageDoor("");
    Hottub *hottub = new Hottub("");




    TVOnCommand *tvOn = new TVOnCommand(tv);
    TVOffCommand *tvOff = new TVOffCommand(tv);
    HottubOnCommand *hottubOn = new HottubOnCommand(hottub);
    HottubOffCommand *hottubOff = new HottubOffCommand(hottub);
    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    //    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    //    LightOffCommand *kitchenLightoff = new LightOffCommand(kitchenLight);

    //    CeilingFanHighCommand *ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
    //    CeilingFanMediumCommand *ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
    //    CeilingFanOffCommand *ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

    //    GarageDoorOpenCommand *garageDoorOpen = new GarageDoorOpenCommand(garageDoor);
    //    GarageDoorDownCommand *garageDoorDown = new GarageDoorDownCommand(garageDoor);
    //
    StereoOnWithCDCommand *stereoOnWithCd = new StereoOnWithCDCommand(stereo);
    StereoOffCommand *stereoOff = new StereoOffCommand(stereo);

    Command *partyOn[]{livingRoomLightOn, stereoOnWithCd, tvOn, hottubOn, nullptr};
    Command *partyOff[]{livingRoomLightOff, stereoOff, tvOff, hottubOff, nullptr};

    MacroCommand *partyOnMacro = new MacroCommand(partyOn);
    MacroCommand *partyOffMacro = new MacroCommand(partyOff);

    rc->setCommand(0, partyOnMacro, partyOffMacro);
    //    rc->setCommand(0, [livingRoomLight] { livingRoomLight->on(); }, [livingRoomLight]{livingRoomLight->off();})
    //    rc->setCommand(0, livingRoomLight::on(),livingRoomLight::off());

    //    rc->setCommand(0, ceilingFanMedium, ceilingFanOff);
    //    rc->setCommand(1, ceilingFanHigh, ceilingFanOff);
    //    rc->onButtonWasPressed(0);
    //    rc->offButtonWasPressed(0);
    //    std::cout << (*rc) << std::endl;
    //    rc->undoButtonWasPressed();
    //
    //    rc->onButtonWasPressed(1);
    std::cout << (*rc) << std::endl;
    std::cout << "---- Pushing Macro On ----" << std::endl;
    rc->onButtonWasPressed(0);
    std::cout << (*rc) << std::endl;
    rc->undoButtonWasPressed();
    //std::cout << "---- Pushing Macro Off ----" << std::endl;
    //rc->offButtonWasPressed(0);

    return 0;
}
