
#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <string>
#include <iostream>

#include "datamodel.h"
#include "view.h"

class ChartView : public View {
public:
    void update(DataModel* dataModel) {
      std::cout << "Chart view shows: " << dataModel->getData() << std::endl;
    };
};

#endif // CHARTVIEW_H