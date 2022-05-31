#ifndef SHAPES_INTERFACE_H
#define SHAPES_INTERFACE_H

struct Shape
{
    virtual ~Shape() {}

    virtual void draw() = 0;
};

#endif