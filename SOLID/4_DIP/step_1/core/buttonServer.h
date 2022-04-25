#ifndef BUTTON_SERVER_H
#define BUTTON_SERVER_H


class ButtonServer
{
    public:
    virtual ~ButtonServer() = default;

    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

#endif