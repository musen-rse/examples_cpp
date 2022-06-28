#ifndef __JSONCONSOLECIRCLE_H__
#define __JSONCONSOLECIRCLE_H__


#include "ConsoleCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONConsoleCircle : public ConsoleCircle {
public:
    JSONConsoleCircle(int r, int x, int y, CircleSaver* circleSaver) : ConsoleCircle(r,x,y), circleSaver(circleSaver) {}

    virtual void save(std::string name) {
        circleSaver->save(name, this);
    }

private:
    CircleSaver* circleSaver;
};

#endif // __JSONCONSOLECIRCLE_H__