#include "someapp.h"
#include "shapefactoryimp.h"

int main(int argc, char *argv[])
{
    std::cout << "\nSome geometry app!\n\n";
    
    ShapeFactoryImp factory;
    SomeApp app(factory);

    app.run();

    return 0;
}
