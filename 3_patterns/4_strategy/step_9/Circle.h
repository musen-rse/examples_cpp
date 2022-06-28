#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <fstream>

#include "Shape.h"
#include "CircleSaverStrategy.h"
#include "CircleDrawerStrategy.h"

class Circle : public Shape {
public:
    Circle(int r, int x, int y,  CircleSaverStrategy* circleSaver, CircleDrawerStrategy* circleDrawer) : radius(r), center_x(x), center_y(y), circleSaver(circleSaver), circleDrawer(circleDrawer) {}
    virtual ~Circle() {}

    virtual void save(std::string name) { circleSaver->save(name, this); }

    virtual void draw() { circleDrawer->draw(this); };

    int radius;
    int center_x;
    int center_y;

private:
    CircleSaverStrategy* circleSaver;
    CircleDrawerStrategy* circleDrawer;
};

#endif // __CIRCLE_H__