#include <string>
#include <iostream>

class Circle
{
public:
    void translate(float dx, float dy)
    {
        this->center_x = this->center_x + dx;
        this->center_y = this->center_y + dx;
    }

    void scale(float factor)
    {
        this->radius = this->radius * factor;
    }

    void draw()
    {
        std::cout << "Circle with " <<
        "\n color: " << color <<
        "\n center: " << center_x << ", " << center_y <<
        "\n radius: " << radius <<
        "\n";
    }

    std::string color = "red";

private:
    float center_x = 0.0;
    float center_y = 0.0;
    float radius = 1.0;
};


class Square
{
public:
    void translate(float dx, float dy)
    {
        this->center_x = this->center_x + dx;
        this->center_y = this->center_y + dy;
    }

    void scale(float factor)
    {
        this->length = this->length * factor;
    }

    void draw()
    {
        std::cout << "Circle with " <<
        "\n color: " << color <<
        "\n center: " << center_x << ", " << center_y <<
        "\n radius: " << radius <<
        "\n";
    }

    std::string color = "red";

private:
    float center_x = 0.0;
    float center_y = 0.0;
    float length = 1.0;
};


class Triangle
{
public:
    void translate(float dx, float dy)
    {
        this->center_x = this->center_x + dx;
        this->center_y = this->center_y + dx;
    }

    void scale(float factor)
    {
        this->radius = this->radius * factor;
    }

    void draw()
    {
        std::cout << "Circle with " <<
        "\n color: " << color <<
        "\n center: " << center_x << ", " << center_y <<
        "\n radius: " << radius <<
        "\n";
    }

    std::string color = "red";

private:
    float center_x = 0.0;
    float center_y = 0.0;
    float radius = 1.0;
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
