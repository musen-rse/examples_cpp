#ifndef SIMPLE_SHAPE_FACTORY_H
#define SIMPLE_SHAPE_FACTORY_H

#include "square.h"
#include "circle.h"
#include "triangle.h"

#include "core/shape_factory.h"


class SimpleShapeFactory : public ShapeFactory {
public:
    Shape* create(std::string type) {
        if (type == "Circle") {
            return new Circle();
        } else if (type == "Square") {
            return new Square();
        } else if (type == "Triangle") {
            return new Triangle();
        }

        return nullptr;
    }


};


#endif
