#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
public:
    virtual void save(std::string name) = 0;
    virtual void draw() = 0;
};

#endif // __SHAPE_H__
