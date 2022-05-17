#ifndef SHAPES_H
#define SHAPES_H

enum class ShapeType {circle, square};

class Shape
{
public:
    ShapeType shapeType;
};

class Circle : public Shape
{
public:
    Circle(int radius) : radius(radius) {
        shapeType = ShapeType::circle;
    }

    int getRadius() const
    {
        return radius;
    }

private:
    int radius;
};

class Square : public Shape
{
public:
    Square(int length) : length(length) {
        shapeType = ShapeType::square;
    }

    int getLength() const
    {
        return length;
    }

private:
    int length;
};


#endif
