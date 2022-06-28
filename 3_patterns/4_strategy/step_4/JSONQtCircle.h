#ifndef __JSONQTCIRCLE_H__
#define __JSONQTCIRCLE_H__


#include "QtCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONQtCircle : public QtCircle {
public:
    JSONQtCircle(int r, int x, int y) : QtCircle(r,x,y) {}

    virtual void save(std::string name) {
        JSONCircleSaver::save(name, this);
    }

};


#endif // __JSONQTCIRCLE_H__