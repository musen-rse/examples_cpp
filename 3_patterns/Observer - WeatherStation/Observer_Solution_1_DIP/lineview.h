
#ifndef LINEVIEW_H
#define LINEVIEW_H

#include <string>
#include <iostream>

#include "datamodel.h"
#include "view.h"

class LineView : public View {
public:
    void update(DataModel* dataModel) {
      std::cout << "Line view shows: " << dataModel->getData() << std::endl;
    };
};

#endif // LINEVIEW_H