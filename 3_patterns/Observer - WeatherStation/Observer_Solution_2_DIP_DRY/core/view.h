#ifndef VIEW_H
#define VIEW_H

class Sensor;

class View {
public:
    virtual void update(std::string data) = 0;
};

#endif // VIEW_H
