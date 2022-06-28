#ifndef TVCOMMAND_H
#define TVCOMMAND_H

#include "TV.h"
#include "SoundBar.h"

#include <iostream>
#include <functional>

std::function<void(void)> createTVCommand(TV* tv, SoundBar* soundBar) {
    auto command = [&tv, &soundBar]() -> void {
        std::cout << "Executing TV Command... " << std::endl;

        tv->switchOn();
        tv->setInput("tv");

        soundBar->switchOn();
        soundBar->setSoundLevel(42);
    };
    return command;
}



#endif
