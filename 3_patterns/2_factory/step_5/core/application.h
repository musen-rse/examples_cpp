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

        std::cout << "Circle: 0" << std::endl;
        std::cout << "Square: 1" << std::endl;
        std::cout << "Triangle: 2" << std::endl;
        std::cout << "Any other to continue ..." << std::endl;

         while(true) {
            std::cout << "\nChoose shape number: ";
            int i;

            std::cin >> i;

            if (i < 0 || i > 2 || !std::cin)
               break;

            std::cout << "\n";
            std::cout << "\n";
            Shape* shape;
            if(i == 0)
                shape = shapeFactory->create("Circle");
            else if(i == 1)
                shape = shapeFactory->create("Square");
            else if(i == 2)
                shape = shapeFactory->create("Triangle");

            if(shape) {
                shape->draw();
                delete shape;
            }
        }
    };

};

#endif // SOME_APP_H
