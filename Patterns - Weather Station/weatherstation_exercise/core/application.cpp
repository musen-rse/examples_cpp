#include <iostream>
#include <chrono>
#include <thread>

#include "application.h"
#include "sensors.h"
#include "../charts.h"
#include "utilities.h"


namespace tubs
{

Application::Application()
{
    _temperatureSensor = new TemperaturSensor();
    _tableChart = new ConsoleTableChart(_temperatureSensor->getName());
    _tableChart->setColor(color::BLUE);
    _temperatureSensor->setChart(_tableChart);
}

Application::~Application()
{
    if (_runLoop)
        delete _runLoop;

    if (_temperatureSensor)
        delete _temperatureSensor;

    if (_tableChart) 
        delete _tableChart;
}


void Application::run()
{
    std::cout << "Run app... \n";
    _stopped = false;

    _runLoop = new std::thread([this]()
    {
        while(!this->_stopped) {
            screen::clear();
            this->_temperatureSensor->measure();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
    );
}

void Application::stop()
{
    _stopped = true;
    _runLoop->join();
}

}