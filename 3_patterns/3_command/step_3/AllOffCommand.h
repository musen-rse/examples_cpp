#ifndef ALLOFFCOMMAND_H
#define ALLOFFCOMMAND_H

#include "core/Command.h"
#include "TV.h"
#include "Playstation.h"
#include "SoundBar.h"

// --
// Concrete Command implementation which knows their receiver
// --
class AllOffCommand : public Command
{
public:
    AllOffCommand(TV* tv, SoundBar* soundBar, Playstation* playstation) : tv(tv), soundBar(soundBar), playstation(playstation)  {}

    virtual void execute() {
        std::cout << "Executing All Off Command... " << std::endl;
        tv->switchOff();
        soundBar->switchOff();
        playstation->switchOff();
    }

private:
    TV* tv;
    SoundBar* soundBar;
    Playstation* playstation;
};

#endif
