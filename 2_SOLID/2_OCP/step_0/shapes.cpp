#include "shapes.h"

Square::Square(int length) : length(length) {
    shapeType = ShapeType::square;
}


Circle::Circle(int radius) : radius(radius) {
    shapeType = ShapeType::circle;
}