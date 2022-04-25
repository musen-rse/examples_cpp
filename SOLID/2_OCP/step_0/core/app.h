#ifndef CORE_H
#define CORE_H
#include <memory>
#include <vector>

#include "../shapes.h"

void draw_circle(int radius)
{
    std::cout << "Draw circle with radius: " << radius << std::endl;
}

void draw_square(int length)
{
    std::cout << "Draw square with length: " << length << std::endl;
}

class Application
{
    public:
    Application(std::vector<std::shared_ptr<Shape>> shapes) : shapes(shapes)
    {

    }

    void drawAllShapes()
    {
        for (std::shared_ptr<Shape> shape : shapes) {
            if(std::shared_ptr<Circle> circle = std::dynamic_pointer_cast<Circle>(shape))
                draw_circle(circle->getRadius());
            else if(std::shared_ptr<Square> square = std::dynamic_pointer_cast<Square>(shape))
                draw_square(square->getLength());
        }
    }


    private:
    std::vector<std::shared_ptr<Shape>> shapes;
};



#endif