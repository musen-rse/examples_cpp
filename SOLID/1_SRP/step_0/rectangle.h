#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>



class Rectangle
{
    public:
    Rectangle(double height, double width)
    {
        this->height = height;
        this->width = width;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    void setWidth(double width)
    {
        this->width = width;
    }

    double getHeight() const
    {
        return height;
    }

    double getWidth() const
    {
        return width;
    }

    double area() const
    {
        return this->height * this->width;
    }

    void draw()
    {
        for (int row = 1; row <= height; ++row)
        {
            for (int col = 1; col <= width; ++col)
            {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }

    private:
    double height = 0;
    double width = 0;
};


#endif
