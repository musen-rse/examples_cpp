#ifndef __JSONQTCIRCLE_H__
#define __JSONQTCIRCLE_H__


#include "QtCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONQtCircle : public QtCircle {
public:
    JSONQtCircle(int r, int x, int y, CircleSaver* circleSaver) : QtCircle(r,x,y), circleSaver(circleSaver) {}

    virtual void save(std::string name) {
        circleSaver->save(name, this);
    }

private:
    CircleSaver* circleSaver;
};


#endif // __JSONQTCIRCLE_H__