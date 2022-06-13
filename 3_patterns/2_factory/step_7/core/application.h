#ifndef SOME_APP_H
#define SOME_APP_H

#include <memory>
#include <iostream>
#include <vector>

#include "shape_factory.h"

class Application {
public:
    virtual void run(ShapeFactory* shapeFactory)
    {
        std::cout << "app is running ...\n\n";

        std::vector<Shape*> shapes;

        std::vector<std::string> shapeTypes = shapeFactory->getShapeTypes();

        for(int i = 0; i < shapeTypes.size(); i++) {
            std::cout << shapeTypes[i] << ": " << i << std::endl;
        }
        std::cout << "Any other to continue ..." << std::endl;

        while(true) {
            std::cout << "Choose shape number: ";
            int i;

            std::cin >> i;

            if (i < 0 || i >= shapeTypes.size())
                break;

            shapes.push_back(shapeFactory->create(shapeTypes[i]));
        }

        for(auto shape : shapes)
            shape->draw();

        for(auto shape : shapes)
            delete shape;
    };

};

#endif // SOME_APP_H
