#include "charts.h"

#include "utilities.h"

namespace tubs
{

ConsoleTableChart::ConsoleTableChart(std::string title)
{
    this->_title = title;
    this->_color = tubs::color::WHITE;
}

void ConsoleTableChart::draw(double value)
{
    _appendValue(value);
    _prepareDrawing();
    _printHeader();
    _printValues();
    _finishDrawing();
}

void ConsoleTableChart::setColor(std::string color)
{
    this->_color = color;
}

std::string ConsoleTableChart::getColor()
{
    return this->_color;
}

void ConsoleTableChart::_printHeader()
{
    std::cout << "=========== TABLE CHART ===========\n"; 
    std::cout << "Time recorded" << "\t\t" << this->_title << std::endl;
}

void ConsoleTableChart::_printValues()
{
    for(auto& value : _values) {
        std::cout << value.first << "\t" << value.second << "\n";
    }
}

void ConsoleTableChart::_appendValue(double value)
{
    if(_values.size() == 5)
        _values.pop_front();

    _values.push_back(std::pair(time::current_time_and_date(), value));
}

void ConsoleTableChart::_prepareDrawing()
{
    std::cout << this->_color;
}

void ConsoleTableChart::_finishDrawing()
{
    std::cout << tubs::color::RESET;
}

}