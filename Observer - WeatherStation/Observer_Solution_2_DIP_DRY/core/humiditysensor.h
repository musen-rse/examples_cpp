#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H

#include <string>
#include <iostream>
#include <vector>

#include "sensor.h"

class HumiditySensor : public Sensor {
public:

    std::string getData();
    void setData(std::string data);

private:
    std::string itsData = "humidity: 0";
};

#endif // HUMIDITYSENSOR_H