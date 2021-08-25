#ifndef ENVIRONMENTCONTROLLER_H
#define ENVIRONMENTCONTROLLER_H

#include <hvac.h>

class EnvironmentController
{
public:
    EnvironmentController(HVAC *hvac) : hvac(hvac)
    {
        idle();
    }

    void checkTemperature()
    {
        if (tooCold())
            heat();
        else if (tooHot())
            cool();
        else
            idle();
    }

    void setDesiredTemperature(int desired_temperature)
    {
        this->desired_temperature = desired_temperature;
    }

    void setTemperatureDelta(int delta_temperature)
    {
        this->delta_temperature = delta_temperature;
    }

private:
    bool tooCold()
    {
        return hvac->getTemperature() + delta_temperature <= desired_temperature;
    }

    bool tooHot()
    {
        return hvac->getTemperature() - delta_temperature >= desired_temperature;
    }

    void idle()
    {
        hvac->stopHeating();
        hvac->stopBlowing();
        hvac->stopCooling();
    }

    void cool()
    {
        hvac->stopHeating();
        hvac->startBlowing();
        hvac->startCooling();
    }

    void heat()
    {
        hvac->startHeating();
        hvac->startBlowing();
        hvac->stopCooling();
    }

    HVAC *hvac;

    int delta_temperature;
    int desired_temperature;
};

#endif // ENVIRONMENTCONTROLLER_H
