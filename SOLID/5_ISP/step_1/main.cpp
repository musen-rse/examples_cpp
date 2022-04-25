#include <iostream>
#include <vector>
#include <memory>


class TextDevice
{
    virtual void sendSMS() = 0;
    virtual void sendEmail() = 0;
};

class CallingDevice
{
    virtual void makeCall() = 0;
};

class Smartphone : public TextDevice, CallingDevice
{
    virtual void makeCall() {}
    virtual void sendSMS() {}
    virtual void sendEmail() {}
};

class Landlinephone : public CallingDevice
{
    virtual void makeCall() {}
};


class Person
{
    public:
    Person (TextDevice& textDevice, CallingDevice& callingDevice) : textDevice(textDevice), callingDevice(callingDevice)
    {

    }

    private:
    TextDevice& textDevice;
    CallingDevice& callingDevice;
};

int main()
{


    return 0;
}
