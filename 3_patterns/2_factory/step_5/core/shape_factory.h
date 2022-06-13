#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "shape.h"

#include <string>

class ShapeFactory {
public:
    virtual ~ShapeFactory() = default;

    virtual Shape* create(std::string type) = 0;
};


#endif
