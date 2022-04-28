#ifndef SENSORS_H
#define SENSORS_H
 
#include <string>

namespace tubs
{
    class ConsoleTableChart;

    class  TemperaturSensor
    {
    public:
        TemperaturSensor();
        void measure();
        void setChart(ConsoleTableChart* chart);
        std::string getName();
        int getTemperature();
    
    private:
        int _randNumInRange(int low, int high);
    
    private:
        int _temp;
        std::string _name;
        ConsoleTableChart* _tableChart;
    };  
}

#endif