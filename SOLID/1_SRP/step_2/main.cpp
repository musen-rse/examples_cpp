#include <iostream>
#include "core/rectangle.h"
#include "core/geometry_application.h"

#include "graphical_application.h"
#include "graphical_rectangle.h"


int main()
{
    Rectangle r (3.0, 4.0);
    GraphicalRectangle g_r(r);
    GraphicalApplication graphical(g_r);
    graphical.run();

    GeometryApplication geometry(r);
    geometry.run();

    return 0;
}
