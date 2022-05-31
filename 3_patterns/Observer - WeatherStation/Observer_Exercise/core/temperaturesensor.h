#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include <string>
#include <iostream>

class ChartView;

class TemperatureSensor {
public:

    std::string getTemperature();
    void setTemperature(std::string data);
    void setChartView(ChartView* chartView);

private:
    std::string itsData = "temp: 0";
    ChartView* itsChartView = nullptr;
};

#endif // TEMPERATURESENSOR_H