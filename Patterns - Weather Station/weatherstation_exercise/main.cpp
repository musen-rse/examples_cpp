#include <iostream>

#include "core/application.h"

#include "chart.h"

#include <chrono>
#include <thread>

int main()
{
    Application* app = new Application();

    app->run();

    tubs::ConsoleTableChart chart;

    chart.draw(1.5);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    chart.draw(2.5);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    chart.draw(3.5);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    chart.draw(4.5);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    chart.draw(5.5);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    chart.draw(6.5);


    delete app;

    return 0;
}
