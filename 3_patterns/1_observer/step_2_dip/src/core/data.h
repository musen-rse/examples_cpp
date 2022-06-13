#ifndef data_h
#define data_h

#include <string>
#include <map>
#include <vector>

namespace tubs::ui {
    class Chart;
}


namespace tubs::model
{

class Window;

class Data
{
public:
    void add(std::string key, int value);
    void change(std::string key, int delta);
    void addChart(ui::Chart* chart);

    std::map<std::string, int> getValues();

private:
    std::map<std::string, int> values;
    std::vector<ui::Chart*> charts;
};

}


#endif
