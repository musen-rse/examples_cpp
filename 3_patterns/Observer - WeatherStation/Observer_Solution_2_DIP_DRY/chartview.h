
#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "humiditysensor.h"
#include "view.h"

class ChartView : public View {
public:
    ChartView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(std::string data) {
      std::cout << "Chart view " << data << std::endl;
    };

private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // CHARTVIEW_H