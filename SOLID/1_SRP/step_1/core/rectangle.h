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

    private:
    double height = 0;
    double width = 0;
};

class GeometryApplication
{
    public:
    GeometryApplication(Rectangle& rectangle) : rectangle(rectangle)
    {

    }

    void run()
    {
        double area = rectangle.area();
        std::cout << "Area of rectangle is: " << area << std::endl;
    }

    private:
    Rectangle& rectangle;
};

#endif
