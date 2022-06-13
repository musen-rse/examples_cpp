#ifndef SOME_APP_H
#define SOME_APP_H

#include <memory>
#include <iostream>
#include <vector>

#include "../simple_shape_factory.h"

class Application {
public:
    virtual void run(SimpleShapeFactory* shapeFactory)
    {
        std::cout << "app is running ...\n\n";

        std::vector<Shape*> shapes;

        std::cout << "Circle: 0" << std::endl;
        std::cout << "Square: 1" << std::endl;
        std::cout << "Any other to continue ..." << std::endl;
        while(true) {
            std::cout << "Choose shape number: ";
            int i;

            std::cin >> i;

            if(i == 0)
                shapes.push_back(shapeFactory->createCircle());
            else if(i == 1)
                shapes.push_back(shapeFactory->createSquare());
            else
                break;
        }

        for(auto shape : shapes)
            shape->draw();

        for(auto shape : shapes)
            delete shape;
    };

};

#endif // SOME_APP_H
