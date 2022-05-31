#ifndef EnvironmentController_H
#define EnvironmentController_H


#include "hvac.h"

class EnvironmentController 
{
    public:
    EnvironmentController(HVAC* hvac) : hvac(hvac)
    {
        hvac->stopCooling();
        hvac->stopHeating();
        hvac->stopBlowing();
    }

    void setDesiredTemperature(int desired_temp)
    {
        this->desired_temp = desired_temp;
    }

    void setTemperatureDelta(int temp_delta)
    {
      this->temp_delta = temp_delta;
    }

    void checkTemperature()
    {
        if (isItTooHot())
        {
            startCooling();
        } else if (isItTooCold())
        {
            startHeating();
        } else
        {
            startIdling();
        }
    }

    private:
    bool isItTooHot()
    {
        return hvac->getTemperature() - temp_delta >= desired_temp;
    }

    bool isItTooCold()
    {
        return hvac->getTemperature() + temp_delta <= desired_temp;
    }

    void startCooling()
    {
            hvac->startCooling();
            hvac->startBlowing();
    }

    void startHeating()
    {
            hvac->startHeating();
            hvac->startBlowing();
    }
       
    void startIdling()
    {
            hvac->stopHeating();
            hvac->stopBlowing();
            hvac->stopCooling();
    }

    HVAC* hvac;
    int desired_temp;
    int temp_delta;
};

#endif