#ifndef VIEW_H
#define VIEW_H

class DataModel;

class View {
public:
    virtual void update(DataModel* dataModel) = 0;
};

#endif // VIEW_H