#ifndef __CIRCLEDRAWERSTRATEGY_H__
#define __CIRCLEDRAWERSTRATEGY_H__

class Circle;

class CircleDrawerStrategy
{
public:
    virtual ~CircleDrawerStrategy() {};
    virtual void draw(Circle* circle) = 0;
};

#endif // __CIRCLEDRAWERSTRATEGY_H__