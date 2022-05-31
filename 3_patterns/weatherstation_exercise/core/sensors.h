#ifndef SENSORS_H
#define SENSORS_H
 
#include <string>

namespace tubs
{

class ConsoleTableChart;

class  TemperaturSensor
{
public:
    void measure();
    void setChart(ConsoleTableChart* chart);
    std::string getName();
    int getTemperature();

private:
    int _temp {20};
    ConsoleTableChart* _tableChart {nullptr};
};  

}

#endif