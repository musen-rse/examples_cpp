#ifndef CORE_H
#define CORE_H
#include <memory>
#include <vector>

#include "../shapes.h"

void draw_circle(Circle* circle)
{
    std::cout << "Draw circle with radius: " << circle->getRadius() << std::endl;
}

void draw_square(Square* square)
{
    std::cout << "Draw square with length: " << square->getLength() << std::endl;
}

class Application
{
public:
    Application(std::vector<Shape*> shapes) : shapes(shapes)
    {

    }

    void drawAllShapes()
    {
        for (Shape* shape : shapes) {
            if(shape->shapeType == ShapeType::circle)
                draw_circle((Circle*)shape);
            else if(shape->shapeType == ShapeType::square)
                draw_square((Square*)shape);
        }
    }


private:
    std::vector<Shape*> shapes;
};



#endif