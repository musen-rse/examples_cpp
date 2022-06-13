#ifndef SIMPLE_SHAPE_FACTORY_H
#define SIMPLE_SHAPE_FACTORY_H

#include "square.h"
#include "circle.h"
#include "triangle.h"

#include "core/shape_factory.h"


class SimpleShapeFactory : public ShapeFactory {
public:
    Shape* createCircle() {
        return new Circle();
    }

    Shape* createSquare() {
        return new Square();
    }

    Shape* createTriangle() {
        return new Triangle();
    }
};


#endif
