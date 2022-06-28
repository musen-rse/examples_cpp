#include "core/TV.h"
#include "core/SoundBar.h"
#include "core/Playstation.h"

#include "core/RemoteControl.h"


int main() {

    // setup ...

    TV* tv = new TV();
    SoundBar* soundBar = new SoundBar();

    // use devices
    RemoteControl* remoteControl = new RemoteControl(tv, soundBar);


    while(true) {
        std::cout << "Press button on remote control [0, 1, 2]: ";
        std::cout << std::endl;
        int i;

        std::cin >> i;

        if (i < 0 || i > 1 || !std::cin)
            break;

        if(i == 0) {
            remoteControl->pressTVButton();
        } else if (i == 1) {
            remoteControl->pressAllOffButton();
        }

        std::cout << std::endl;
    }

    // clean up ...
    delete remoteControl;
    delete tv;
    delete soundBar;

    return 0;
}