#ifndef SHAPEFACTORYIMP_H_
#define SHAPEFACTORYIMP_H_


#include <string>

#include "shapefactory.h"

#include "circle.h"
#include "square.h"
#include "triangle.h"

class ShapeFactoryImp : public ShapeFactory
{
public:
    virtual std::shared_ptr<Shape> makeShape(std::string type) const override 
    {
      if (type == "Circle") return std::shared_ptr<Circle>(new Circle());
      else if (type == "Square") return std::shared_ptr<Square>(new Square());
      else if (type == "Triangle") return std::shared_ptr<Triangle>(new Triangle());

      std::cout<<"Error!";
      return std::shared_ptr<Shape>();
    }
    
};

#endif