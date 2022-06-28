#ifndef PLAYSTATION_H
#define PLAYSTATION_H

#include <iostream>

// --
// This class represents a receiver according to the Command Design Pattern.
// --
class Playstation
{
public:
    void switchOn() {
        /* switch on ... */
        std::cout << "...Playstation switched on" << std::endl;
    }

    void switchOff() {
        /* switch off ... */
        std::cout << "...Playstation switched off" << std::endl;
    }

    void startGame(std::string input) {
        /* set tv input to ... */
        std::cout << "..." << input << " is starting" << std::endl;
    }

};

#endif
