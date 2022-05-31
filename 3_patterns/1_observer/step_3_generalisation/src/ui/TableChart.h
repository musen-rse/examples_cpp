#ifndef table_chart_h
#define table_chart_h

#include "data.h"
#include "chart.h"

#include "window.h"

namespace tubs::ui
{

class TableChart : public model::Chart
{
public:
    TableChart(model::Data* data, tubs::ui::Window* window);
    void update();

private:
    model::Data* data;
    tubs::ui::Window* window;
};

}


#endif
