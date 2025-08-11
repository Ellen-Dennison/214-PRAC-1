#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"

class ShapeFactory
{  
    protected:
    virtual Shape* createshape() = 0;
    virtual void toString() = 0;
};

#endif