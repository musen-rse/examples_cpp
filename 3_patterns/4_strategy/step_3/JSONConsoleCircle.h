#ifndef __JSONCONSOLECIRCLE_H__
#define __JSONCONSOLECIRCLE_H__


#include "ConsoleCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONConsoleCircle : public ConsoleCircle, JSONCircleSaver {
public:
    JSONConsoleCircle(int r, int x, int y) : ConsoleCircle(r,x,y) {}

    virtual void save(std::string name) {
        JSONCircleSaver::save(name, this);
    }

};

#endif // __JSONCONSOLECIRCLE_H__