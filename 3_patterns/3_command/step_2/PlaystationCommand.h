#ifndef PLAYSTATIONCOMMAND_H
#define PLAYSTATIONCOMMAND_H

#include "TV.h"
#include "Playstation.h"
#include "SoundBar.h"

// --
// Concrete Command implementation which knows their receiver
// --
class PlaystationCommand
{
public:
    PlaystationCommand(TV* tv, SoundBar* soundBar, Playstation* playstation) : tv(tv), soundBar(soundBar), playstation(playstation)  {}

    virtual void execute() {
        std::cout << "Executing Playstation Command... " << std::endl;

        tv->switchOn();
        tv->setInput("hdmi 2.1");

        playstation->switchOn();
        playstation->startGame("GTA 5");

        soundBar->switchOn();
        soundBar->setSoundLevel(65);
    }

private:
    TV* tv;
    SoundBar* soundBar;
    Playstation* playstation;
};

#endif
