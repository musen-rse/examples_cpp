#ifndef __XMLQTCIRCLE_H__
#define __XMLQTCIRCLE_H__

#include "QtCircle.h"

#include "XMLCircleSaver.h"

#include <iostream>
#include <fstream>

class XMLQtCircle : public QtCircle {
public:
    XMLQtCircle(int r, int x, int y, XMLCircleSaver* xmlCircleSaver) : QtCircle(r,x,y), xmlCircleSaver(xmlCircleSaver) {}

    virtual void save(std::string file) {
        xmlCircleSaver->save(file, this);
    };

private:
    XMLCircleSaver* xmlCircleSaver;

};

#endif // __XMLQTCIRCLE_H__