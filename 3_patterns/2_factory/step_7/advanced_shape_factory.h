#ifndef ADVANCED_SHAPE_FACTORY_H
#define ADVANCED_SHAPE_FACTORY_H


#include "core/shape_factory.h"


class AdvancedSquare : public Shape{
public:

};


class SimpleShapeFactory : public ShapeFactory {
public:
    Shape* create(std::string type) {
         if (type == "Square") {
            return new AdvancedSquare();
        }

        return nullptr;
    }

    virtual std::vector<std::string> getShapeTypes() {
        return {"AdvancedSquare"};
    }


};


#endif
