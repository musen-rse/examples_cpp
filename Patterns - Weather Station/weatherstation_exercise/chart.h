#ifndef CHART_H
#define CHART_H

#include <list>
#include <string>

namespace tubs
{

using TimeValuePair = std::pair<std::string, double>;

class ConsoleTableChart
{
public:
    ConsoleTableChart();
    void draw(double value);

private:
    std::list<TimeValuePair> values;
};

}

#endif
