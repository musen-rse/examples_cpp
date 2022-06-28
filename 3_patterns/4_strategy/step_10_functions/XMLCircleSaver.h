#ifndef __XMLCIRCLESAVER_H__
#define __XMLCIRCLESAVER_H__

#include "Circle.h"
#include "CircleSaverStrategy.h"

#include <iostream>
#include <fstream>

CircleSaverStrategy createXMLCircleSaverStrategy() {
    return [](std::string name, Circle* circle) -> void {
        std::string filename = std::string(name + ".xml");
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
}



#endif // __XMLCIRCLESAVER_H__
