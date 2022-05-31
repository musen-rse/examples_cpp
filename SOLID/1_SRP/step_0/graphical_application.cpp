#include "graphical_application.h"

int main()
{
    Rectangle r (3.0, 4.0);

    GraphicalApplication graphical(r);
    graphical.run();

    return 0;
}

GraphicalApplication::GraphicalApplication(Rectangle& rectangle) : rectangle(rectangle)
{

}

void GraphicalApplication::run()
{
    rectangle.draw();
}

