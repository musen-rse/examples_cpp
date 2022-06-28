#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <vector>

#include "Command.h"

// --
// Invoker (RemoteControl) is responsible for executing a command.
// --
class RemoteControl
{
public:
    RemoteControl(int numberOfButtons) {
        commands.resize(numberOfButtons);
    }

    void pressButton(int buttonNumber) {
        if(buttonNumber >= commands.size()) return;

        if(commands[buttonNumber]) {
            commands[buttonNumber]->execute();
        } else {
             std::cout << "Button " << buttonNumber << " not in use." << std::endl;
        }
    }

    void setButton(int buttonNumber, Command* command) {
        if(buttonNumber >= commands.size()) return;

        commands[buttonNumber] = command;
    }

private:
    std::vector<Command*> commands;
};

#endif
