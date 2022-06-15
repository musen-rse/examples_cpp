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
            std::cout << "\nChoose shape number: ";
            int i;

            std::cin >> i;
            std::cout << "\n";
            Shape* shape;
            if(i == 0)
                shape = shapeFactory->createCircle();
            else if(i == 1)
                shape = shapeFactory->createSquare();
            else
                break;

            if(shape) {
                shape->draw();
                delete shape;
            }
        }
    };

};

#endif // SOME_APP_H
