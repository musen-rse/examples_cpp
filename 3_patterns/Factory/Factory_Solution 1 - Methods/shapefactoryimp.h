#ifndef SHAPEFACTORYIMP_H_
#define SHAPEFACTORYIMP_H_

#include "shapefactory.h"

#include "circle.h"
#include "square.h"
#include "triangle.h"

class ShapeFactoryImp : public ShapeFactory
{
public:
    virtual std::shared_ptr<Shape> makeCircle() const override 
    {
        return std::shared_ptr<Circle>(new Circle());
    }
    
    virtual std::shared_ptr<Shape> makeSquare() const override 
    {
        return std::shared_ptr<Square>(new Square());
    }

    virtual std::shared_ptr<Shape> makeTriangle() const override 
    {
        return std::shared_ptr<Square>(new Square());
    }
};

#endif