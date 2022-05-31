#ifndef GRAPHICAL_RECTANGLE_H
#define GRAPHICAL_RECTANGLE_H
#include "core/rectangle.h"

namespace color
{
// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
const std::string RESET ("\033[0m");
const std::string RED ("\033[1;31m");
const std::string BLUE ("\033[1;34m");
const std::string YELLOW ("\033[1;33m");
const std::string GREEN ("\033[1;32m");
}

class GraphicalRectangle
{
    public:
    GraphicalRectangle(Rectangle& rectangle);

    void draw(std::string color);

    private:
    Rectangle& rectangle;
};

#endif