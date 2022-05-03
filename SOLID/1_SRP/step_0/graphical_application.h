#ifndef __GRAPHICAL_APPLICATION_H__
#define __GRAPHICAL_APPLICATION_H__

#include "rectangle.h"

class GraphicalApplication
{
public:
    GraphicalApplication(Rectangle& rectangle);

    void run();

private:
    Rectangle& rectangle;
};

#endif // __GRAPHICAL_APPLICATION_H__