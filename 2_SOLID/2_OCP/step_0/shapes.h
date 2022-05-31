#ifndef SHAPES_H
#define SHAPES_H

enum class ShapeType {circle, square};

struct Shape
{
    ShapeType shapeType;
};

struct Circle : public Shape
{
public:
    Circle(int radius);

    int radius;
};

struct Square : public Shape
{
public:
    Square(int length);

    int length;
};


#endif
