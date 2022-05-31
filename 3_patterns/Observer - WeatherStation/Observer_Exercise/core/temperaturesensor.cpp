    #include "temperaturesensor.h"
    #include "chartview.h"

    std::string TemperatureSensor::getData() {
      return itsData;
    };

    void TemperatureSensor::setData(std::string data) {
      itsData = data;
      std::cout << "Sensor " << data << std::endl;
      itsChartView->update(itsData);
    }

    void TemperatureSensor::setChartView(ChartView* chartView) {
      itsChartView = chartView; 
    }