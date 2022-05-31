#include <iostream>
#include <vector>
#include <memory>

#include "core/buttonServer.h"
#include "core/button.h"

class Lamp : public ButtonServer
{
    public:
    void turnOn() {
        printf("light on \n");
    }

    void turnOff() {
        printf("light off \n");
    }
};


int main()
{

    Lamp lamp;

    Button button(lamp);

    button.press();
    button.press();

    return 0;
}
