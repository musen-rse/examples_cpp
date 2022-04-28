#include "chart.h"

#include "utilities.h"

namespace tubs
{

ConsoleTableChart::ConsoleTableChart()
{

}

void ConsoleTableChart::draw(double value)
{
    system("clear");

    if(values.size() == 5)
        values.pop_front();

    values.push_back(std::pair(time::current_time_and_date(), value));


    for(auto& value : values) {
        std::cout << value.first << "  " << value.second << "\n";
    }
}

}