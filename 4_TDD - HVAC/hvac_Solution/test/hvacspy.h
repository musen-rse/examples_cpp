#ifndef HVACSPY_H
#define HVACSPY_H

#include "hvac.h"

class HVACSpy : public HVAC
{
    public:
    virtual void stopHeating() override
    {
        heatingState = false;
    }
    virtual void stopCooling() override
    {
        coolingState = false;
    }
    virtual void stopBlowing() override
    {
        blowingState = false;
    };

    virtual void startHeating() override
    {
        heatingState = true;
    }
    virtual void startCooling() override
    {
        coolingState = true;
    }
    virtual void startBlowing() override
    {
        blowingState = true;
    };

    void setTemperature(int temperature)
    {
        this->temperature = temperature;
    }

    virtual int getTemperature() override
    {
        return temperature;
    }


    bool isHeating()
    {
        return heatingState;
    }

    bool isCooling()
    {
        return coolingState;
    }

    bool isBlowing()
    {
        return blowingState;
    }

    private:
    bool heatingState = true;
    bool blowingState = true;
    bool coolingState = true;

    int temperature;
};



#endif // HVACSPY_H
