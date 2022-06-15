#ifndef ADVANCED_SHAPE_FACTORY_H
#define ADVANCED_SHAPE_FACTORY_H


#include "core/shape_factory.h"


class AdvancedSquare : public Shape {
public:
    void draw() override {
        std::cout <<  "Advanced Square" << std::endl;
    }

};


class AdvancedShapeFactory : public ShapeFactory {
public:
    Shape* create(std::string type) {
         if (type == "AdvancedSquare") {
            return new AdvancedSquare();
        }

        return nullptr;
    }

    virtual std::vector<std::string> getShapeTypes() {
        return {"AdvancedSquare"};
    }


};


#endif
