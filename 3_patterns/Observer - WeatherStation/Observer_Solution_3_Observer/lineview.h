
#ifndef LINEVIEW_H
#define LINEVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "observer.h"

class LineView : public Observer {
public:
    LineView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(Subject* subject) {
      if (subject == itsTempSensor)
          std::cout << "Line view " << itsTempSensor->getData() << std::endl;
      if (subject == itsHumiditySensor)
          std::cout << "Line view " << itsHumiditySensor->getData() << std::endl;
    };
  
private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // LINEVIEW_H