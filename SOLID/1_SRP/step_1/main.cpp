#include <iostream>
#include "rectangle.h"

#include "graphical_application.h"
#include "geometry_application.h"


int main()
{
    Rectangle r (3.0, 4.0);

    GraphicalApplication graphical(r);
    graphical.run();

    GeometryApplication geometry(r);
    geometry.run();

    return 0;
}
