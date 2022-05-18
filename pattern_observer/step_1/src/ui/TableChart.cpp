#include "TableChart.h"
#include <sstream>

namespace tubs::ui
{



TableChart::TableChart(model::Data* data, tubs::ui::Window* window) : data(data), window(window)
{

}

void TableChart::draw()
{
    window->clear();

    std::stringstream output;


    auto values = data->values;

    for(const auto& v : values) {
        output << v.first << " \t| \t" << v.second << "\n";
    }

    window->println(output.str().c_str());

    window->refresh();
}

}
