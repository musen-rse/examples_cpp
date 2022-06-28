#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <iostream>

#include "TV.h"
#include "SoundBar.h"
#include "Playstation.h"

#include "AllOffCommand.h"
#include "TVCommand.h"
#include "PlaystationCommand.h"


class RemoteControl
{
public:
    RemoteControl(TVCommand* tvCommand, AllOffCommand* allOffCommand, PlaystationCommand* playstationCommand) :
     tvCommand(tvCommand), allOffCommand(allOffCommand), playstationCommand(playstationCommand)  {}

    void pressTVButton() {
        tvCommand->execute();
    }

    void pressPlaystattionButton() {
        playstationCommand->execute();
    }

    void pressAllOffButton() {
        allOffCommand->execute();
    }

private:
    TVCommand* tvCommand;
    AllOffCommand* allOffCommand;
    PlaystationCommand* playstationCommand;
};

#endif
