#include "graphical_application.h"

int main()
{
    Rectangle r (3.0, 4.0);

    GraphicalRectangle g_r(r);
    GraphicalApplication graphical(g_r);
    graphical.run();

    return 0;
}


GraphicalApplication::GraphicalApplication(GraphicalRectangle& rectangle) : rectangle(rectangle)
{

}

void GraphicalApplication::run()
{
    rectangle.draw(color::BLUE);
}
