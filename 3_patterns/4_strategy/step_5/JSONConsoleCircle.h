#ifndef __JSONCONSOLECIRCLE_H__
#define __JSONCONSOLECIRCLE_H__


#include "ConsoleCircle.h"

#include "JSONCircleSaver.h"

#include <iostream>
#include <fstream>


class JSONConsoleCircle : public ConsoleCircle {
public:
    JSONConsoleCircle(int r, int x, int y, JSONCircleSaver* jsonCircleSaver) : ConsoleCircle(r,x,y), jsonCircleSaver(jsonCircleSaver) {}

    virtual void save(std::string name) {
        jsonCircleSaver->save(name, this);
    }

private:
    JSONCircleSaver* jsonCircleSaver;
};

#endif // __JSONCONSOLECIRCLE_H__