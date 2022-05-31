#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Draw a square."<< std::endl;
    }
};

#endif // SQUARE_H
