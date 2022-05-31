
#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <string>
#include <iostream>

#include "core/temperaturesensor.h"

class ChartView {
public:
    void update(std::string data) {
      std::cout << "Chart view " << data << std::endl;
    };
};

#endif // CHARTVIEW_H