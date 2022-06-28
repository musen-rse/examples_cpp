#ifndef SOUNDBAR_H
#define SOUNDBAR_H

#include <iostream>

// --
// This class represents a receiver according to the Command Design Pattern.
// --
class SoundBar
{
public:
    void switchOn() {
        /* switch on ... */
        std::cout << "  ...soundbar switched on" << std::endl;
    }

    void switchOff() {
        /* switch off ... */
        std::cout << "  ...soundbar switched off" << std::endl;
    }

    void setSoundLevel(int soundlevel) {
        /* switch tv on ... */
        std::cout << "  ...sound level set to " << soundlevel << std::endl;
    }
};

#endif
