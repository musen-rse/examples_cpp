#ifndef SOME_APP_H
#define SOME_APP_H

#include <memory>
#include <iostream>
#include <vector>

#include "circle.h"
#include "square.h"

class SomeApp {
public:
    virtual void run()
    {
        std::cout<<"Some app is running ...\n\n";

        std::vector<std::shared_ptr<Shape>> shapes;
        shapes.push_back(std::shared_ptr<Circle>(new Circle()));
        shapes.push_back(std::shared_ptr<Square>(new Square()));
        
        for(auto shape : shapes)
            shape->draw();
    };
};

#endif // SOME_APP_H
