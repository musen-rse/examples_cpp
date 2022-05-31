#include <iostream>
#include <vector>
#include <memory>

#include "core/app.h"




int main()
{

    std::vector<Rectangle*> rectangles;
    rectangles.push_back(new Rectangle(2.0, 8.0));
    rectangles.push_back(new Square(4.0));

    Application app(rectangles);
    app.run();

}
