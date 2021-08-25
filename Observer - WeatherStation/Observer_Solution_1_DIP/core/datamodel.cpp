    #include "datamodel.h"
    #include "view.h"

    std::string DataModel::getData() {
      return itsData;
    };

    void DataModel::setData(std::string data) {
      itsData = data;
      std::cout << "Data model data set to: " << data << std::endl;
      updateViews();
    }

    void DataModel::attachView(View* view) {
      itsViews.push_back(view);
    }

    void DataModel::updateViews() {
        for(std::vector<View*>::iterator it = itsViews.begin(); it != itsViews.end(); ++it) {
            (*it)->update(this);
        }
    }