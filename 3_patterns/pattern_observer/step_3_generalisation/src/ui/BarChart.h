#ifndef bar_chart_h
#define bar_chart_h

#include "data.h"
#include "chart.h"

#include "window.h"

namespace tubs::ui
{

class BarChart : public model::Chart
{
public:
    BarChart(model::Data* data, tubs::ui::Window* window);
    void update();

private:
    model::Data* data;
    tubs::ui::Window* window;
};


}


#endif
