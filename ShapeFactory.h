#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Canvas.h"


class ShapeFactory
{  
    protected:
    virtual Shape* createshape() = 0;
    virtual void toString() = 0;

    public:
    ShapeFactory(int length, int width, std::string colour, int position_x,int position_y);

    private:
    int length;
    int width;
    std::string colour;
    int position_x;
    int position_y;
  

};

#endif