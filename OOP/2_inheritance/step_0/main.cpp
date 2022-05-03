#include <string>
#include <iostream>


class Circle
{
public:
    void translate(double dx, double dy)
    {
        centerX += dx;
        centerY += dx;
    }

    void scale(double factor)
    {
        radius *= factor;
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
int main() {

    Circle circle;

    circle.translate(2, 2);
    circle.draw();

    return 0;
}
