#include <iostream>


class Shape {
public:
    virtual void save() = 0;

public:
    int radius = 42;
};

class JsonCircle {
public:
 virtual void save(Shape* circle) {
    std::cout << "JSON: " << circle->radius << std::endl;
 }
};

class QtCircle : public Shape, public JsonCircle {
public:
void save() {
   JsonCircle::save(this);
 }
};

class ConsoleCircle : public Shape, public JsonCircle {
public:
void save() {
   JsonCircle::save(this);
 }
};

int main()
{
    std::cout << "Start Program" << std::endl;

    QtCircle circle;
    circle.save();

    //Singleton::getInstance();


    std::cout << "End Program" << std::endl;
    return 0;
}