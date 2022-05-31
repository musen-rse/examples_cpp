#include <string>
#include <iostream>



class Circle
{
public:
    void translate(double dx, double dy)
    {
        centerX = centerX + dx;
        centerY = centerY + dy;
    }

    void scale(double factor)
    {
        radius = radius * factor;
    }

    void draw()
    {
        std::cout << "Circle with " <<
        "\n color: " << color <<
        "\n center: " << centerX << ", " << centerY <<
        "\n radius: " << radius <<
        "\n";
    }

    std::string color = "red";

private:
    double centerX = 0.0;
    double centerY = 0.0;
    double radius = 1.0;
};


/*
/ Application
*/
int main()
{
    Circle* circle = new Circle();

    circle->draw();

    circle->translate(2, 2);

    circle->draw();

    circle->scale(3.5);

    circle->draw();

    delete circle;

    return 0;
}
