#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>


class Rectangle
{
    public:
    Rectangle(double height, double width);

    void setHeight(double height);

    void setWidth(double width);

    double getHeight() const;

    double getWidth() const;

    double area() const;
    private:
    double height = 0;
    double width = 0;
};


#endif
