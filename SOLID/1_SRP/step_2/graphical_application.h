#ifndef __GRAPHICAL_APPLICATION_H__
#define __GRAPHICAL_APPLICATION_H__

#include "graphical_rectangle.h"

class GraphicalApplication
{
public:
    GraphicalApplication(GraphicalRectangle& rectangle);

    void run();

private:
    GraphicalRectangle& rectangle;
};

#endif // __GRAPHICAL_APPLICATION_H__