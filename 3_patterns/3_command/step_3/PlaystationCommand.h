#ifndef PLAYSTATIONCOMMAND_H
#define PLAYSTATIONCOMMAND_H

#include "core/Command.h"
#include "core/TV.h"
#include "core/Playstation.h"
#include "core/SoundBar.h"

// --
// Concrete Command implementation which knows their receiver
// --
class PlaystationCommand : public Command
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
