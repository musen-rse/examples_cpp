#include <iostream>

#include "Circle.h"

#include "XMLCircleSaver.h"
#include "JSONCircleSaver.h"

#include "QtCircleDrawer.h"
#include "ConsoleCircleDrawer.h"

int main()
{
    XMLCircleSaver* xmlCircleSaver = new XMLCircleSaver();
    JSONCircleSaver* jsonCircleSaver = new JSONCircleSaver();

    QtCircleDrawer* qtCircleDrawer = new QtCircleDrawer();
    ConsoleCircleDrawer* consoleCircleDrawer = new ConsoleCircleDrawer();

    Circle* circle = new Circle(10, 0, 0, xmlCircleSaver, qtCircleDrawer);
    circle->save("XMLQtCircle");
    circle->draw();

    Circle* circle2 = new Circle(10, 0, 0, jsonCircleSaver, consoleCircleDrawer);
    circle2->save("JSONConsoleCircle");
    circle2->draw();


    delete circle;
    delete circle2;

    return 0;
}