#ifndef data_h
#define data_h

#include <string>
#include <map>

namespace tubs::ui {
    class TableChart;
    class BarChart;
}


namespace tubs::model
{

class Window;

class Data
{
public:
    void add(std::string key, int value);
    void change(std::string key, int delta);
    void addTableChart(ui::TableChart* chart);
    void addBarChart(ui::BarChart* chart);

    std::map<std::string, int> getValues();

private:
    std::map<std::string, int> values;

    ui::TableChart* tableChart;
    ui::BarChart* barChart;
};

}


#endif
