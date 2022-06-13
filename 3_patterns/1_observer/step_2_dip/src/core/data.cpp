#include "data.h"

#include "chart.h"

namespace tubs::model
{
    void Data::add(std::string key, int value)
    {
        values[key] = value;

        for(ui::Chart* chart : charts)
            chart->draw();
    }

    void Data::change(std::string key, int delta)
    {
        int new_value = values[key] + delta;

        if(new_value <= 50 && new_value >= 0)
            values[key] = new_value;

        for(ui::Chart* chart : charts)
            chart->draw();
    }

    std::map<std::string, int> Data::getValues()
    {
        return values;
    }

    void Data::addChart(ui::Chart* chart)
    {
        this->charts.push_back(chart);
    }

}
