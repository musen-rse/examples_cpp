#include <iostream>

#include "Circle.h"

#include "XMLCircleSaver.h"
#include "JSONCircleSaver.h"

#include "QtCircleDrawer.h"
#include "ConsoleCircleDrawer.h"

int main()
{
    Circle* circle = new Circle(10, 0, 0, createXMLCircleSaverStrategy(), createQtCircleSaverStrategy());
    circle->save("XMLQtCircle");
    circle->draw();

    Circle* circle2 = new Circle(10, 0, 0, createJSONCircleSaverStrategy(), createConsoleCircleDrawerStrategy());
    circle2->save("JSONConsoleCircle");
    circle2->draw();


    delete circle;
    delete circle2;

    return 0;
}