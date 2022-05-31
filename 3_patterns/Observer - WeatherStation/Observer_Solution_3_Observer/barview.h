
#ifndef BARVIEW_H
#define BARVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "observer.h"

class BarView : public Observer {
public:
    BarView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(Subject* subject) {
      if (subject == itsTempSensor)
          std::cout << "Bar view " << itsTempSensor->getData() << std::endl;
      if (subject == itsHumiditySensor)
          std::cout << "Bar view " << itsHumiditySensor->getData() << std::endl;
    };
private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // BARVIEW_H