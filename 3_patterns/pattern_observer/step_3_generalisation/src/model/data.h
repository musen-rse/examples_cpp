#ifndef data_h
#define data_h

#include <string>
#include <map>
#include <vector>

#include "subject.h"

namespace tubs::ui {
    class Chart;
}


namespace tubs::model
{

class Window;

class Data : public Subject
{
public:
    void add(std::string key, int value);
    void change(std::string key, int delta);

    std::map<std::string, int> getValues();

private:
    std::map<std::string, int> values;
};

}


#endif
