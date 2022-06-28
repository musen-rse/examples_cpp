#ifndef __JSONCIRCLESAVER_H__
#define __JSONCIRCLESAVER_H__

#include "Circle.h"

#include <iostream>
#include <fstream>


class JSONCircleSaver
{
public:
    static void save(std::string name, Circle* circle) {
        std::string filename = std::string(name + ".json");
        std::cout << "Save to JSON file " << filename << " ... ";
        std::ofstream myfile;
        myfile.open (filename);
        myfile << "{\n";
        myfile << " \"circle\": \n";
        myfile << "    {\n";
        myfile << "      \"radius\": " << circle->radius << ",\n";
        myfile << "      \"center x\": " << circle->center_x << ",\n";
        myfile << "      \"center y\": " << circle->center_y << "\n";
        myfile << "    }\n";
        myfile << "}\n";
        myfile.close();
        std::cout << "done." << std::endl;
    }

};

#endif // __JSONCIRCLESAVER_H__