#ifndef __JSONCONSOLECIRCLE_H__
#define __JSONCONSOLECIRCLE_H__


#include "ConsoleCircle.h"

#include <iostream>
#include <fstream>


class JsonConsoleCircle : public ConsoleCircle {
public:
    JsonConsoleCircle(int r, int x, int y) : ConsoleCircle(r,x,y) {}

    virtual void save(std::string name) {
        std::string filename = std::string(name + ".json");
        std::cout << "Save to JSON file " << filename << " ... ";
        std::ofstream myfile;
        myfile.open (filename);
        myfile << "{\n";
        myfile << " \"circle\": \n";
        myfile << "    {\n";
        myfile << "      \"radius\": " << this->radius << ",\n";
        myfile << "      \"center x\": " << this->center_x << ",\n";
        myfile << "      \"center y\": " << this->center_y << "\n";
        myfile << "    }\n";
        myfile << "}\n";
        myfile.close();
        std::cout << "done." << std::endl;
    }

};

#endif // __JSONCONSOLECIRCLE_H__