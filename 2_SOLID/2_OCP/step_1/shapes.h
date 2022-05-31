#ifndef SHAPES_H
#define SHAPES_H

#include "core/shapes_interface.h"

class Circle : public Shape
{
    public:
    Circle(int radius) : radius(radius) {

    }

    int getRadius() const
    {
        return radius;
    }

    void draw()
    {
        std::cout << "Draw circle with radius: " << radius << std::endl;
    }

    private:
    int radius;
};

class Square : public Shape
{
    public:
    Square(int length) : length(length) {

    }

    int getLength() const
    {
        return length;
    }

    void draw()
    {
        std::cout << "Draw square with length: " << length << std::endl;
    }

    private:
    int length;
};


#endif
