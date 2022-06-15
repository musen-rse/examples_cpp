#include "core/application.h"

#include "simple_shape_factory.h"
#include "advanced_shape_factory.h"

int main(int argc, char *argv[])
{
    std::cout << "\nSome geometry app!\n\n";

    // AdvancedShapeFactory shapeFactory;
     SimpleShapeFactory shapeFactory;

    Application app;

    app.run(&shapeFactory);

    return 0;
}
