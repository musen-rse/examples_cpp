#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <functional>
#include <string>

#include "Shape.h"

#include "CircleDrawerStrategy.h"
#include "CircleSaverStrategy.h"

class Circle : public Shape {
public:
    Circle(int r, int x, int y, CircleSaverStrategy circleSaverStrategy, CircleDrawerStrategy circleDrawerStrategy)
    : radius(r), center_x(x), center_y(y), circleSaverStrategy(circleSaverStrategy), circleDrawerStrategy(circleDrawerStrategy) {}
    virtual ~Circle() {}

    virtual void save(std::string name) { circleSaverStrategy(name, this); }

    virtual void draw() { circleDrawerStrategy(this); };

    int radius;
    int center_x;
    int center_y;

private:
    CircleSaverStrategy circleSaverStrategy;
    CircleDrawerStrategy circleDrawerStrategy;
};

#endif // __CIRCLE_H__