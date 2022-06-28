#ifndef PLAYSTATIONCOMMAND_H
#define PLAYSTATIONCOMMAND_H

#include "TV.h"
#include "SoundBar.h"
#include "Playstation.h"


#include <iostream>
#include <functional>

std::function<void(void)> createPlaystationCommand(TV* tv, SoundBar* soundBar, Playstation* playstation) {
    auto command = [&tv, &soundBar, &playstation]() -> void {
        std::cout << "Executing Playstation Command... " << std::endl;

        tv->switchOn();
        tv->setInput("hdmi 2.1");

        playstation->switchOn();
        playstation->startGame("GTA 5");

        soundBar->switchOn();
        soundBar->setSoundLevel(65);
    };
    return command;
}


#endif
