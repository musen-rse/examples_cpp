#ifndef ALLOFFCOMMAND_H
#define ALLOFFCOMMAND_H

#include "core/TV.h"
#include "core/SoundBar.h"
#include "core/Playstation.h"

#include <iostream>
#include <functional>

std::function<void(void)> createAllOffCommand(TV* tv, SoundBar* soundBar, Playstation* playstation) {
    auto command = [&tv, &soundBar, &playstation]() -> void {
        std::cout << "Executing All Off Command... " << std::endl;
        tv->switchOff();
        soundBar->switchOff();
        playstation->switchOff();
    };
    return command;
}


#endif
