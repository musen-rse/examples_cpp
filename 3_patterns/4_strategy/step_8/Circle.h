#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <fstream>

#include "Shape.h"
#include "CircleSaver.h"

class Circle : public Shape {
public:
    Circle(int r, int x, int y,  CircleSaver* circleSaver) : radius(r), center_x(x), center_y(y), circleSaver(circleSaver) {}
    virtual ~Circle() {}

    virtual void save(std::string name) { circleSaver->save(name, this); }

    virtual void draw() = 0;

    int radius;
    int center_x;
    int center_y;

private:
    CircleSaver* circleSaver;
};

#endif // __CIRCLE_H__