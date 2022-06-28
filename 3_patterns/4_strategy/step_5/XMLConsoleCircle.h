#ifndef __XMLCONSOLECIRCLE_H__
#define __XMLCONSOLECIRCLE_H__

#include "ConsoleCircle.h"

#include "XMLCircleSaver.h"

#include <iostream>
#include <fstream>

class XMLConsoleCircle : public ConsoleCircle {
public:
    XMLConsoleCircle(int r, int x, int y, XMLCircleSaver* xmlCircleSaver) : ConsoleCircle(r,x,y), xmlCircleSaver(xmlCircleSaver) {}

    virtual void save(std::string file) {
        xmlCircleSaver->save(file, this);
    };


private:
    XMLCircleSaver* xmlCircleSaver;
};


#endif // __XMLCONSOLECIRCLE_H__