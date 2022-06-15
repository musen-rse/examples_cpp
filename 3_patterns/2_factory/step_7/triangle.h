#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
    virtual void draw() override
    {
        const int length = 10;

        for (int y = 0; y <= length; y++) {
            for (int x = 0; x <= y; x++) {
                std::cout << "* ";
            }
            std::cout << "\n";
       }
    }
};

#endif // TRIANGLE_H
