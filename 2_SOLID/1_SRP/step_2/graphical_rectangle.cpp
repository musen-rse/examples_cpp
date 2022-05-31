#include "graphical_rectangle.h"


GraphicalRectangle::GraphicalRectangle(Rectangle& rectangle) : rectangle(rectangle)
{

}

void GraphicalRectangle::draw(std::string color)
{
    std::cout << color;
    for (int row = 1; row <= rectangle.getHeight(); ++row)
    {
        for (int col = 1; col <= rectangle.getWidth(); ++col)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << color::RESET;
}