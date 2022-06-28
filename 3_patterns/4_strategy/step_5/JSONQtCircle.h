#ifndef __JSONQTCIRCLE_H__
#define __JSONQTCIRCLE_H__


#include "QtCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONQtCircle : public QtCircle {
public:
    JSONQtCircle(int r, int x, int y, JSONCircleSaver* jsonCircleSaver) : QtCircle(r,x,y), jsonCircleSaver(jsonCircleSaver) {}

    virtual void save(std::string name) {
        jsonCircleSaver->save(name, this);
    }

private:
    JSONCircleSaver* jsonCircleSaver;
};


#endif // __JSONQTCIRCLE_H__