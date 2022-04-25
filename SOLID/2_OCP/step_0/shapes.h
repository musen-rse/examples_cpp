#ifndef SHAPES_H
#define SHAPES_H

struct Shape { virtual ~Shape() {} };

class Circle : public Shape
{
    public:
    Circle(int radius) : radius(radius) {

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

    }

    int getLength() const
    {
        return length;
    }

    private:
    int length;
};


#endif
