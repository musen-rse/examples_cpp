#include "temperaturesensor.h"
#include "humiditysensor.h"
#include "chartview.h"
#include "lineview.h"
#include "barview.h"

int main(int argc, char *argv[])
{
    std::cout << "\n\nObserver example ....\n\n";
    
    TemperatureSensor* tempSensor = new TemperatureSensor();
    HumiditySensor* humiditySensor = new HumiditySensor();

    ChartView* chartView = new ChartView(tempSensor, humiditySensor);
    tempSensor->attachObserver(chartView);
    humiditySensor->attachObserver(chartView);

    LineView* lineView = new LineView(tempSensor, humiditySensor);
    tempSensor->attachObserver(lineView);
    humiditySensor->attachObserver(lineView);

    BarView* barView = new BarView(tempSensor, humiditySensor);
    tempSensor->attachObserver(barView);
    humiditySensor->attachObserver(barView);

    tempSensor->setData("temp: 23");
    tempSensor->setData("temp: 24");

    humiditySensor->setData("humidity: 80");
    humiditySensor->setData("humidity: 81");
    humiditySensor->setData("humidity: 82");

    delete lineView;
    delete chartView;
    delete barView;
    delete tempSensor;
    delete humiditySensor;

    return 0;
}
