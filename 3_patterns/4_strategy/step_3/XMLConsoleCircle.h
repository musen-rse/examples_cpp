#ifndef __XMLCONSOLECIRCLE_H__
#define __XMLCONSOLECIRCLE_H__

#include "ConsoleCircle.h"

#include "XMLCircleSaver.h"

#include <iostream>
#include <fstream>

class XMLConsoleCircle : public ConsoleCircle, XMLCircleSaver {
public:
    XMLConsoleCircle(int r, int x, int y) : ConsoleCircle(r,x,y) {}

    virtual void save(std::string file) {
        XMLCircleSaver::save(file, this);
    };

};


#endif // __XMLCONSOLECIRCLE_H__