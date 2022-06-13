#include "data.h"

#include "TableChart.h"


namespace tubs::model
{
    void Data::add(std::string key, int value)
    {
        values[key] = value;
        tableChart->draw();
    }

    void Data::change(std::string key, int delta)
    {
        int new_value = values[key] + delta;

        if(new_value <= 50 && new_value >= 0)
            values[key] = new_value;

        tableChart->draw();
    }

    std::map<std::string, int> Data::getValues()
    {
        return values;
    }

    void Data::addTableChart(ui::TableChart* chart)
    {
        this->tableChart = chart;
    }

}
