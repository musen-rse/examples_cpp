#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
    virtual void draw() override
    {
        const int length = 10;

       for (int y = 0; y <= length; y++) {
            for (int x = 0; x <= length; x++) {
                std::cout << "* ";
            }
            std::cout << "\n";
       }
    }
};

#endif // SQUARE_H
