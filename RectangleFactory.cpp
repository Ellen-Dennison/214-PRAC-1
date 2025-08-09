#include "RectangleFactory.h"


RectangleFactory::RectangleFactory(int length, int width, std::string colour, int position_x,int position_y):ShapeFactory(length, width, colour, position_x,position_y)
{}

Shape* RectangleFactory::createshape()
{   
    Rectangle *r1 = new Rectangle(this->length,this->width,this->colour,this->position_x,this->position_y);
    return r1;
}

void RectangleFactory::toString()
{
   //createshape();
   
}

