#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <string>

class Shape {
public:
    virtual ~Shape() {}

    virtual void save(std::string file) = 0;
    virtual void draw() = 0;
};

#endif // __SHAPE_H__
