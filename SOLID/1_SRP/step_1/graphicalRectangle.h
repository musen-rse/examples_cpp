#ifndef GRAPHICAL_RECTANGLE_H
#define GRAPHICAL_RECTANGLE_H
#include "core/rectangle.h"

class GraphicalRectangle
{
    public:
    GraphicalRectangle(const Rectangle& rectangle) : rectangle(rectangle)
    {

    }

    void draw()
    {
        for (int row = 1; row <= rectangle.getHeight(); ++row)
        {
            for (int col = 1; col <= rectangle.getWidth(); ++col)
            {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }


    private:
    const Rectangle& rectangle;
};

#endif