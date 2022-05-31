#ifndef CORE_H
#define CORE_H
#include <memory>
#include <vector>

#include "../shapes.h"


class Application
{
public:
    Application(std::vector<Shape*> shapes);

    void drawAllShapes();


private:
    std::vector<Shape*> shapes;
};



#endif