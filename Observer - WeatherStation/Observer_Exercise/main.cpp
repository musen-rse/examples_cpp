#include "temperaturesensor.h"
#include "chartview.h"

int main(int argc, char *argv[])
{
    std::cout << "\n\nObserver example ....\n\n";
    
    TemperatureSensor* tempSensor = new TemperatureSensor();

    ChartView* chartView = new ChartView();
    tempSensor->setChartView(chartView);

    tempSensor->setTemperature("temp: 23");
    tempSensor->setTemperature("temp: 24");

    delete chartView;
    delete tempSensor;

    return 0;
}
