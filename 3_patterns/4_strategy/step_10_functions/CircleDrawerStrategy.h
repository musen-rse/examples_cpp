#ifndef __CIRCLEDRAWERSTRATEGY_H__
#define __CIRCLEDRAWERSTRATEGY_H__

class Circle;

using CircleDrawerStrategy = std::function<void(Circle*)>;

#endif // __CIRCLEDRAWERSTRATEGY_H__