#ifndef HVAC_SPY_H
#define HVAC_SPY_H

#include "hvac.h"

class HVACSpy : public HVAC
{
    public:

    bool isCooling(){
        return isCurrentlyCooling; 
    }

    bool isHeating(){
        return isCurrentlyHeating;
    }

    bool isBlowing(){
        return isCurrentlyBlowing;
    }

    virtual void stopBlowing() override{
        isCurrentlyBlowing = false;
    }

    virtual void stopHeating() override{
        isCurrentlyHeating = false;        
    }

    virtual void stopCooling() override{
        isCurrentlyCooling = false;  
    }

    virtual void startCooling() override{
        isCurrentlyCooling = true;
    }

    virtual void startHeating() override{
        isCurrentlyHeating = true;
    }

    virtual void startBlowing() override{
        isCurrentlyBlowing = true;
    }

    virtual int getTemperature() override {
        return temperature;
    }


    void setTemperature(int temp)
    {
        temperature = temp;
    }

    private:
    int temperature;

    bool isCurrentlyBlowing = true;
    bool isCurrentlyHeating = true;
    bool isCurrentlyCooling = true;

};

#endif