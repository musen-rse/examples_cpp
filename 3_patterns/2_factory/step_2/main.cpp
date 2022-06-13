#include "core/application.h"

#include "simple_shape_factory.h"

int main(int argc, char *argv[])
{
    std::cout << "\nSome geometry app!\n\n";

    SimpleShapeFactory shapeFactory;

    Application app;

    app.run(&shapeFactory);

    return 0;
}
