#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Draw a circle."<< std::endl;
    }
};

#endif // CIRCLE_H