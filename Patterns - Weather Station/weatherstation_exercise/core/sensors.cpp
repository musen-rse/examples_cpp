#include <random>
#include "sensors.h"
#include "../charts.h"
#include "../utilities.h"

namespace tubs
{

void TemperaturSensor::measure()
{
    _temp += random::numberInRange(-5, 5);
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

}