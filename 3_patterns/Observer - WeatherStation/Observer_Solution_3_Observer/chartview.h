
#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "humiditysensor.h"
#include "observer.h"

class ChartView : public Observer {
public:
    ChartView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(Subject* subject) {
      if (subject == itsTempSensor)
          std::cout << "Chart view " << itsTempSensor->getData() << std::endl;
      if (subject == itsHumiditySensor)
          std::cout << "Chart view " << itsHumiditySensor->getData() << std::endl;
    };

private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // CHARTVIEW_H