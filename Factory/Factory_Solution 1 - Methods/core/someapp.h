#ifndef SOME_APP_H
#define SOME_APP_H

#include <memory>
#include <iostream>
#include <vector>

//#include "circle.h"
//#include "square.h"
#include "shapefactory.h"

class SomeApp {
    public:
    SomeApp(const ShapeFactory& shapeFactory) : shapeFactory(shapeFactory)
    { 
        
    }

    virtual void run()
    {
        std::cout<<"Some app is running ...\n\n";

        std::vector<std::shared_ptr<Shape>> shapes;
        // shapes.push_back(std::shared_ptr<Circle>(new Circle()));
        // shapes.push_back(std::shared_ptr<Square>(new Square()));

        shapes.push_back(shapeFactory.makeCircle());
        shapes.push_back(shapeFactory.makeSquare());
        shapes.push_back(shapeFactory.makeTriangle());

        for(auto shape : shapes)
            shape->draw();

    };

    private:
    const ShapeFactory& shapeFactory;
};

#endif // SOME_APP_H
