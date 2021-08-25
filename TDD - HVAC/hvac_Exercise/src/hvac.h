#ifndef HVAC_H
#define HVAC_H

class HVAC
{
    public:
        virtual void stopBlowing() = 0;

        virtual void stopHeating() = 0;

        virtual void stopCooling() = 0;

        virtual void startCooling() = 0;

        virtual void startBlowing() = 0;

        virtual void startHeating() = 0;

        virtual int getTemperature() = 0;
};

#endif