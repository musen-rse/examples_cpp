#include <iostream>
#include "rectangle.h"

class GeometryApplication
{
    public:
    GeometryApplication(Rectangle& rectangle) : rectangle(rectangle)
    {

    }

    void run()
    {
        double area = rectangle.area();
        std::cout << "Area of rectangle is: " << area << std::endl;
    }

    private:
    Rectangle& rectangle;
};

class GraphicalApplication
{
    public:
    GraphicalApplication(Rectangle& rectangle) : rectangle(rectangle)
    {

    }

    void run()
    {
        rectangle.draw();
    }

    private:
    Rectangle& rectangle;
};

int main()
{
    Rectangle r (3.0, 4.0);

    GraphicalApplication graphical(r);
    graphical.run();

    GeometryApplication geometry(r);
    geometry.run();

    return 0;
}
