#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <fstream>

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(int r, int x, int y) : radius(r), center_x(x), center_y(y) {}
    virtual ~Circle() {}

    virtual void save(std::string name) = 0;

    virtual void draw() = 0;

    int radius;
    int center_x;
    int center_y;
};

#endif // __CIRCLE_H__