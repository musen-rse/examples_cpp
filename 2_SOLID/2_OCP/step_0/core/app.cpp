#include "app.h"
#include <iostream>

void draw_circle(Circle* circle)
{
    std::cout << "Draw circle with radius: " << circle->radius << std::endl;
}

void draw_square(Square* square)
{
    std::cout << "Draw square with length: " << square->length << std::endl;
}


Application::Application(std::vector<Shape*> shapes) : shapes(shapes){ }

void Application::drawAllShapes()
{
    for (Shape* shape : shapes) {
        if(shape->shapeType == ShapeType::circle)
            draw_circle((Circle*)shape);
        else if(shape->shapeType == ShapeType::square)
            draw_square((Square*)shape);
    }
}
