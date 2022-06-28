#ifndef __XMLQTCIRCLE_H__
#define __XMLQTCIRCLE_H__

#include "QtCircle.h"

#include <iostream>
#include <fstream>

class XMLQtCircle : public QtCircle {
public:
    XMLQtCircle(int r, int x, int y) : QtCircle(r,x,y) {}

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

#endif // __XMLQTCIRCLE_H__