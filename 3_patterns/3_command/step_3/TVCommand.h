#ifndef TVCOMMAND_H
#define TVCOMMAND_H

#include "core/Command.h"
#include "TV.h"
#include "SoundBar.h"

// --
// Concrete Command implementation which knows their receiver
// --
class TVCommand : public Command
{
public:
    TVCommand(TV* tv, SoundBar* soundBar) : tv(tv), soundBar(soundBar)  {}

    virtual void execute() {
        std::cout << "Executing TV Command... " << std::endl;

        tv->switchOn();
        tv->setInput("tv");

        soundBar->switchOn();
        soundBar->setSoundLevel(42);
    }

private:
    TV* tv;
    SoundBar* soundBar;
};

#endif
