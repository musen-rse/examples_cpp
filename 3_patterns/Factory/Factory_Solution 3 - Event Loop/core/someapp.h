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

        while (true)
        {
            drawMenu();
            std::string choice = readUserInput();
            shapes.push_back(shapeFactory.makeShape(choice));
            drawShapes(shapes);
        }
    };

    private:
    std::string readUserInput() {
        std::string input;
        getline (std::cin, input);
        return input;
    }

    void drawMenu() {
        std::cout<<"Choose from one of the following types:\n";
            
        for(auto type : shapeFactory.getShapeTypes()) {
            std::cout << type << std::endl;
        }
        std::cout<<"\nYour choice: ";
    }

    void drawShapes(std::vector<std::shared_ptr<Shape>> shapes) {
        std::cout << "\n------------------------\n";
        std::cout << "Drawing shapes ...\n";
        for(auto shape : shapes)
            shape->draw();
        std::cout << "------------------------\n\n";
    }

    private:
    const ShapeFactory& shapeFactory;
};

#endif // SOME_APP_H
