#include <iostream>

#include "XMLQtCircle.h"
#include "JSONConsoleCircle.h"

#include "XMLCircleSaver.h"
#include "JSONCircleSaver.h"

int main()
{
    XMLCircleSaver* xmlCircleSaver = new XMLCircleSaver();
    JSONCircleSaver* jsonCircleSaver = new JSONCircleSaver();

    Circle* circle = new QtCircle(10, 0, 0, xmlCircleSaver);
    circle->save("XMLQtCircle");
    circle->draw();

    Circle* circle2 = new ConsoleCircle(10, 0, 0, jsonCircleSaver);
    circle2->save("JSONConsoleCircle");
    circle2->draw();


    delete circle;
    delete circle2;

    return 0;
}