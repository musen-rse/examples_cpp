#ifndef __XMLQTCIRCLE_H__
#define __XMLQTCIRCLE_H__

#include "QtCircle.h"

#include "XMLCircleSaver.h"

#include <iostream>
#include <fstream>

class XMLQtCircle : public QtCircle {
public:
    XMLQtCircle(int r, int x, int y, CircleSaver* circleSaver) : QtCircle(r,x,y), circleSaver(circleSaver) {}

    virtual void save(std::string file) {
        circleSaver->save(file, this);
    };

private:
    CircleSaver* circleSaver;

};

#endif // __XMLQTCIRCLE_H__