#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>

#include "shape.h"

class Circle : public Shape {
public:
    virtual void draw() override
    {

        const int r = 10;

        const int width = r;
        const int length = r * 1.5;

        for (int y = width; y >= -width; y -= 2) {
            for (int x = -length; x <= length; x++) {

                if ((int)pth(x, y) == r)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }

private:
    int pth(int x, int y)
    {
        return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
    }
};

#endif // CIRCLE_H
