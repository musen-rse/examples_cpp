#include "graphical_application.h"

GraphicalApplication::GraphicalApplication(GraphicalRectangle& rectangle) : rectangle(rectangle)
{

}

void GraphicalApplication::run()
{
    rectangle.draw(color::BLUE);
}
