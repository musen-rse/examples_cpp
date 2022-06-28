#ifndef __CIRCLESAVER_H__
#define __CIRCLESAVER_H__

#include <string>

class Circle;

class CircleSaver
{
public:
    virtual void save(std::string name, Circle* circle) = 0;
};

#endif // __CIRCLESAVER_H__