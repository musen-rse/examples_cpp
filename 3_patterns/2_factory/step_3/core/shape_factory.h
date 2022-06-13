#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "shape.h"

class ShapeFactory {
public:
    virtual ~ShapeFactory() = default;

    virtual Shape* createCircle() = 0;
    virtual Shape* createSquare() = 0;
};


#endif
