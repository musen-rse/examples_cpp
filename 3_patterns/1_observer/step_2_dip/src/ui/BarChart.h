#ifndef bar_chart_h
#define bar_chart_h

#include "data.h"
#include "chart.h"

#include "window.h"

namespace tubs::ui
{

class BarChart : public Chart
{
public:
    BarChart(model::Data* data, tubs::ui::Window* window);
    void draw();

private:
    model::Data* data;
    tubs::ui::Window* window;
};


}


#endif
