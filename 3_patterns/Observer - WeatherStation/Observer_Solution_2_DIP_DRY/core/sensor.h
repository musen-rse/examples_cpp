#ifndef SENSOR_H
#define SENSOR_H

#include "view.h"
#include <vector>
#include <algorithm>

class Sensor {
public:
    virtual void attachView(View* view)
    {
        this->itsViews.push_back(view);
    }

    virtual void detachView(View* view)
    {
        auto it = std::find(itsViews.begin(), itsViews.end(), view);
        if(it != itsViews.end()) itsViews.erase(it);
    }

    virtual void updateViews()
    {
        for (auto view : itsViews) {
            view->update(getData());
        }
    }

    virtual std::string getData() = 0;

protected:
    std::vector<View*> itsViews;
};

#endif // SENSOR_H
