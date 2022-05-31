#include "subject.h"

#include <algorithm>


namespace tubs::model
{

    void Subject::add(Observer* observer)
    {
        observers.push_back(observer);
    }

    void Subject::remove(Observer* observer)
    {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void Subject::notifyAll()
    {
        for(Observer* observer : observers)
            observer->update();
    }

}
