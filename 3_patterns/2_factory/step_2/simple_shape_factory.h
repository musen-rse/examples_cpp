#ifndef SIMPLE_SHAPE_FACTORY_H
#define SIMPLE_SHAPE_FACTORY_H

#include "square.h"
#include "circle.h"


class SimpleShapeFactory {
public:
    Shape* createCircle() {
        return new Circle();
    }

    Shape* createSquare() {
        return new Square();
    }
};


#endif
