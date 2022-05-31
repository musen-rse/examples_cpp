#include "data.h"

#include <algorithm>

#include "chart.h"

namespace tubs::model
{
    void Data::add(std::string key, int value)
    {
        values[key] = value;

        notifyAll();
    }

    void Data::change(std::string key, int delta)
    {
        int new_value = values[key] + delta;

        if(new_value <= 50 && new_value >= 0)
            values[key] = new_value;

        notifyAll();
    }

    std::map<std::string, int> Data::getValues()
    {
        return values;
    }

}
