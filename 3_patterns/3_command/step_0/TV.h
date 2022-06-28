#ifndef TV_H
#define TV_H

#include <iostream>

// --
// This class represents a receiver according to the Command Design Pattern.
// --
class TV
{
public:
    void switchOn() {
        /* switch on ... */
        std::cout << "  ...TV switched on" << std::endl;
    }

    void switchOff() {
        /* switch off ... */
        std::cout << "  ...TV switched off" << std::endl;
    }

    void setInput(std::string input) {
        /* set tv input to ... */
        std::cout << "  ...TV input set to " << input << std::endl;
    }
};

#endif
