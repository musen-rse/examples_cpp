#ifndef APPLICATION_H
#define APPLICATION_H

#include <thread>

namespace tubs
{

class ConsoleTableChart;
class TemperaturSensor;

class Application
{
public:
    Application();
    ~Application();
    void run();
    void stop();

private:
    std::thread* _runLoop {nullptr};
    bool _stopped {false};
    ConsoleTableChart* _tableChart {nullptr};
    TemperaturSensor* _temperatureSensor {nullptr};
};

}

#endif