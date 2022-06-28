#include "core/RemoteControl.h"
#include "TV.h"
#include "SoundBar.h"
#include "Playstation.h"

#include "PlaystationCommand.h"
#include "TVCommand.h"
#include "AllOffCommand.h"


int main() {

    // setup ...
    TV* tv = new TV();
    SoundBar* soundBar = new SoundBar();
    Playstation* playstation = new Playstation();

    auto tvCommand = createTVCommand(tv, soundBar);
    auto playstationCommand = createPlaystationCommand(tv, soundBar, playstation);
    auto allOffCommand =  createAllOffCommand(tv, soundBar, playstation);

    RemoteControl* remoteControl = new RemoteControl(3);

    remoteControl->setButton(0, tvCommand);
    remoteControl->setButton(1, playstationCommand);
    remoteControl->setButton(2, allOffCommand);


    // start run loop ...

    while(true) {
        std::cout << "Press button on remote control [0, 1, 2]: ";
        std::cout << std::endl;
        int i;

        std::cin >> i;

        if (i < 0 || i > 2 || !std::cin)
            break;

        remoteControl->pressButton(i);

        std::cout << std::endl;
    }


    // clean up ...

    delete tv;
    delete soundBar;
    delete playstation;

    delete remoteControl;

    return 0;
}