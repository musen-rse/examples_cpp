#ifndef ALLOFFCOMMAND_H
#define ALLOFFCOMMAND_H

#include "TV.h"
#include "SoundBar.h"
#include "Playstation.h"

#include <iostream>
#include <functional>

std::function<void(void)> createAllOffCommand(TV* tv, SoundBar* soundBar, Playstation* playstation) {
    std::function<void(void)> command = [&tv, &soundBar, &playstation]() -> void {
        std::cout << "Executing All Off Command... " << std::endl;
        tv->switchOff();
        soundBar->switchOff();
        playstation->switchOff();
    };
    return command;
}


#endif
