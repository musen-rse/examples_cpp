#include "core/TV.h"
#include "core/SoundBar.h"
#include "core/Playstation.h"

#include "core/RemoteControl.h"

#include "PlaystationCommand.h"
#include "TVCommand.h"
#include "AllOffCommand.h"


int main() {

    // setup ...

    TV* tv = new TV();
    SoundBar* soundBar = new SoundBar();
    Playstation* playstation = new Playstation();


    TVCommand* command1 = new TVCommand(tv, soundBar);
    AllOffCommand* command2 = new AllOffCommand(tv, soundBar, playstation);
    PlaystationCommand* command3 = new PlaystationCommand(tv, soundBar, playstation);

    RemoteControl* remoteControl = new RemoteControl(command1, command2, command3);

    // use devices
    while(true) {
        std::cout << "Press button on remote control [0, 1, 2]: ";
        std::cout << std::endl;
        int i;

        std::cin >> i;

        if (i < 0 || i > 2 || !std::cin)
            break;

        if(i == 0) {
            remoteControl->pressTVButton();
        } else if (i == 1) {
            remoteControl->pressPlaystattionButton();
        } else if (i == 2) {
            remoteControl->pressAllOffButton();
        }

        std::cout << std::endl;
    }

    // clean up ...
    delete remoteControl;
    delete tv;
    delete soundBar;
    delete playstation;

    return 0;
}