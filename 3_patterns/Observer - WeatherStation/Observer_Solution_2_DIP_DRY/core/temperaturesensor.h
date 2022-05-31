#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include <string>
#include <iostream>
#include <vector>

#include "sensor.h"

class TemperatureSensor : public Sensor {
public:

    std::string getData();
    void setData(std::string data);

private:
    std::string itsData = "temp: 0";
};

#endif // TEMPERATURESENSOR_H