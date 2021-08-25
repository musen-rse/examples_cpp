#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <string>
#include <iostream>
#include <vector>

class View;

class DataModel {
public:

    std::string getData();
    void setData(std::string data);
    void attachView(View* view);
    void updateViews();

private:
    std::string itsData = "default data";
    std::vector<View*> itsViews;
};

#endif // DATAMODEL_H