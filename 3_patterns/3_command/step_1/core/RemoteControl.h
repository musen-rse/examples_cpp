#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <iostream>

#include "core/TV.h"
#include "core/SoundBar.h"
#include "core/Playstation.h"


class RemoteControl
{
public:
    RemoteControl(TV* tv, SoundBar* soundBar) : tv(tv), soundBar(soundBar) {}

    void pressTVButton() {
        std::cout << "Start TV... " << std::endl;

        tv->switchOn();
        tv->setInput("tv");

        soundBar->switchOn();
        soundBar->setSoundLevel(42);
    }

    void pressAllOffButton() {
        std::cout << "All Off... " << std::endl;
        tv->switchOff();
        soundBar->switchOff();
    }

private:
    TV* tv;
    SoundBar* soundBar;
};

#endif
