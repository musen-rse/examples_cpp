#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include <memory>
#include <string>
#include "shape.h"

class ShapeFactory
{
    public:
    virtual ~ShapeFactory() = default;

    virtual std::vector<std::string> getShapeTypes() const = 0;
    virtual std::shared_ptr<Shape> makeShape(std::string type) const = 0;
};

#endif