#include "canvas.h"

#include <sstream>

namespace tubs::ui
{

Canvas::Canvas(int height, int width, int startX, int startY) :
Window(height, width, startX, startY)
{
    clear();
}

void Canvas::moveCursor(int x, int y)
{
    Window::moveCursor(2*x, y);
}

int Canvas::width(){ return (getmaxx(_win)/2-2); }
int Canvas::height(){ return (getmaxy(_win)-2); }

void Canvas::clear()
{
    Window::clear();
    box(_win, ACS_VLINE, ACS_HLINE);
    Window::moveCursor(0, 0);
    print("X");
    std::stringstream output;
    output << "Height:" << this->height() <<" Width:" << this->width();
    Window::moveCursor(1, 1);
    print(output.str().c_str());
}

}
