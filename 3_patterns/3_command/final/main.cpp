#include "core/RemoteControl.h"
#include "core/TV.h"
#include "core/SoundBar.h"
#include "core/Playstation.h"

#include "PlaystationCommand.h"
#include "TVCommand.h"
#include "AllOffCommand.h"


int main() {

    // setup ...

    TV* tv = new TV();
    SoundBar* soundBar = new SoundBar();
    Playstation* playstation = new Playstation();

    Command* command1 = new PlaystationCommand(tv, soundBar, playstation);
    Command* command2 = new TVCommand(tv, soundBar);
    Command* command3 = new AllOffCommand(tv, soundBar, playstation);

    RemoteControl* remoteControl = new RemoteControl(3);

    remoteControl->setButton(0, command1);
    remoteControl->setButton(1, command2);
    remoteControl->setButton(2, command3);


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
    delete command1;
    delete command2;
    delete command3;
    delete remoteControl;

    return 0;
}