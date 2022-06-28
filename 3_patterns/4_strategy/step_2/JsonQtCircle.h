#ifndef __JSONQTCIRCLE_H__
#define __JSONQTCIRCLE_H__


#include "QtCircle.h"

#include <iostream>
#include <fstream>


class JsonQtCircle : public QtCircle {
public:
    JsonQtCircle(int r, int x, int y) : QtCircle(r,x,y) {}

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


#endif // __JSONQTCIRCLE_H__