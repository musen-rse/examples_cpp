#ifndef BUTTON_H
#define BUTTON_H

#include "buttonServer.h"


class Button
{
    public:
    Button(ButtonServer& button_server) : button_server(button_server)
    {

    }

    void press() {
        if(!pressed) {
            button_server.turnOn();
            pressed = true;
        } else {
            button_server.turnOff();
        }

    }

    private:
    bool pressed = false;
    ButtonServer& button_server;
};
#endif