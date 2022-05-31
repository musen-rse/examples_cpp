#include "humiditysensor.h"
#include "view.h"

std::string HumiditySensor::getData() {
  return itsData;
};

void HumiditySensor::setData(std::string data) {
  itsData = data;
  std::cout << "Sensor " << data << std::endl;
  updateViews();
}