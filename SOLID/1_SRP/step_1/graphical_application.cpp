#include "graphical_application.h"

GraphicalApplication::GraphicalApplication(Rectangle& rectangle) : rectangle(rectangle)
{

}

void GraphicalApplication::run()
{
    rectangle.draw(color::BLUE);
}
