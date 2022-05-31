#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Draw a triangle."<< std::endl;
    }
};

#endif // TRIANGLE_H
