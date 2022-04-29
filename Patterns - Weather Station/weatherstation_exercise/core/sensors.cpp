#include <random>
#include "sensors.h"
#include "../charts.h"

namespace tubs
{

TemperaturSensor:: TemperaturSensor()
{
    _tableChart = nullptr;
    _temp = 20;
}

void TemperaturSensor::measure()
{
    _temp += _randNumInRange(-5, 5);
    if (_tableChart)
        _tableChart->draw(_temp);
}

void TemperaturSensor::setChart(ConsoleTableChart* chart)
{
    _tableChart = chart;
}

std::string TemperaturSensor::getName()
{
    return "Temperature";
}

int TemperaturSensor::getTemperature()
{
    return _temp;
}

int TemperaturSensor::_randNumInRange(int low, int high)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(-5, 5); // define the range
    return distr(gen);
}

}