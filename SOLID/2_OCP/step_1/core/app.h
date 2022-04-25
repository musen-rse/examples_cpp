#ifndef CORE_H
#define CORE_H
#include <memory>
#include <vector>

#include "../shapes.h"


class Application
{
    public:
    Application(std::vector<std::shared_ptr<Shape>> shapes) : shapes(shapes)
    {

    }

    void drawAllShapes()
    {
        for (std::shared_ptr<Shape> shape : shapes)
            shape->draw();
    }


    private:
    std::vector<std::shared_ptr<Shape>> shapes;
};



#endif