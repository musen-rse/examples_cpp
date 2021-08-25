#include "temperaturesensor.h"
#include "view.h"

std::string TemperatureSensor::getData() {
  return itsData;
};

void TemperatureSensor::setData(std::string data) {
  itsData = data;
  std::cout << "Sensor " << data << std::endl;
  updateViews();
}
