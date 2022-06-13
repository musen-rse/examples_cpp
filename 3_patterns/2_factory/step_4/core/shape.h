#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() = 0;
};

#endif // SHAPE_H
