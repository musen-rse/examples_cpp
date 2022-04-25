#include <iostream>
#include <vector>
#include <memory>

#include "core/app.h"


class Square : public Rectangle
{
    public:
    Square(int width) : Rectangle(width, width) {

    }

    void setHeight(double height)
    {
        this->height = height;
        this->width = height;
    }

    void setWidth(double width)
    {
        this->width = width;
        this->height = width;
    }
};


int main()
{

    std::vector<std::shared_ptr<Rectangle>> rectangles;
    rectangles.push_back(std::shared_ptr<Rectangle>(new Rectangle(2.0, 8.0)));
    rectangles.push_back(std::shared_ptr<Rectangle>(new Square(4.0)));

    Application app(rectangles);
    app.run();

}
