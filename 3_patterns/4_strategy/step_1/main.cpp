#include <iostream>

#include "QtCircle.h"
#include "ConsoleCircle.h"

int main()
{
    Circle* circle = new ConsoleCircle(10, 0, 0);
    circle->save("ConsoleCircle");
    circle->draw();

    Circle* circle2 = new QtCircle(10, 0, 0);
    circle2->save("QtCircle");
    circle2->draw();

    delete circle;
    delete circle2;

    return 0;
}