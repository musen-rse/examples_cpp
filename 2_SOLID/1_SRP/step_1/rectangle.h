#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

namespace color
{
// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
const std::string RESET ("\033[0m");
const std::string RED ("\033[1;31m");
const std::string BLUE ("\033[1;34m");
const std::string YELLOW ("\033[1;33m");
const std::string GREEN ("\033[1;32m");
}

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

    void draw(std::string color)
    {
        std::cout << color;
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
