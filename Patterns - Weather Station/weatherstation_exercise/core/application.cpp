#include <iostream>
#include <chrono>
#include <thread>

#include "application.h"
#include "sensors.h"
#include "../charts.h"


namespace tubs
{

Application::Application()
{
    _runLoop = nullptr;
}

Application::~Application()
{
    if (_runLoop)
        delete _runLoop;
}


void Application::run()
{
    std::cout << "Run app... \n";
    _stopped = false;

    _runLoop = new std::thread([this]()
    {
        TemperaturSensor tempSensor;
        ConsoleTableChart chart(tempSensor.getName());
        chart.setColor(color::BLUE);
        tempSensor.setChart(&chart);
        

        while(!this->_stopped) {
            system("clear");
            tempSensor.measure();
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