#ifndef chart_h
#define chart_h

#include "observer.h"

namespace tubs::model
{

class Chart : public Observer
{
public:
    virtual ~Chart() = default;
};


}



#endif
