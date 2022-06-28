#ifndef __CIRCLE_H__
#define __CIRCLE_H__

// write to console
#include <iostream>
#include <cmath>

// write to file
#include <fstream>

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(int r, int x, int y) : radius(r), center_x(x), center_y(y) {}

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

    virtual void draw() {
        const int width = radius;
        const int length = radius * 1.5;

        for (int y = width; y >= -width; y -= 2) {
            for (int x = -length; x <= length; x++) {
                if ((int)(std::sqrt(std::pow(x, 2) + std::pow(y, 2))) == radius)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }

    int radius;
    int center_x;
    int center_y;
};

#endif // __CIRCLE_H__