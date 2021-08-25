
#ifndef LINEVIEW_H
#define LINEVIEW_H

#include <string>
#include <iostream>

#include "temperaturesensor.h"
#include "view.h"

class LineView : public View {
public:
    LineView(TemperatureSensor* tempSensor, HumiditySensor* humiditySensor) : 
    itsTempSensor(tempSensor), itsHumiditySensor(humiditySensor)
    {
      
    }

    void update(std::string data) {
      std::cout << "Line view " << data << std::endl;
    };
  
private:
    TemperatureSensor* itsTempSensor = nullptr;
    HumiditySensor* itsHumiditySensor = nullptr;
};

#endif // LINEVIEW_H