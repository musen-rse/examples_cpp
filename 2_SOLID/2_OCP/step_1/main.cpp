#include <iostream>
#include <vector>
#include <memory>

#include "core/app.h"
#include "shapes.h"


int main()
{

    std::vector<std::shared_ptr<Shape>> shapes;
    shapes.push_back(std::shared_ptr<Shape>(new Circle(2.0)));
    shapes.push_back(std::shared_ptr<Shape>(new Square(4.0)));

    Application app(shapes);
    app.drawAllShapes();

}
