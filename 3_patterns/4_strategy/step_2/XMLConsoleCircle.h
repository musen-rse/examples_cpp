#ifndef __XMLCONSOLECIRCLE_H__
#define __XMLCONSOLECIRCLE_H__

#include "ConsoleCircle.h"

#include <iostream>
#include <fstream>

class XMLConsoleCircle : public ConsoleCircle {
public:
    XMLConsoleCircle(int r, int x, int y) : ConsoleCircle(r,x,y) {}

    virtual void save(std::string file) {
        std::string filename = std::string(file + ".xml");
        std::cout << "Save to XML file " << filename << " ... ";
        std::ofstream myfile;
        myfile.open (filename);
        myfile << "<Shape>\n";
        myfile << "  <Circle>\n";
        myfile << "     <radius>" << this->radius << "</radius>\n";
        myfile << "     <center>\n";
        myfile << "       <x>" << this->center_x << "</x>\n";
        myfile << "       <y>" << this->center_y << "</y>\n";
        myfile << "     </center>\n";
        myfile << "  </Circle>\n";
        myfile << "</Shape>\n";
        myfile.close();
        std::cout << "done." << std::endl;
    };

};


#endif // __XMLCONSOLECIRCLE_H__