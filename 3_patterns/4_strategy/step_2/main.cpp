#include <iostream>

#include "XMLQtCircle.h"
#include "JsonConsoleCircle.h"

int main()
{
    Circle* circle = new XMLQtCircle(10, 0, 0);
    circle->save("XMLQtCircle");
    circle->draw();

    Circle* circle2 = new JsonConsoleCircle(10, 0, 0);
    circle2->save("JsonConsoleCircle");
    circle2->draw();


    delete circle;
    delete circle2;

    return 0;
}