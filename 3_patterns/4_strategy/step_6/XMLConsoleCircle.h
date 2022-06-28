#ifndef __XMLCONSOLECIRCLE_H__
#define __XMLCONSOLECIRCLE_H__

#include "ConsoleCircle.h"

#include "CircleSaver.h"

#include <iostream>
#include <fstream>

class XMLConsoleCircle : public ConsoleCircle {
public:
    XMLConsoleCircle(int r, int x, int y, CircleSaver* circleSaver) : ConsoleCircle(r,x,y), circleSaver(circleSaver) {}

    virtual void save(std::string file) {
        circleSaver->save(file, this);
    };


private:
    CircleSaver* circleSaver;
};


#endif // __XMLCONSOLECIRCLE_H__