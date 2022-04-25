#include <iostream>
#include <vector>
#include <memory>

#include "core/app.h"


int main()
{

    std::vector<std::shared_ptr<Rectangle>> rectangles;
    rectangles.push_back(std::shared_ptr<Rectangle>(new Rectangle(2.0, 8.0)));

    Application app(rectangles);
    app.run();

}
