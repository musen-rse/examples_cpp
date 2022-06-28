#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <vector>
#include <functional>
#include <iostream>


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
            commands[buttonNumber]();
        } else {
             std::cout << "Button " << buttonNumber << " not in use." << std::endl;
        }
    }

    void setButton(int buttonNumber, std::function<void(void)> command) {
        if(buttonNumber >= commands.size()) return;

        commands[buttonNumber] = command;
    }

private:
    std::vector<std::function<void(void)>> commands;
};

#endif
