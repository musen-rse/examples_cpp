#include <iostream>
#include <vector>
#include <memory>

#include "core/app.h"
#include "shapes.h"


int main()
{

    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(2.0));
    shapes.push_back(new Square(4.0));

    Application app(shapes);
    app.drawAllShapes();


    for(Shape* shape : shapes)
        delete shape;
}
