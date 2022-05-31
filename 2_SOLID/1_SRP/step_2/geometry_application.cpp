#include "geometry_application.h"

int main()
{
    Rectangle r (3.0, 4.0);

    GeometryApplication geometry(r);
    geometry.run();

    return 0;
}

GeometryApplication::GeometryApplication(Rectangle& rectangle) : rectangle(rectangle)
{

}

void GeometryApplication::run()
{
    double area = rectangle.area();
    std::cout << "Area of rectangle is: " << area << std::endl;
}
