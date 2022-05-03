#include "geometry_application.h"


GeometryApplication::GeometryApplication(Rectangle& rectangle) : rectangle(rectangle)
{

}

void GeometryApplication::run()
{
    double area = rectangle.area();
    std::cout << "Area of rectangle is: " << area << std::endl;
}
