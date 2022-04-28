#ifndef CHART_H
#define CHART_H

#include <list>
#include <string>

namespace tubs::color
{
// https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
const std::string RESET ("\033[0m");
const std::string RED ("\033[1;31m");
const std::string BLUE ("\033[1;34m");
const std::string YELLOW ("\033[1;33m");
const std::string GREEN ("\033[1;32m");
const std::string WHITE ("\033[1;37m");
}

namespace tubs
{

using TimeValuePair = std::pair<std::string, double>;

class ConsoleTableChart
{
public:
    ConsoleTableChart(std::string title);
    void draw(double value);
    void setColor(std::string color);
    std::string getColor();

private:
    void _printHeader();
    void _printValues();
    void _appendValue(double value);
    void _prepareDrawing();
    void _finishDrawing();

private:
    std::list<TimeValuePair> _values;
    std::string _title;
    std::string _color;
};

}

#endif
