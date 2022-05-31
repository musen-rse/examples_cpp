#include "BarChart.h"
#include <sstream>

namespace tubs::ui
{



BarChart::BarChart(model::Data* data, tubs::ui::Window* window) : data(data), window(window)
{

}

void BarChart::draw()
{
    window->clear();
    std::stringstream output;

    for(const auto& v : data->getValues()) {
        output << v.first << " \t";
        for(int i = 0; i < v.second; i++) {
            output << "#";
        }
        output << "\n";
    }

    window->println(output.str().c_str());

    window->refresh();
}

}
