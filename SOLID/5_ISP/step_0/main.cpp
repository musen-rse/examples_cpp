#include <iostream>
#include <vector>
#include <memory>


class CommunicationDevice
{
    virtual void makeCall() = 0;
    virtual void sendSMS() = 0;
    virtual void sendEmail() = 0;
};

class Smartphone : public CommunicationDevice
{
    virtual void makeCall() {}
    virtual void sendSMS() {}
    virtual void sendEmail() {}
};

class Landlinephone : public CommunicationDevice
{
    virtual void makeCall() {}
    virtual void sendSMS() {}
    virtual void sendEmail() {} // ISP VIOLATION
};


class Person
{
    public:
    Person (CommunicationDevice& communicationDevice) : communicationDevice(communicationDevice)
    {

    }

    private:
    CommunicationDevice& communicationDevice;
};

int main()
{


    return 0;
}
