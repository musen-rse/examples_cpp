#include <iostream>
#include "core/rectangle.h"
#include "graphicalRectangle.h"


class GraphicalApplication
{
    public:
    GraphicalApplication(GraphicalRectangle& rectangle) : rectangle(rectangle)
    {

    }

    void run()
    {
        rectangle.draw();
    }

    private:
    GraphicalRectangle& rectangle;
};

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
