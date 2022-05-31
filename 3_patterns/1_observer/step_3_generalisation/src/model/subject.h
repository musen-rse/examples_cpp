#ifndef subject_h
#define subject_h

#include <string>
#include <map>
#include <vector>

#include "observer.h"

namespace tubs::model
{

class Subject
{
    public:
    virtual ~Subject() = default;

    virtual std::map<std::string, int> getValues() = 0;

    void add(Observer* chart);
    void remove(Observer* chart);

    protected:
    void notifyAll();

    private:
    std::vector<Observer*> observers;
};

}

#endif
