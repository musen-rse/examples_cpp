#ifndef __CONSOLECIRCLE_H__
#define __CONSOLECIRCLE_H__

// write to console
#include <iostream>
#include <cmath>

#include "Circle.h"

class ConsoleCircle : public Circle {
public:
    ConsoleCircle(int r, int x, int y) : Circle(r,x,y) {}

    virtual void draw() {
        const int width = radius;
        const int length = radius * 1.5;

        for (int y = width; y >= -width; y -= 2) {
            for (int x = -length; x <= length; x++) {
                if ((int)(std::sqrt(std::pow(x, 2) + std::pow(y, 2))) == radius)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }

    virtual void save(std::string name) = 0;
};


#endif // __CONSOLECIRCLE_H__