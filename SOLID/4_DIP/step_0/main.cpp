#include <iostream>
#include <vector>
#include <memory>


class Lamp
{
    public:
    void lightOn() {
        printf("light on \n");
    }

    void lightOff() {
        printf("light off \n");
    }
};


class Button
{
    public:
    Button(Lamp lamp) : lamp(lamp) {

    }

    void press() {
        if(!pressed) {
            lamp.lightOn();
            pressed = true;
        } else {
            lamp.lightOff();
        }

    }

    private:
    bool pressed = false;
    Lamp lamp;
};

int main()
{

    Lamp lamp;

    Button button(lamp);

    button.press();
    button.press();

    return 0;
}
