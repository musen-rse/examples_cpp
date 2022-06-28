#ifndef __XMLCIRCLESAVER_H__
#define __XMLCIRCLESAVER_H__

#include "Circle.h"

#include <iostream>
#include <fstream>

class XMLCircleSaver
{
public:
    virtual void save(std::string file, Circle* circle) {
        std::string filename = std::string(file + ".xml");
        std::cout << "Save to XML file " << filename << " ... ";
        std::ofstream myfile;
        myfile.open (filename);
        myfile << "<Shape>\n";
        myfile << "  <Circle>\n";
        myfile << "     <radius>" << circle->radius << "</radius>\n";
        myfile << "     <center>\n";
        myfile << "       <x>" << circle->center_x << "</x>\n";
        myfile << "       <y>" << circle->center_y << "</y>\n";
        myfile << "     </center>\n";
        myfile << "  </Circle>\n";
        myfile << "</Shape>\n";
        myfile.close();
        std::cout << "done." << std::endl;
    };
};

#endif // __XMLCIRCLESAVER_H__