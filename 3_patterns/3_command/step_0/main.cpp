#include "TV.h"
#include "SoundBar.h"

int main() {

    // setup ...
    TV* tv = new TV();
    SoundBar* soundBar = new SoundBar();

    // start TV
    std::cout << "Start TV... " << std::endl;

    tv->switchOn();
    tv->setInput("tv");

    soundBar->switchOn();
    soundBar->setSoundLevel(42);


    // switch everything off
    std::cout << "All Off... " << std::endl;
    tv->switchOff();
    soundBar->switchOff();


    // clean up ...
    delete tv;
    delete soundBar;

    return 0;
}
