#ifndef __CONSOLECIRCLEDRAWER_H__
#define __CONSOLECIRCLEDRAWER_H__

#include <iostream>
#include <cmath>

#include "CircleDrawerStrategy.h"

#include "Circle.h"

class ConsoleCircleDrawer : public CircleDrawerStrategy
{
public:
    virtual void draw(Circle* circle) {
        const int width = circle->radius;
        const int length = circle->radius * 1.5;

        for (int y = width; y >= -width; y -= 2) {
            for (int x = -length; x <= length; x++) {
                if ((int)(std::sqrt(std::pow(x, 2) + std::pow(y, 2))) == circle->radius)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }
};

#endif // __CONSOLECIRCLEDRAWER_H__