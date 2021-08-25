#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <vector>
#include <algorithm>

class Subject {
public:
    virtual void attachObserver(Observer* observer)
    {
        this->observers.push_back(observer);
    }

    virtual void detachObserver(Observer* observer)
    {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if(it != observers.end()) observers.erase(it);
    }

    virtual void updateObservers()
    {
        for (auto observer : observers) {
            observer->update(this);
        }
    }

protected:
    std::vector<Observer*> observers;
};

#endif // SUBJECT_H
