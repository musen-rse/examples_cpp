
#ifndef BARVIEW_H
#define BARVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "view.h"

class BarView : public View {
public:
    BarView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(std::string data) {
      std::cout << "Bar view " << data << std::endl;
    };
private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // BARVIEW_H