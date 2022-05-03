#ifndef __GEOMETRY_APPLICATION_H__
#define __GEOMETRY_APPLICATION_H__

#include "rectangle.h"

class GeometryApplication
{
public:
    GeometryApplication(Rectangle& rectangle);

    void run();

private:
    Rectangle& rectangle;
};

#endif // __GEOMETRY_APPLICATION_H__