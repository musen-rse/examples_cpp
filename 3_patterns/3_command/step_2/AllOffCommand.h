#ifndef ALLOFFCOMMAND_H
#define ALLOFFCOMMAND_H

#include "core/TV.h"
#include "core/Playstation.h"
#include "core/SoundBar.h"


class AllOffCommand
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
