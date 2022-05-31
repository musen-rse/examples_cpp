#include "rectangle.h"


Rectangle::Rectangle(double height, double width)
{
    this->height = height;
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    this->height = height;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::area() const
{
    return this->height * this->width;
}