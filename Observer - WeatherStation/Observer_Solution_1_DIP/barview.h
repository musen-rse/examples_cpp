
#ifndef BARVIEW_H
#define BARVIEW_H

#include <string>
#include <iostream>

#include "datamodel.h"
#include "view.h"

class BarView : public View {
public:
    void update(DataModel* dataModel) {
      std::cout << "Bar view shows: " << dataModel->getData() << std::endl;
    };
};

#endif // BARVIEW_H