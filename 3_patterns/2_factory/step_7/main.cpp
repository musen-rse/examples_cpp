#include "core/application.h"

#include "simple_shape_factory.h"
#include "qt_shape_factory.h"

int main(int argc, char *argv[])
{
     QtShapeFactory shapeFactory;
    // SimpleShapeFactory shapeFactory;

    Application app;

    app.run(&shapeFactory);

    return 0;
}
