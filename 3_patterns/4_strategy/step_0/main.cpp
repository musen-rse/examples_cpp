#include <iostream>

#include "Circle.h"

int main()
{
    Circle* circle = new Circle(10, 0, 0);
    circle->save("Circle");
    circle->draw();

    delete circle;

    return 0;
}
