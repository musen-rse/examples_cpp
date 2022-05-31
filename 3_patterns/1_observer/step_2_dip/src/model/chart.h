#ifndef chart_h
#define chart_h

namespace tubs::ui
{

class Chart
{
public:
    virtual ~Chart() = default;
    virtual void draw() = 0;
};


}



#endif
