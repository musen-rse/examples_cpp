#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include <memory>
#include "shape.h"

class ShapeFactory
{
    public:
    virtual ~ShapeFactory() = default;

    virtual std::shared_ptr<Shape> makeCircle() const = 0;
    virtual std::shared_ptr<Shape> makeSquare() const = 0;
    virtual std::shared_ptr<Shape> makeTriangle() const = 0; 
};

#endif