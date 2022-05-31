#include <iostream>

#include "core/application.h"

int main()
{
    tubs::Application app = tubs::Application();

    app.run();

    std::cin.get();

    app.stop();

    return 0;
}
