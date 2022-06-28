#include <iostream>

#include "XMLQtCircle.h"
#include "JSONConsoleCircle.h"

int main()
{
    Circle* circle = new XMLQtCircle(10, 0, 0);
    circle->save("XMLQtCircle");
    circle->draw();

    Circle* circle2 = new JSONConsoleCircle(10, 0, 0);
    circle2->save("JSONConsoleCircle");
    circle2->draw();


    delete circle;
    delete circle2;

    return 0;
}