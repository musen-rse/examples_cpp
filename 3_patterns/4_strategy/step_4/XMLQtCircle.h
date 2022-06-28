#ifndef __XMLQTCIRCLE_H__
#define __XMLQTCIRCLE_H__

#include "QtCircle.h"

#include "XMLCircleSaver.h"

#include <iostream>
#include <fstream>

class XMLQtCircle : public QtCircle {
public:
    XMLQtCircle(int r, int x, int y) : QtCircle(r,x,y) {}

    virtual void save(std::string file) {
        XMLCircleSaver::save(file, this);
    };

};

#endif // __XMLQTCIRCLE_H__