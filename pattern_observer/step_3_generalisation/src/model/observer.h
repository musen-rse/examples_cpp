#ifndef observer_h
#define observer_h

#include <string>
#include <map>

#include "observer.h"

namespace tubs::model
{

class Observer
{
    public:
    virtual ~Observer() = default;

    virtual void update() = 0;
};

}

#endif
